#include<iostream>
using namespace std;

class datamhs{
	public:
		void matkul(int);
		void output(int);
	private:
		string matkul1[100];
		int n,biaya,total[100],disc,total_akhir,totsel;	
		int sks[100];
};

void datamhs::matkul(int n){
	if(n==0){

	}
	else{
		cout<<"\nNama Matkul\t: "; cin>>matkul1[n];
		cout<<"Banyak sks\t: ";cin>>sks[n];
		(matkul(n-1));
	}
}

void datamhs::output(int n){
	int total[100],disc[100],totsel[100],sel[100];
	cout<<"No.\t\t Daftar Matkul\t\t sks"<<endl;
	for(int i=0; i<n; i++){
		cout<<i+1<<"\t\t"<<matkul1[i+1]<<"\t\t"<<sks[i+1]<<endl;
	}
	for(int i=0;i<n;i++){
		biaya = 120000;
		total[i] = sks[i+1] * biaya;
		disc[i] = total[i] * 0.15;
		totsel[i] = total[i] - disc[i];
		sel[i] += totsel[i];
		cout<<"\nTotal \t: "<<sel[i];
	}
}
int main(){
	int n,biaya, total[100];
	long nim;
	string nama;
	datamhs sks;
	cout<<"Masukkan Nama\t: "; cin>>nama;
	cout<<"Masukkan Nim\t: "; cin>>nim;
	cout<<"Masukkan jumlah matkul : "; cin>>n;
	sks.matkul(n);
	cout<<"===================================="<<endl;
	cout<<"Nama mahasiswa : "<<nama<<endl;
	cout<<"Nim mahasiswa : "<<nim<<endl;
	sks.output(n);
	
	return 0;
}
