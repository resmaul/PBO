#include <iostream>

using namespace std ;

class usia {
	private :
		int x, y ;
		
		public :
		void assign(int tahunkelahiran, int tahunsekarang){
			x=tahunkelahiran;
			y=tahunsekarang;
		}
		int umur (){
			return x-y;
		}
		
};
int main (){
	usia obj;
	obj.assign(2032,2001); 
	cout<<"umur kalian sekarang adalah "<<obj.umur()<<" tahun "<<endl;
	return 0 ;
		
}