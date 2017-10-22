#include <iostream>
#include <memory>
#include <utility>
#include <math.h>
#include <assert.h>
#include <limits>

// Concatenates two strings. str1 and str2 must not be null.
char *concatenate(char *str1, char *str2)
{
	assert(str1!=NULL && "STR1 is NULL");
	assert(str2!=NULL && "STR2 is NULL");

	assert((long long)(strlen(str1) + strlen(str2) + 1) <= SIZE_MAX && "Integer overflow at size");
	size_t size = strlen(str1) + strlen(str2) + 1;
	char *result = new char[size];

	strcpy(result, str1);
	strcat(result, str2);

	return result;
}

typedef std::pair<double, double> Roots;

Roots getQuadraticEquationRoots(double a, double b, double c)
{
	assert(b * b - 4 * a * c >= 0 && "Negative DELTA, negative sqrt cannot be initiate");
	double discriminant = b * b - 4 * a * c;
	double discriminantRoot = sqrt(discriminant);

	Roots roots;

	roots.first = (-b + discriminantRoot) / (2 * a);
	roots.second = (-b - discriminantRoot) / (2 * a);

	return roots;
}

int numberAt(int array[], size_t arraySize, int index)
{
	assert(array!=NULL && "The array is NULL");
	assert(index > 0 && index < arraySize && "Index array out of range");
	return array[index];
}

long getLifeTimeInSeconds()
{
	assert((long long)(60 * 60 * 24 * 365 * 120) <= LONG_MAX && "Integer overflow at size");
	return 60 * 60 * 24 * 365 * 120;
}
