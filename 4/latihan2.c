#include <omp.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b = 0;
    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);
    printf("\n");

    #pragma omp parallel num_threads(4)
    {
        int id = omp_get_thread_num();
        printf("thread id = %d\n", id);

        if (id == 0)
        {
            printf("Penjumlahan %d + %d = %d\n\n", a, b, a+b);
        }else if (id == 1)
        {
            printf("Pengurangan %d - %d = %d\n\n", a, b, a-b);
        }else if (id == 2)
        {
            printf("Perkalian %d * %d = %d\n\n", a, b, a*b);
        }else
        {
            printf("Pembagian %d / %d = %.2f\n\n", a, b, a/(float)b);
        }
    }
    return 0;
}
