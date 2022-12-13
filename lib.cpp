#include "lib.h"
using namespace std;
bool prod(char num[10][20],int &posi,char tit[20]){
    for (int i=0;i<10;i++){
        for(int b=0;b<20;b++){
            if(num[i][b]!=tit[b]){
                b=19;
            }else {
                if (b == 19) {
                    posi = i;
                    return true;
                }
            }
        }
    }
    return false;
}
