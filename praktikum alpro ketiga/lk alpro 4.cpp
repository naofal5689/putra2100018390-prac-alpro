class Operator{
	friend ostream& operator<<(ostream&, Operator&);
	friend istream& operator>>(istream&, Operator&);
public:
	long faktorial();
	long faktorial(int);
private:
	int n;
	long hasil;
};

long Operator::faktorial(){
	long fak = 1;
	for(int i = 1;i<=n;i++)
	  fak = fak*i;
	  return fak;
}

long Operator::faktorial(int n)
{ if((n==0)||(n==1)) return(1);
  else return(n*faktorial(n-1));
}
