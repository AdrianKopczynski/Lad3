#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	float a,b;
	cout << "Podaj 1 liczbe: "<<endl;
	cin >> a;
	cout << "Podaj 2 liczbe: "<<endl; 
	cin >> b;
	float w1,w2,w3,w4;
	w1 = a+b;
	w2 = a-b;
	w3 = a*b;
	w4 = a/b;
	cout << cout.precision(2) << "Suma tych liczb to: "  << w1 << endl;
	cout << cout.precision(2) << "Roznica tych liczb to: "  << w2 << endl;
	cout << cout.precision(2) << "Iloczyn tych liczb to: "  << w3 << endl;
	cout << cout.precision(2) << "Iloraz tych liczb to: "  << w4 << endl;
	return 0;
}
