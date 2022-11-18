#include <iostream>
using namespace std;

int main()
{
    int row,c=1,blank,i,j;
    cout << " Wprowadz ilosc wierszy: ";
    cin >> row;
    for(i=0;i<row;i++)
    {
        for(blank=1;blank<=row-i;blank++)
        cout<<"  ";
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
        cout<<endl;
    }
}
