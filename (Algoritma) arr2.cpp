#include <iostream>

using namespace std;

int main()
{
    int arrNilai[5];
    int i,jumNilai;

    jumNilai=0;
    cout<<"Isilah 5 data nilai mahasiswa:"<< endl;
    for(i=0;i<5;i++){
        cout<<"Nilai mahasiswa ke-"<<i+1<<" ? ";cin>>arrNilai[i];
        jumNilai = jumNilai + arrNilai[i];
    }
    cout <<"Nilai rata-rata adalah :" << (float)jumNilai/5<<endl;

    int x_cari;
    bool found;

    i=0;
    found=false;
    
    cout<<"Masukan nilai yang akan dicari? ";cin>>x_cari;

    while((i<5) && (!found)){
        if (x_cari==arrNilai[i])
            found=true;
        else
            i++;
    }

    if (found)
        cout<<"Data " <<x_cari<< " ditemukan pada index ke-"<<i;
    else
        cout<<"Data " <<x_cari<< " tidak ditemukan";


    cout<<endl;
    return 0;
}
