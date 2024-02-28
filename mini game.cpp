///prime number thingy
#include<iostream>
#include <unistd.h>
using namespace std;

bool tof;
int n;
int lih = 0;

void prime(bool tof, int n){
    tof = false;
    if(n!=1){
        for(int i = 2; i<n && tof != true; i++){
            if(n%i==0){
                tof = true;
            }
        }
        if(tof==false){
            cout<<"Mhm... that looks like a prime number to me..."<<endl;
        }else{
            cout<<"Thats not a prime number stupid..."<<endl;
        }
    }
    else{
        tof = true;
        cout<<"Acctually no, 1 is not a prime number."<<endl;
    }
    if(tof==false){
        lih = 42;
    }
}


int main(){
cout<<"Enter in a prime number! You have 3 tries."<<endl;
bool wol = false;

for(int j = 0; j<4; j++){
if(j==3){
    wol = true;
    break;
}
cin>>n;
if(n/10 == n && n!=0){
    cout<<"bro thats not even a number like tf?"<<endl;
}else{
prime(tof, n);

if(lih == 42){
    break;
}
}
if(wol == true){
    cout<<"Do you not know what a prime number is? Go google it or smthn...(Yes, you did lose)";
}else{
    cout<<"GG you won!";
}
}
usleep(10000000);
cout<<endl<<endl<<endl;

    return 0;
}
///this was such a pain....
