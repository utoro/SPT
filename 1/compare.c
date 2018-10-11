#include <stdio.h>

int main(){
    int a, b = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("Both number equals (%d == %d)\n", a, b); // jika hasilnya sama
    }else{
        if (a > b)
        {
            printf("First number bigger than second number (%d > %d)\n", a, b);
        }else{
            printf("Second number bigger than first number (%d > %d)\n", b, a);
        }
    }

    return 0;
}
