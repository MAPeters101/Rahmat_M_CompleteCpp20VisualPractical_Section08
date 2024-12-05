#include <iostream>

using namespace std;

/**/
int main() {
	int Array[5]{ 1, 2, 3, 4, 5 };

	int* Arrayptr{ Array };
	int* Newptr{ Arrayptr + 2 };
	// {Array + (2 * sizeof(int)}

	//int* Newptr1{ *Arrayptr + 2 };
	int ArrayValue2{ *Arrayptr + 2 };
	cout << ArrayValue2 << endl;
	ArrayValue2 = (*Arrayptr) + 2;
	cout << ArrayValue2 << endl;

	int ArrayS[5]{ 1, 2, 3, 4, 5 };
	int* ArraySptr{ ArrayS };
	int* ArraySptr2{ ArrayS + 4 };

	auto Difference{ ArraySptr2 - ArraySptr };
	cout << Difference << endl;


	return 0;
}



