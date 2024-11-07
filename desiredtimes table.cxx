#include <iostream>
using namespace std;
int main()
{
int i, j;
cout << "enter i" <<endl;
cin >> i;
cout << "enter j" <<endl;
cin >> j ;
cout <<endl;
cout << "i = " << i <<endl;
cout << "j = " << j <<endl;
cout     <<endl;
for  (i=i; i<=3; i++)
{
    for (j=j; j<=30; j++)
    {
    cout <<i<<" * "<<j<< " = " <<i*j <<endl;
    }
}
return 0;
}