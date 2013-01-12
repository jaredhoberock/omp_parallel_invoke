#include "parallel_invoke.hpp"
#include <iostream>
#include <thread>
#include <omp.h>

int main()
{
  std::cout << "invoke2:" << std::endl;

  parallel_invoke(
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 0 is running in thread " << tid << std::endl;
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 1 is running in thread " << tid << std::endl;
    }
  );

  std::cout << std::endl;
  std::cout << "invoke3:" << std::endl;

  parallel_invoke(
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 0 is running in thread " << tid << std::endl;
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 1 is running in thread " << tid << std::endl;
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 3 is running in thread " << tid << std::endl;
    }
  );

  std::cout << std::endl;
  std::cout << "invoke4:" << std::endl;

  parallel_invoke(
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 0 is running in thread " << tid << std::endl;
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 1 is running in thread " << tid << std::endl;
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 3 is running in thread " << tid << std::endl;
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 4 is running in thread " << tid << std::endl;
    }
  );

  std::cout << std::endl;
  std::cout << "invoke5:" << std::endl;

  parallel_invoke(
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 0 is running in thread " << tid << std::endl;
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 1 is running in thread " << tid << std::endl;
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 3 is running in thread " << tid << std::endl;
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 4 is running in thread " << tid << std::endl;
    },
    [](){
      int tid = omp_get_thread_num();
      std::this_thread::sleep_for(std::chrono::seconds(tid));
      std::cout << "  task 5 is running in thread " << tid << std::endl;
    }
  );

  return 0;
}

