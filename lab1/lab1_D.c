 /*
* File Name: lab1_D.c
* Assignment: Lab 1 Exercise D
* Lab section: B02
* Completed by: Marshal Kalynchuk
* Submission Date: Sept 16, 2022
*/
#include<stdio.h>
#include<math.h>
double taylor_sin_approximation(int order, double exp);
const float rads_per_circle = 2 * 3.14153895;

int main()
{
// Initialize vars
double input_angle, truncated_angle, sin_product, taylor_product;
int taylor_order = 7;

// Get user input
printf("\nPlease input an angle in radiants: ");
scanf("%lf", &input_angle);

// Perform calculations
truncated_angle = input_angle - floor(input_angle / rads_per_circle) * rads_per_circle;
sin_product = sin(truncated_angle);
taylor_product = taylor_sin_approximation(taylor_order, truncated_angle);

// Print outputs
printf("The sin of %.2lf is %.2lf\n", input_angle, sin_product);
printf("The taylor series approximation of sin(%.2lf) to the %dth order is: %.2lf\n\n", input_angle, taylor_order, taylor_product);

return 0;
}
double taylor_sin_approximation(int order, double num) {
// Initialize vars
double approx_sum, factor;
int i, sign;
// Loop order'th times
for (i = 1, sign = 1, factor = 1; i <= (order * 2); i += 2, sign *= -1, factor *= (i * (i - 1))) {
    approx_sum += sign * pow(num, i) / factor;
}
return approx_sum;
}
