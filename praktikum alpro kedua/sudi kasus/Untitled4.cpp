#include<iostream> 
using namespace std;
int main() {
string a[] = {"changmin", "jaejoong"};
string b[] = {"f8291", "n4810", "b0637"};
int c[] = {2, 3, 4};
int d[] = {2, 4, 8, 10, 12};
cout << "Hasil penggabungan a dan b : { " << endl;
for(int i=0; i<2;) {
for(int j=0; j<3; j++) {
cout << "(" + a[i] + "," + b[j] + ")";
} 
i++;
} 
cout << "}" << endl;
cout << "Hasil himpunan c habis membagi d :\n{"; for(int k=0; k<3;) {
for(int l=0; l<5; l++)
{ if(d[l] % c[k] == 0)
{ 
cout << "(" << c[k] << ", " << d[l] << "), ";
}
} 
k++;
} 
cout << "}" << endl; 
system ("pause"); 
return 0;
}
