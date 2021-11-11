#include <iostream>

using namespace std ;

int main () {
	int n,j,i,s ;
	
	cout << "masukan jumlah baris : " ;
	cin>>n;
	for (i=1;i<=n;i++) {
		for (s=1;s<n;s++)
		cout<<" " ;
		for(j=1;j<=1;j++)
		cout<<"*";
		cout<<"\n" ;
		
	}
	return 0;
}
