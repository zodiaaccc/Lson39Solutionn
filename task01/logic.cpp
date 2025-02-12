#include <iostream>
#include <string>

using namespace std;

string vectorInString(int* vector , int size) {
    string vectorString = "";

    for (int i = 0; i < size; i ++) {
        vectorString += to_string(vector[i]) + " ";
    }
    return vectorString;
}


void randomNumbers(int* vector, int size, int a, int b) {

    for (int i = 0; i < size; i++) {
        vector[i] = rand() % (b - a + 1) + a;
    }
}

void bubble_sort(int* vector, int size) {
	for (int i = 0; i < size; i++) {
		bool flag = true;
		for (int j = 0; j < size - 1 - i; j++) {

			if (vector[j] > vector[j + 1]) {

				int t = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = t;
				flag = false;
			}
		}
		if (flag) {
			break;
		}
	}
	
}

void selected_sort(int* vector, int size) {

	for (int j = 0; j < size; j++)
	{
		int index = j;
		for (int i = j + 1; i < size; i++) {
			if (vector[i] < vector[index]) {
				index = i;
			}

		}
		int t = vector[j];
		vector[j] = vector[index];
		vector[index] = t;
	}

}


