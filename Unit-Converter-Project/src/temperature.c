/*****************************
 * temperature: library to   * 
 * house the functions in    *
 * relation to temperature   *
 * unit conversion.          *
 *                           *
 * Author: Roshan Sen        *
 *                           *
 * Purpose: Implement methods*
 * related to temperature    *
 * unit conversion.          *
 *                           *
 * Usage: include the        *
 * temperature.h library in  *
 * order to use these        *
 * functions.                *
 *                           *
 *****************************/

//Function to convert celsuis to fahrenheit.
float celsuis_to_fahrenheit(float *c)
{
	float f = 9.0 / 5.0 * (*c) + 32.0;
       	return f;
}
//Function to convert fahrenheit to celsius
float fahrenheit_to_celsius(float *f)
{
	float c = (*f - 32.0) * 5 / 9;
	return c;
}
