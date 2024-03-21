//C PROGRAM
#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Prompting the user to enter weight and height
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    // Calculating BMI
    bmi = weight / (height * height);

    // Displaying the calculated BMI
    printf("BMI: %.2f\n", bmi);

    return 0;

}
