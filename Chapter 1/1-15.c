/* 1-15. Rewrite the temperature conversion program of Section 1.2 to
 use a function for conversion. */

#include <stdio.h>
float toCelsius(float f)
{
	return (5.0 / 9.0) * (f - 32.0);
}

int main()
{
	float fahr, celsius;
	float lower = 0, upper = 300, step = 20;

	fahr = lower;
	printf("Fahrenheit\tCelsius\n");
	while (fahr <= upper) {
		celsius = toCelsius(fahr);
		printf("%3.0f\t%10.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}