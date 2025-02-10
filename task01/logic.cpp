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

		for (int j = 0; j < size - 1; j++) {

			if (vector[i] < vector[i + 1]) {

				int t = vector[j + 1];
				vector[j + 1] = vector[j];
				vector[j] = t;
			}
		}
	}
}

