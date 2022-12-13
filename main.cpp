#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char num[10][20];
    char tit[20];
    int pos=0;
    for(int i=0;i<10;i++){
        for(int b=0;b<20;b++){
            num[i][b]=' ';
            tit[b]=' ';
        }
    }
    for(int i=0;i<10;i++){
        cin>>num[i];
    }
   cin>>tit;
if(prod(num,pos,tit)){
cout<<pos;
}else{
    cout<<"non presente";
}
    return 0;
}
