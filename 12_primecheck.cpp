#include<iostream>
using namespace std;
int main(){
    int i, num ,count = 0;
    cout<<"enter the number : ";
    cin>>num;
    for(i=1;i<=num;i++){
       if(num%i==0){
        count ++;
       }
    }
    if(count==2){
        cout<<"the number is prime ";
    }   
    else {
        cout<<"the number is composite";
    }
    cout<<"Name : Bhavana M.S. , Meghana M.P. and Preethi A. "<<endl<<"Roll No : 3, 15 and 35"<<endl;
}
