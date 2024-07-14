#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
string encrypt(string text,int shift){
    string encryptedtxt = " " ;
    for (char character : text) {
        if (isalpha(character)) {
            char shiftedCharacter = character + shift;                 
            if (isupper(character)) {
                if (shiftedCharacter > 'Z') {
                    shiftedCharacter -= 26;
                } else if (shiftedCharacter < 'A') {
                    shiftedCharacter += 26;
                }
            }
            else if (islower(character)) {
                if (shiftedCharacter > 'z') {
                    shiftedCharacter -= 26;
                } else if (shiftedCharacter < 'a') {
                    shiftedCharacter += 26;
                }
            }
            encryptedtxt += shiftedCharacter;
        } else {

            encryptedtxt += character;
        }
    }
    return encryptedtxt;
}
int main(){
    string text;
    int shift = 3;
    cout<<"caesar cipher !!"<<endl;
    cout<<"enter the plaintext : ";
    getline(cin,text);
    string encryptedtext = encrypt(text,shift);
    cout<<"encrypted ciphertext is : "<<encryptedtext<<endl;
    cout<<"Name : Bhavana M.S. , Meghana M.P. and Preethi A. "<<endl<<"Roll No : 3, 15 and 35"<<endl;
    cin.get();
    return 0;
}