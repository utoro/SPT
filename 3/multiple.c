#include <stdio.h>

int main(){
    int n1, n2 = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if(n1 % n2 == 0){
        printf("%d is a multiple of %d by a factor of %d\n",n1, n2, n1/n2);
    }else{
        printf("%d is not a multiple of %d\n", n1, n2);
    }
    return 0;
}
