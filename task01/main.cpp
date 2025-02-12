#include <iostream>
using namespace std;

//крутой комент
string vectorInString(int* vector, int size);
void randomNumbers(int* vector, int size, int a, int b);
void bubble_sort(int* vector, int size);
void selected_sort(int* vector, int size);

int main() {
	int vector[]{ 1,2,5,5,6,123,8,9,10 };
	int size = sizeof(vector) / sizeof(int);


	cout << vectorInString(vector, size) << "before" << endl;
	/*int count =  bubble_sort( vector, size);*/
	selected_sort( vector,  size);
	/*cout << "count: " << count << endl;*/
	cout << vectorInString(vector, size) << "after" << endl;
	randomNumbers(vector, size, 0, 100);
	cout << vectorInString(vector, size) << endl;
}