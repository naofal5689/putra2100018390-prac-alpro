#include <iostream>
using namespace std;
void iteratif(int i){
for(int a=1;a<i;a++){
if(a%5==0 && a%7==0)
cout<<a<<" ";   
   
}   
   
}


void rekursif(int n)
{
if(n<100){
if(n%5==0 && n%7==0){
cout<<n<<" ";   
}
rekursif(n+1);
}
}

int main(int argc, char *argv[])
{cout<<"Hasil dengan cara menggunakan iteratif: "<<endl;
iteratif(100);   
cout<<endl;   
cout<<"Hasil dengan cara menggunakan rekursif: "<<endl;
rekursif(1);


}

