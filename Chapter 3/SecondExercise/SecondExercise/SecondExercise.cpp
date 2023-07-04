#include <cstdio>

void read_from(char* array, int index)
{
	int size = sizeof(array) / sizeof(char);
	if (index >= 0 && index <= size)
	{
		printf("\nIndex %d of array, holds '%c'", index, array[index]);
	}
	else
	{
		printf("\nOut of bounds");
	}
}

void write_to(char* array, int index, char character)
{
	int size = sizeof(array) / sizeof(char);
	if (index >= 0 && index <= size)
	{
		array[index] = character;
		printf("\nArray: %s", array);
	}
	else
	{
		printf("\nOut of bounds");
	}
}

int main()
{
	char lower[] = "abc?e";
	char upper[] = "ABC?E";
	char* upper_ptr = upper;

	lower[3] = 'd';
	upper_ptr[3] = 'D';

	char letter_d = lower[3];
	char letter_D = upper_ptr[3];

	read_from(upper, 4);
	write_to(lower, 3, 'r');
}