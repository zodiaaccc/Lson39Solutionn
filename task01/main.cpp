#include <iostream>
using namespace std;

string vectorInString(int* vector, int size);
void randomNumbers(int* vector, int size, int a, int b);
void bubble_sort(int* vector, int size);

int main() {
	int vector[]{ 1,2,5,6,5,6,123,8,9,10 };
	int size = sizeof(vector) / sizeof(int);


	cout << vectorInString(vector, size) << "before" << endl;
	bubble_sort( vector, size);
	cout << vectorInString(vector, size) <<"after"<<  endl;

	randomNumbers(vector, size, 0, 100);
	cout << vectorInString(vector, size) << endl;
}