#include <iostream>
using namespace std;

int main()
{
   float a, b;
   char oprt;
   
   cout << " პირველი რიცხვი: ";
   cin >> a;
   cout << " შეიყვანეთ (+, -, *, /): ";
   cin >> oprt;
   cout << "მეორე რიცხვი: ";
   cin >> b;
   cout << endl;
   
   switch (oprt) {
       case '+' :
       cout << a + b;
       break;
       
       case '-' :
       cout << a -b;
       break;
       
       case '*' :
       cout << a * b;
       break;
       
       case '/' :
       cout << a / b;
       break;
       
       default :
       cout << "შეიყვანეთ ოპერატორი სწორად.";
   }

    return 0;
}
