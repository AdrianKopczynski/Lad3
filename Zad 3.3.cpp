#include <iostream>
#include <cmath>
using namespace std;


int main() {
	float a,b,c;
	cout << "ax^2+bx+c=0"<<endl<<"a: " <<endl;
	cin >> a;
	cout << "b: " << endl;
	cin >> b;
	cout << "c: " << endl;
	cin >> c;
	cout << a << "x^2+"<<b<<"x-"<<c<<"= 0 : "<< endl<<endl;
	float delta,pierwDelta,x1,x2,x0;
	delta = (b*b)-(4*a*c);
	pierwDelta = sqrt(delta);
	x1 = (-b+pierwDelta)/(2*a);
	x2 = (-b-pierwDelta)/(2*a);
	x0 = -b/(2*a);
	if (delta>0){
		cout << "x1="<<x1<< "        x2="<<x2<<endl;
	}
	else if(delta==0){
		cout << "x0="<<x0;
	}
	else{
		cout << "Nie ma rozwiazania.";
	}
	return 0;
}
