#include "parallel_invoke.hpp"
#include <iostream>
#include <thread>
#include <omp.h>

struct child_task
{
  int parent_id, id;

  child_task(int p, int i)
    : parent_id(p), id(i)
  {}

  void operator()() const
  {
    int tid = omp_get_thread_num();
    std::this_thread::sleep_for(std::chrono::seconds(tid));
    std::cout << "Child task " << id << " of parent " << parent_id << " is running in thread " << tid << std::endl;
  }
};


int main()
{
  if(!omp_get_nested())
  {
    std::cerr << "Enable nesting by setting environment variable OMP_NESTED to TRUE" << std::endl;
    return 0;
  }

  parallel_invoke(
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "Parent task 1 is running in thread " << tid << std::endl;

      parallel_invoke(child_task(1,1), child_task(1,2), child_task(1,3), child_task(1,4));

      std::this_thread::sleep_for(std::chrono::seconds(8));
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "Parent task 2 is running in thread " << tid << std::endl;

      parallel_invoke(child_task(2,1), child_task(2,2), child_task(2,3), child_task(2,4));

      std::this_thread::sleep_for(std::chrono::seconds(8));
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "Parent task 3 is running in thread " << tid << std::endl;

      parallel_invoke(child_task(3,1), child_task(3,2), child_task(3,3), child_task(3,4));

      std::this_thread::sleep_for(std::chrono::seconds(8));
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "Parent task 4 is running in thread " << tid << std::endl;

      parallel_invoke(child_task(4,1), child_task(4,2), child_task(4,3), child_task(4,4));

      std::this_thread::sleep_for(std::chrono::seconds(8));
    }
  );

  return 0;
}

