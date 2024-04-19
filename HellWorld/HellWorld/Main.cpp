#include <iostream>
#include <string>


void PrintArrayByValue(int arr[], int length)
{
	printf("The array members are: ");

	for (int i = 0; i < length; ++i)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
};

void PrintArrayByReference(int* arr, int length)
{
	printf("The array members are: ");

	for (int i = 0; i < length; ++i)
	{
		// Deference arr and print out its value,
		// then the arr pointer is incremented and continue
		printf("%d ", *(arr++));
	}
	printf("\n");
};

int main()
{
	int i[5]{ 2,4,6,8,12 };
	// Divide total bytes by the size of one element to determine the number of elements and sizeof(i) = total bytes
	int j = sizeof(i) / sizeof(i[0]);

	// Call the functions respectively and pass in the array and its length
	PrintArrayByValue(i, j);
	PrintArrayByReference(i, j);

	system("pause>0");
}