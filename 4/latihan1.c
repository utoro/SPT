#include <omp.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    #pragma omp parallel num_threads(4)
    {
        int id = omp_get_thread_num();
        printf("thread id = %d\n", id);
    }
    return 0;
}
