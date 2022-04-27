#include<iostream>
using namespace std;
class dosen{
	public:
		void input();
		void proses();
		void output();
		
		private:
			string nama; 
			string matkul;
			int nilai[50];
			int Nmin,Nmax;
			int n;
			float rata;
};
void dosen::input(){
	cout<<"-------------------------------------------------"<<endl;
	cout<<"INPUT NILAI"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"Nama Mata Kuliah : ";cin>>matkul;
	cout<<"Nama Dosen : ";cin>>nama;
	cout<<"Banyak nilai : ";cin>>n;
	cout<<"-------------------------------------------------"<<endl;
	for(int i=0; i<n; i++){
		cout<<"Masukkan nilai siswa ke-"<<i+1<<"=";cin>>nilai[i];
	}
	cout<<"-------------------------------------------------"<<endl;
}
void dosen::proses(){
	Nmin=nilai[0], Nmax=nilai[0];
	for(int j=0; j<n; j++){
		if(nilai[j]<Nmin){
			Nmin=nilai[j];
		}
		if(nilai[j]>Nmax){
			Nmax=nilai[j];}
		}
		for(int i=0; i<n; i++){
			rata+=nilai[i];
		}
		rata/=n;
	};
	
void dosen::output(){
	cout<<"\n----------------------------------------"<<endl;
	cout<<"Nama Dosen : "<<nama<<endl;
	cout<<"Matkul : "<<matkul<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<"Nilai "<<endl;
	cout<<"------------------------------------------"<<endl;
	for(int i=0; i<n; i++){
		cout<<" "<<nilai[i]<<endl;
	}
	cout<<"------------------------------------------"<<endl;
	cout<<"			Nilai min  	:	"<<Nmin<<endl;
	cout<<" 		Nilai max	:	"<<Nmax<<endl;
	cout<<"    Nilai rata-rata	:	"<<rata<<endl;
}

int main(){
	dosen a;
	a.input();
	a.proses();
	a.output();
}
