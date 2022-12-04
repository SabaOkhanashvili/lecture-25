
#include <iostream>

using namespace std;

int AddTwo (int addend1, int addend2)  {
	return addend1 + addend2;
}

int main () 
{
	int number1, number2, sum;
	
	cout << "შეიყვანე ორი მთელი რიცხვი:\n";
	cin >> number1 >> number2;
	sum = AddTwo(number1, number2);
	cout << "\nჯამი არის " << sum << ".";
	
	
}

