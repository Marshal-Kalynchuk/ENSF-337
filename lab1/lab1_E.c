/*
 * File Name: lab1_E.c
 * Assignment: Lab 1 Exercise E
 * Lab Section: B02
 * Completes by Marshal Kalynchuk
 * Submission Date: Sept 16, 2022
 */
#include<stdio.h>
#include<math.h>

int main() {
	// Initialize vars
	float a, b, c, inner_root, denominator, left_side, right_side, sum;

	// Get user input
	printf("\nPlease enter a: ");
	scanf("%f", &a);
	printf("\nPlease enter b: ");
	scanf("%f", &b);
	printf("\nPlease enter c: ");
	scanf("%f", &c);

	// Perform calculations
	denominator = 2 * a;
	left_side = -1 * b / denominator;	
	inner_root = (b * b) - (4 * a * c);
	right_side = sqrt(fabs(inner_root)) / denominator;
	sum = left_side + right_side;

	// Print output
	if (inner_root < 0) 
		printf("\nThe roots are: %.2f + i%.2f and %.2f - i%.2f\n\n", left_side, right_side, left_side, right_side);
	else
		printf("\nThe roots are: %.2f and %.2f\n\n", sum, sum);

	return 0;
}
