#include <iostream>
using namespace std;

int main() {
    int n, m = 1, mod;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the modulus: ";
    cin >> mod;

        //Bruteforce
    while (((n * m) % mod) != 1) {
        m++ ;
    }

    cout << "The multiplicative inverse is: " << m << endl;
    cout<<"Name : Bhavana M.S. , Meghana M.P. and Preethi A. "<<endl<<"Roll No : 3, 15 and 35"<<endl;
    return 0;
}
