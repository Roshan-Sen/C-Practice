#include <stdio.h>
/*************************************
 * variablestesting - learning       *
 * variables usage and assignment in *
 * the c language.                   *
 *                                   *
 * Author: Roshan Sen                *
 *                                   *
 * Purpose: Learning variables,      *
 * assignment, and printing values   *
 * using c.                          *
 *                                   *
 * Usage: Run the program to print   *
 * some values.                      *
 *************************************/

int term;

int main()
{
	int ans, val, num;
	/* Declared multiple integer values*/
	val = 17;
	num = 304;
	ans = num - val;
	/* Assign those values to integers */
	printf("%d minus %d equals %d\n", num, val, ans);
	term = 10;
	printf("%d times %d equals %d\n", term, val, term * val);

	/* Floating point values */
	float cakeleft = 1.0;
	printf("I ate half the cake so cakeleft is %f\n", cakeleft / 2);
	
	float onefraction = 1 / 3;
	float otherfraction = 1.0 / 3.0;
	printf("Syntax is important! 1/3 into a float gives %f while 1.0/3.0 into a float gives %f\n", onefraction, otherfraction);
	
	/* Answer to 2 + 2 */
	int sum = 2 + 2;
	printf("2 + 2 = %d\n", sum);
	/* Trying 7.0/22.0 */
	float product = 7.0/22.0;
	printf("7.0/22.0 = %f\n", product);

	return 0;
}
