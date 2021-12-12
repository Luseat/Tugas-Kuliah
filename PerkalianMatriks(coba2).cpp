2	2	2
2	2	2

1
1
1


Perkalian matrik ??




#include <iostream>

using namespace std;

int main()
{
    
    int M1[4][3]={
        {3,2,2},
        {3,4,2},
        {1,3,4},
        {5,6,2}
    };
    int M2[3][4];
    int Nbaris=4,Nkolom=3;
    int baris,kolom;

    for(baris=0;baris<Nkolom;baris++){
        for(kolom=0;kolom<Nbaris;kolom++){
            M2[baris][kolom]=M1[kolom][baris];
        }
    }
    
    for(baris=0;baris<Nkolom;baris++){
        for(kolom=0;kolom<Nbaris;kolom++){
            cout<<M2[baris][kolom]<<" ";
        }
        cout<<endl;
    }
    return 0;

}



#include <iostream>

using namespace std;

int main()
{
    int M1[2][3]={
        {2,2,2},
        {2,2,2}
    };
    int M2[2][3]={
        {1,1,1},
        {1,1,1}
    };
    int Mhasil[2][3];

    for(int baris=0;baris<2;baris++){
        for(int kolom=0;kolom<3;kolom++){
           Mhasil[baris][kolom]=M1[baris][kolom]+M2[baris][kolom]; 
        }
    }

    for(int baris=0;baris<2;baris++){
        for(int kolom=0;kolom<3;kolom++){
            cout<<Mhasil[baris][kolom]<<" ";
        }
        cout<<endl;
    }

    return 0;
}



#include <iostream>

using namespace std;

int main()
{
    int M1[2][3]={
        {2,2,2},
        {2,2,2}
    };
    int M2[3][1]={
        {1},
        {1},
        {1}
    };
    int Mhasil[2][1];

    for(int baris=0;baris<2;baris++){
        for(int kolom=0;kolom<1;kolom++){
           Mhasil[baris][kolom]=0;
           for(int k=0;k<3;k++){
               Mhasil[baris][kolom]=Mhasil[baris][kolom]+ (M1[baris][k]*M2[k][kolom]);
           } 
        }
    }

    for(int baris=0;baris<2;baris++){
        for(int kolom=0;kolom<1;kolom++){
            cout<<Mhasil[baris][kolom]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
