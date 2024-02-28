///prime number thingy
///if you enter in something thats not a number it will say its a prime number sooo big L on my side
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
prime(tof, n);

if(lih == 42){
    break;
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
