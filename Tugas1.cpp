#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout<<"Masukkan nilai = ";
    cin>>nilai;
    
    if(nilai%2 ==0){
        cout<<"Bilangan genap"<<endl;
    } else {
        cout<<"Bilangan ganjil"<<endl;}
    
    return 0;
}
