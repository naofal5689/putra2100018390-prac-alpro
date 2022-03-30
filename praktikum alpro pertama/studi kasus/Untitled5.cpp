#include <iostream>
using namespace std;
int main(int argc, char** argv) {

 int dataA[20], dataB[20];
 int a, b;

 cout<<"Masukan Banyak Data A = ";
 cin>>a;

 cout<<"Masukan Banyak Data B = ";
 cin>>b;

 for(int i=0; i<a; i++){
  cout<<"Masukan anggota A ke - "<<i<<" = ";
  cin>>dataA[i];
 }

  for(int i=0; i<b; i++){
  cout<<"Masukan anggota B ke - "<<i<<" = ";
  cin>>dataB[i];
 }

 cout<<"Himpunan A = {";
 for(int i=0; i<a; i++){
  cout<<dataA[i]<<",";
 }
 cout<<"}"<<endl<<endl;

 cout<<"Himpunan B = {";
 for(int i=0; i<b; i++){
  cout<<dataB[i]<<",";
 }
 cout<<"}"<<endl<<endl;

 cout<<endl<<"A irisan B = {";
 for(int i=0; i<a; i++){
  for (int j=0; j<b; j++){
   if(dataA[i] == dataB[j]){
    cout<<dataA[i]<<",";
   }
  }
 }
 cout<<"}"<<endl;

 cout<<"A gabungan B = {";
 for(int i=0; i<a; i++){
  cout<<dataA[i]<<",";
 }
 for(int i=0; i<b; i++){
  cout<<dataB[i]<<",";
 }
 cout<<"}"<<endl<<endl;
 
cout<<"Modulus = ";
 for(int i=0; i<a; i++){
cout<<dataA[i]%dataB[i]<<endl;
}
 return 0;
}
