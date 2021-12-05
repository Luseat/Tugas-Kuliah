#include <iostream>

using namespace std;

int main()
{
    int M[10][10];
    int Nbaris,Nkolom;
    int baris,kolom;

    Nbaris=5;Nkolom=5;

    for(baris=0;baris<Nbaris;baris++){
        for(kolom=0;kolom<Nkolom;kolom++){
            M[baris]kolom]=baris*kolom;
        }
    }

     for(baris=0;baris<Nbaris;baris++){
        for(kolom=0;kolom<Nkolom;kolom++){
            cout<<M[baris][kolom]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
