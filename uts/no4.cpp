#include<iostream>
#include<string>

using namespace std;

class nama{
	private :
		string nama1;
		string nama2;
		string nama3;
		string nama4;
		
	
	public :
		void setnama(){
			string np,nt,nl,na;
			nama1 = np;
			nama2 = nt;
			nama3 = nl;
			nama4 = na;
			cin.ignore();
			cout<<"Masukan Nama depan anda    = ";cin>>nama1;
			cin.ignore();
			
			cout<<"Masukan Nama tengah anda   = ";cin>>nama2;
			
			cout<<"Masukan Nama terakhir anda = ";cin>>nama3;
			cout<<"Masukan Nama Lengkap anda  = ";cin>>nama4;
			
			cin.ignore();
		}
		string getnama1(){
			return nama1;
		}
		string getnama2(){
			return nama2;
		}
		string getnama3(){
			return nama3;
	 
		}
		string getnama4(){
			return nama4;
		}
	
};

int main(){
	int pilih;
	nama w;
	menu:
		system("clear");
		cout<<"0. Keluar"<<endl;
		cout<<"1. masukan "<<endl;
		cout<<"silahkan masukan pilihan yang ingin anda masukan = ";cin>>pilih;
		
	if (pilih == 1){
		w.setnama();
		cout<<"Nama pertama  = "<<w.getnama1()<<endl;
		cout<<"Nama Tengaah  = "<<w.getnama2()<<endl;
		cout<<"Nama Terakhir = "<<w.getnama3()<<endl;
		cout<<"Nama Lengkap  = "<<w.getnama4()<<endl;
		
	}
	if (pilih == 0){
		
		cout<<"terimakasih";
	}
		
}