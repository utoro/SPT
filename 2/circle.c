#include <stdio.h>

int main(){
    float r = 0;
    const float phi = 3.14159;
    printf("Enter cicrle radius:");
    scanf("%f", &r);

    printf("\nRadius: %f\n", r);
    printf("Diameter: %f\n", 2*r);
    printf("Area: %f\n", phi*r*r);
    printf("Circumference: %f\n", 2*phi*r);

    return 0;
}
