#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	
	int jum_beli, pil, bayar, jarak,diskon,jumlah[50], harga[50], sub_tot[50];
	string nama_barang[50];
	float tot;
	
	cout<<"====Rumah Makan Seleraku===="<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"	~~MENU~~"<<endl;
	cout<<"---------------------------\n";
	cout<<"1. Ayam_Geprek    : 21000 \n";
	cout<<"2. Ayam_Goreng    : 17000 \n";
	cout<<"3. Udang_Goreng   : 19000 \n";
	cout<<"4. Cumi_Goreng    : 17000 \n";
	cout<<"5. Ayam_Bakar     : 17000 \n";
	cout<<endl;
	cout<<"Masukan Jumlah Beli   : ";
	cin>>jum_beli; 
	
	for (int i=0; i<jum_beli;i++){
		cout<<endl;
		cout<<"Masukan Pesanan Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang : ";
		cin>>nama_barang[i]; 
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i]; 
		
		cout<<"Harga       : ";
		cin>>harga[i]; 
		
		sub_tot[i]=jumlah[i]*harga[i]; 
		tot+=sub_tot[i]; 
	}
	while (true) {
		cout <<"Pilih Menu Pembayaran\n";
		cout <<"1. Delivery Order\n";
		cout <<"2. Cash\n";
		cout <<"Pilih : ";
		cin >> pil;
		
		if (pil == 1){
			if (jarak<=3000){
				cout << "Ongkir : 15000/n";
				jarak=15000;
			}cout <<endl;
		
			
		}
	}
	
	cout<<endl;
	cout<<"STRUK BELANJA RM Seleraku"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl;
	}
	cout<<"---------------------------------------------------------"<<endl;

	
	if (tot>=100000){
		diskon=0.06*tot;
	} else if (tot>=50000){
		diskon=0.04;
	}else if (tot>=25000){
		diskon=0.02;
	}else {
		diskon=0;
	}
	

	cout<<"Jumlah Bayar : Rp."<<tot<<endl;
	cout<<"Dikon        : Rp."<<diskon<<endl; 
	cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;
	cout<<"Bayar        : Rp.";
	cin>>bayar; 
	cout<<"Kembali      : Rp."<<(bayar-(tot-diskon))<<endl; 
	
	
	
	
}
