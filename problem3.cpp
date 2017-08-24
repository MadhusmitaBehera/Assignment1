#include <iostream>
using namespace std;

int main() {
int a,b,sum,dif,mul,div,rem;
cout << "Enter two numbers:" << endl;
cin >> a;
cin >> b;
sum=a+b;
dif=a-b;
mul=a*b;
div=a/b;
rem=a%b;
cout << "Sum=" << sum << endl << "Difference=" << dif << endl << "Product=" << mul << endl << "Quotient=" << div << endl << "Remainder=" << rem;
 
	return 0;
}
