// SelectionSort.cpp : Defines the entry point for the console application.

#include "stdafx.h"

void fill_array(int a[], int size, int&numberUsed);
// Precondition: size is the declared size of the array a.
// Postcondition: number_used is the number of values stored in a.
// a[0] through a[number_used - 1] have been filled with
// non negative integers read from the keyboard.

void sort(int a[], int number_used);
// Precondition: number_used <= declared size of the array a.
// The array elemenets a[0] through a[number_used - 1] have values.
// Postcondition: The values of a[0] through a[number_used - 1] have
// been rearragned so that a[0] <= a[1] ... <= a[number_used - 1].

void swap_values(int&v1, int&v2);
// Interchanges the values of v1 and v2

int index_of_smallest(const int a[], int start_index, int number_used);
// Precondition: 0 <= start_index < number_used. Referenced array elements
// have values.
// Returns the index i such that a[i] is the smallest of the values
// a[start_index], a[start_index + 1], ..., a[number_used - 1].

int main()
{
	using namespace std;
	cout << "This program sorts numbers from lowest to highest using Selection Sort.\n";

	int sample_array[100], number_used;
	fill_array(sample_array, 100, number_used);
	sort(sample_array, number_used);

	cout << "In sorted order the numbers are:\n";
	for (int index = 0; index < number_used; index++)
	cout << sample_array[index] << " " << endl;

	return 0;
}

// uses iostream:
void fill_array(int a[], int size, int& number_used)
{
	using namespace std;
	cout << "Enter up to " << size << "non-negative whole numbers.\n"
		<< "Mark the end of the list with a negative number.\n";
	int next, index = 0;
	cin >> next;
	while ((next >= 0) && (index < size))
	{
		a[index] = next;
		index++;
		cin >> next;
	}
	number_used = index;
}

void sort(int a[], int number_used)
{
	int index_of_next_smallest;
	for (int index = 0; index < number_used - 1; index++)
	{
		// place the correct value in a[index]:
		index_of_next_smallest = index_of_smallest(a, index, number_used);
		swap_values(a[index], a[index_of_next_smallest]);
		// a[0] <= a[1]...<= a[index] are the smallest of the original array
		// elements. the rest of the elements are in the remaining positions
	}
}

void swap_values(int& v1, int& v2)
{
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}

int index_of_smallest(const int a[], int start_index, int number_used)
{
	int min = a[start]
}