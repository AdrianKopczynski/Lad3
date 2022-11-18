#include <iostream>
#include <math.h>
using namespace std;


int main() {
	double a,b;
	cout << "Podaj 1 liczbe: "<<endl;
	cin >> a;
	cout << "Podaj 2 liczbe: "<<endl; 
	cin >> b;
	double w1,w2,w3,w4;
	w1 = a + b;
	w2 = a - b;
	w3 = a * b;
	w4 = a / b;
	cout.precision(3);
	cout  << "Suma tych liczb to: "  << w1 << '\n' << endl;
	cout  << "Roznica tych liczb to: "  << w2 << '\n' << endl;
	cout  << "Iloczyn tych liczb to: "  << w3 << '\n' << endl;
	cout  << "Iloraz tych liczb to: "  << w4 << '\n' << endl;
	return 0;
}
