#include <iostream>

using namespace std;


int main() {
	/*
	int* Number{ new int{26} };
	int* DynamicArray{ new int[10] {1,2,3,4,5,6} };

	cout << "Address of Number: " << Number << endl;
	cout << "Value of Number: " << *Number << endl;

	cout << "Address of Array: " << DynamicArray << endl;
	cout << "Value of Array: " << DynamicArray[0] << endl;

	Number = new int{ 29 };  // Creates a memory leak without deleting previous int=26
	cout << "Address of Number: " << Number << endl;
	cout << "Value of Number: " << *Number << endl;

	delete Number;
	delete[] DynamicArray;
	cout << "Address of Number: " << Number << endl;
	cout << "Address of Array: " << DynamicArray << endl;

	//cout << "Value of Number: " << *Number << endl;
	//cout << "Value of Array: " << DynamicArray[0] << endl;

	delete Number;
	delete[] DynamicArray;
*/

	// Correct ways.
	double* Number1{ new double{26} };
	int* DynamicArray1{ new int[10] {1,2,3,4,5,6} };

	cout << "Address of Number1: " << Number1 << endl;
	cout << "Value of Number1: " << *Number1 << endl;

	cout << "Address of DynamicArray1: " << DynamicArray1 << endl;
	cout << "Value of DynamicArray1: " << DynamicArray1[0] << endl;








	return 0;
}