#include <iostream>
using namespace std;

void addNum(int, int, int&);

int main()
{
	int number1,number2,sum;
	
	//get values;
	cout<<"შეიყვანეთ ორი მთელი რიცხვი დასამატებლად"<<endl;
	
	cout<<"მიუთითეთ პირველი რიცხვი: ";
	cin>>number1;
	cout<<"მიუთიტეტ მეორე რიცხვი: ";
	cin>>number2;
	

	addNum(number1, number2, sum);
	
	//print sum
	cout<<number1<<" + "<<number2<<" = "<<sum;
 return 0;
}
void addNum(int addend1, int addend2, int &sum)
{
	sum = addend1 + addend2;
}