#include <iostream>
using namespace std;

string vectorInString(int* vector, int size);
void randomNumbers(int* vector, int size, int a, int b);

int main() {
	int vector[]{ 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(vector) / sizeof(int);


	cout << vectorInString(vector, size) << endl;


	randomNumbers(vector, size, 0, 100);
	cout << vectorInString(vector, size) << endl;
}