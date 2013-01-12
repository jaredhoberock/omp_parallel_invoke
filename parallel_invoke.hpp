#include <omp.h>

template<typename Function1, typename Function2>
void parallel_invoke(Function1 f1, Function2 f2)
{
#pragma omp parallel for
  for(int i = 0; i < 2; ++i)
  {
    switch(i)
    {
      case 0:
      {
        f1();
        break;
      }

      case 1:
      {
        f2();
        break;
      }
    }
  }
}

template<typename Function1, typename Function2, typename Function3>
void parallel_invoke(Function1 f1, Function2 f2, Function3 f3)
{
#pragma omp parallel for
  for(int i = 0; i < 3; ++i)
  {
    switch(i)
    {
      case 0:
      {
        f1();
        break;
      }

      case 1:
      {
        f2();
        break;
      }

      case 2:
      {
        f3();
        break;
      }
    }
  }
}

template<typename Function1, typename Function2, typename Function3, typename Function4>
void parallel_invoke(Function1 f1, Function2 f2, Function3 f3, Function4 f4)
{
#pragma omp parallel for
  for(int i = 0; i < 4; ++i)
  {
    switch(i)
    {
      case 0:
      {
        f1();
        break;
      }

      case 1:
      {
        f2();
        break;
      }

      case 2:
      {
        f3();
        break;
      }
      
      case 3:
      {
        f4();
        break;
      }
    }
  }
}

template<typename Function1, typename Function2, typename Function3, typename Function4, typename Function5>
void parallel_invoke(Function1 f1, Function2 f2, Function3 f3, Function4 f4, Function5 f5)
{
#pragma omp parallel for
  for(int i = 0; i < 5; ++i)
  {
    switch(i)
    {
      case 0:
      {
        f1();
        break;
      }

      case 1:
      {
        f2();
        break;
      }

      case 2:
      {
        f3();
        break;
      }
      
      case 3:
      {
        f4();
        break;
      }

      case 4:
      {
        f5();
        break;
      }
    }
  }
}

template<typename Function1, typename Function2, typename Function3, typename Function4, typename Function5, typename Function6>
void parallel_invoke(Function1 f1, Function2 f2, Function3 f3, Function4 f4, Function5 f5, Function6 f6)
{
#pragma omp parallel for
  for(int i = 0; i < 6; ++i)
  {
    switch(i)
    {
      case 0:
      {
        f1();
        break;
      }

      case 1:
      {
        f2();
        break;
      }

      case 2:
      {
        f3();
        break;
      }
      
      case 3:
      {
        f4();
        break;
      }

      case 4:
      {
        f5();
        break;
      }

      case 5:
      {
        f6();
        break;
      }
    }
  }
}

template<typename Function1, typename Function2, typename Function3, typename Function4, typename Function5, typename Function6, typename Function7>
void parallel_invoke(Function1 f1, Function2 f2, Function3 f3, Function4 f4, Function5 f5, Function6 f6, Function7 f7)
{
#pragma omp parallel for
  for(int i = 0; i < 7; ++i)
  {
    switch(i)
    {
      case 0:
      {
        f1();
        break;
      }

      case 1:
      {
        f2();
        break;
      }

      case 2:
      {
        f3();
        break;
      }
      
      case 3:
      {
        f4();
        break;
      }

      case 4:
      {
        f5();
        break;
      }

      case 5:
      {
        f6();
        break;
      }

      case 6:
      {
        f7();
        break;
      }
    }
  }
}

template<typename Function1, typename Function2, typename Function3, typename Function4, typename Function5, typename Function6, typename Function7, typename Function8>
void parallel_invoke(Function1 f1, Function2 f2, Function3 f3, Function4 f4, Function5 f5, Function6 f6, Function7 f7, Function8 f8)
{
#pragma omp parallel for
  for(int i = 0; i < 8; ++i)
  {
    switch(i)
    {
      case 0:
      {
        f1();
        break;
      }

      case 1:
      {
        f2();
        break;
      }

      case 2:
      {
        f3();
        break;
      }
      
      case 3:
      {
        f4();
        break;
      }

      case 4:
      {
        f5();
        break;
      }

      case 5:
      {
        f6();
        break;
      }

      case 6:
      {
        f7();
        break;
      }

      case 7:
      {
        f8();
        break;
      }
    }
  }
}

