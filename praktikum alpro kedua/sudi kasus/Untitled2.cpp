#include <iostream>
#include <string>
using namespace std;

class pangkat{
friend ostream& operator<<(ostream&, pangkat&);
friend istream& operator>>(istream&, pangkat&);
public:
pangkat(){};
void hasil();
private:
float x,c;
int y,i;
};
istream& operator>>(istream& mlebu,pangkat& ketik){
cout<<"Masukan Angka= ";
mlebu>>ketik.x;
cout<<"\nMasukan Pangkat= ";
mlebu>>ketik.y;
return mlebu;
}
ostream& operator<<(ostream& metu,pangkat& cetak){
cout<<"hasil dari "<<cetak.x<<" pangkat "<<cetak.y<<" = "<<cetak.c;
cout<<endl;
return metu;
}

void pangkat::hasil(){
c=1;
for(i=1;i<=y;i++){
c=c*x;
cout<<c<<endl;
}
cout<<endl;
}

int main()
{
pangkat b;
cin>>b;
b.hasil();
cout<<b;
system("pause");
return 0;
}
