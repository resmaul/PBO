#include<iostream>
using namespace std;

class Masa {
	private:
        int jam;
        int menit;
        int detik;
     public:
        Masa(int j=0, int m=0, int d=0);
        void setMasa( int j, int m, int d);
        int getJam();
        int getMenit();
        int getDetik();
};
Masa::Masa(int jam, int menit, int detik){
    setMasa(jam, menit, detik);
}

void Masa::setMasa(int j, int m, int d){
    if ((j>=0 && j<24) && (m>=0 && m<59) && (d>=0 && d<59)){
        jam = j;
        menit = m;
        detik = d;
    } else {
        cout<<"format salah"<<endl;
    }
}
int Masa::getJam(){
    return jam;
}
int Masa::getMenit(){
    return menit;
}

int Masa::getDetik(){
    return detik;
}
int main(){    
    Masa w;
    w.setMasa(20,25,60);
    cout <<endl<<w.getJam()<<":"<<w.getMenit()<<":"<<w.getDetik()<<endl;
    return 0;
}