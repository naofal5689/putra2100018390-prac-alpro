#include<iostream> 
using namespace std; 
main() { 
int x,produk1=17000,produk2=21000,jumlah1,jumlah2,total,bayar,tunai,sisa,diskon; 
string barang1,barang2,barang3; 
    cout<<"============================================"<<endl; 
    cout<<"  Program Kasir Kedai Ayam"<<endl; 
    cout<<"============================================"<<endl; 
    cout<<endl; 
    cout<<"Menu makanan"<<endl;
    cout<<"1. Ayam goreng : 17000"<<endl;
    cout<<"2. Ayam bakar  : 21000"<<endl;
   cout<<"Masukkan Menu ayam 1  : "; cin>>barang1; 
   cout<<"Jumlah Makanan   : "; 
   cin>>x; 
   jumlah1=x*produk1; 
   cout<<"Total Harga   : Rp. "<<jumlah1<<endl;cout<<endl; 
   cout<<"Masukkan menu ayam 2  : "; cin>>barang2; 
   cout<<"Jumlah makanan   : "; 
   cin>>x; 
   jumlah2=x*produk2; 
   cout<<"Total Harga   : Rp. "<<jumlah2<<endl;cout<<endl; 
   bayar=jumlah1+jumlah2; 
   cout<<endl; 
   cout<<"============================================"<<endl; 
   cout<<"Sub Total   : Rp. "<<bayar<<endl; 
if(bayar>45000) 
{ 
 diskon=0.10*bayar; 
 cout<<"Diskon 10%, diskon sebesar : Rp. "<<diskon<<endl; 
 total=bayar-diskon; 
 cout<<"Total    : Rp. "<<total<<endl; 
} 
else 
if(bayar<45000) 
{ 
 diskon=0; 
 cout<<"Diskon 0%, diskon sebesar : Rp. "<<diskon<<endl; 
 total=bayar; 
 cout<<"Total    : Rp. "<<total<<endl; 
} 
 cout<<"============================================"<<endl; 
 cout<<"Uang tunai   : Rp. "; 
 cin>>tunai; 
 sisa=tunai-total; 
 cout<<"Kembalian   : Rp. "<<sisa<<endl; 
 cout<<endl; 
}
