#include <iostream>

using namespace std;

int main()
{
    int intTab[10];
    intTab[0]=1;
    intTab[1]=2;
    intTab[2]=4;
    intTab[3]=-1;
    intTab[4]=100;
    intTab[5]=2;
    intTab[6]=0;
    intTab[7]=-1;
    intTab[8]=3;
    intTab[9]=9;

    //cout<<intTab[4]<<endl;
    int x=intTab[0]+intTab[5];
    //cout<<x<<endl;

    intTab[9]=8;
    //cout<<intTab[9];

    int arrBilangan[10];

    for (int i=0;i<10;i++){
        arrBilangan[i]=i*10;
    }

    for (int i=0;i<10;i++){
        cout<<arrBilangan[i]<<endl;
    }

    
    return 0;
}
