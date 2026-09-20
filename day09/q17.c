/*Q17: Write a program to find the roots of a quadratic equation and categorize them.


Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float d, root1, root2;

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Invalid input. a cannot be 0.");
    }
    else {
        d = b * b - 4 * a * c;

        printf("Discriminant = %.2f\n", d);

        if (d > 0) {
            printf("Roots are real and distinct\n");

            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);

            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
        else {
            if (d == 0) {
                printf("Roots are real and equal\n");

                root1 = -b / (2 * a);

                printf("Root 1 = %.2f\n", root1);
                printf("Root 2 = %.2f\n", root1);
            }
            else {
                printf("Roots are imaginary\n");
            }
        }
    }

    return 0;
}