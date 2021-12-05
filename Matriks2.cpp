#include <iostream>

using namespace std;

int main()
{
    int M[10][10];
    int Nbaris,Nkolom;
    int baris,kolom;

    Nbaris=3;Nkolom=3;
    cout<<"Mengisi Matrik ukuran " <<Nbaris <<" x "<<Nkolom<<endl;

    for(baris=0;baris<Nbaris;baris++){
        cout<<"Input data baris ke-"<<baris+1<<endl;
        for(kolom=0;kolom<Nkolom;kolom++){
            cout<<"---Input data kolom ke-"<<kolom+1<<" ? ";
            cin>>M[baris][kolom];
        }
        cout<<endl<<endl;
    }

     for(baris=0;baris<Nbaris;baris++){
        for(kolom=0;kolom<Nkolom;kolom++){
            cout<<M[baris][kolom]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
