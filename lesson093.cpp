#include <iostream>

using namespace std;


/**/
int main() {
	int Num1{ 5 }, Num2{ 9 };

	const int* Numptr{ &Num1 };
	cout << Numptr << endl;
	cout << *Numptr << endl;

	//*Numptr = 15;
	Numptr = &Num2;
	cout << Numptr << endl;
	cout << *Numptr << endl;
	cout << "-------------------------------\n\n";

	int Number1{ 14 };
	int Number2{ 11 };

	int* const Numberptr{ &Number1 };
	cout << Number1 << endl;
	cout << &Number1 << endl;
	cout << Numberptr << endl;
	cout << *Numberptr << endl << endl;

	*Numberptr = 20;
	cout << Number1 << endl;
	cout << &Number1 << endl;
	cout << Numberptr << endl;
	cout << *Numberptr << endl << endl;

	//Numberptr = &Number2;

	return 0;
}

