#include <iostream>
using namespace std;

int main() {

string a[5];
string b[5];

int c[5];
int d[5];

cout << "Masukkan himpunan a (2) : \n";
for(int n=0; n<2; n++) {
cin >> a[n];
}

cout << "Masukkan himpunan b (3) : \n";
for(int m=0; m<3; m++) {
cin >> b[m];
}

cout<<"Hasil penggabungan a dan b :"<<endl<<" { ";
for(int i=0; i<2; i++) {
for(int j=0; j<3; j++) {
cout << "{"<<a[i]<<","<<b[j]<<")";
}
}

cout<<" }"<<endl;


cout << "\nMasukkan anggota himpunan c (angka) : \n" ;
for(int x=0; x<3; x++) {
cin>>c[x];
}
cout << "Masukkan anggota himpunan d (angka) : \n";
for(int y=0; y<5; y++){
cin>>d[y];
}
cout << "Hasil himpunan c habis membagi d : {";
for(int k=0; k<3; k++) {
for(int l=0; l<5; l++) 
if(d[l] % c[k] == 0) {
cout<<"("<< c[k]<< ", " << d[l] << "), ";}
}



cout << "}";

system("PAUSE");
return 0;
}

