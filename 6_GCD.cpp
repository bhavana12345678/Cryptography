#include <iostream>
using namespace std;

int gcd(int n1, int n2)
{
    if(n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
int main ()
{
    int n1, n2;
    
    cout <<"Enter two positive integers : ";
    cin>> n1 >> n2;
    
    cout << "G.C.D of " << n1 << " and " << n2 << " is : " <<gcd(n1, n2);
    cout<<"Name : Bhavana M.S. , Meghana M.P. and Preethi A. "<<endl<<"Roll No : 3, 15 and 35"<<endl;
    return 0;
}
