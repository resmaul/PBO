#include <iostream>
using namespace std ;

class trapesium {
	private :
		int sisi1, sisi2, tinggi ;
		
	public :
		int getsisi1() {
			return sisi1;
		}
		void setsisi1(int s1) {
			sisi1 = s1 ;
		}
		int setsisi2() {
			return sisi2 ;
		}
		void setsisi2 (int s2) {
			sisi2 =s2 ;
		}
		int gettinggi() {
			return tinggi ;
		}
		void settinggi (int t){
			tinggi = t ;
		}
		int hitungLuas () {
			return 0,5*(sisi1+sisi2)*tinggi ;
		} 
		
};
int main () {
	trapesium Luastrapesium ;
	Luastrapesium.setsisi1(12) ;
	Luastrapesium.setsisi2(10) ;
	Luastrapesium.settinggi(6) ;

	cout<< "Luas : "<<Luastrapesium.hitungLuas()<<endl ;
	return 0;	
}
