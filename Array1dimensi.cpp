#include<iostream> 

using namespace std;

int nil[4] = {10, 25, 40, 50}; 
int n, hasil = 0; 
int main() 
{ 
 for (n=0; n<4;n++) 
 { 
 hasil += nil[n]; 
 } 
cout<<hasil; 
return 0; 
}
