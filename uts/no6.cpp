#include <iostream>
#include <math.h>
using namespace std;
class perhitungan {
    double A, B;
public:
    void get() {
        cout << "Masukan angka 1: ";
        cin >> A;
        cout << "Masukan angka 2: ";
        cin >> B;
    }
    double add() {
        return A + B;
    }
    double sub() {
        return A - B;
    }
    double mul() {
        return A * B;
    }
    double div() {
        if (B == 0) {
            cout << "Divison By Zero" << endl;
            return INFINITY;
        }
        else {
            return A / B;
        }
    }
};
int main() {
    int choice;
    perhitungan cal; 
    cout 
        << "Menu Program Matematika Sederhana"
    	<< "\n1. keluar"
		<< "\n2. pertambahan"
        << "\n3. pengurangan"
        << "\n4. perkalian "
        << "\n5. pembagian"
        << "\n";
    do {
        cout << "\npilih: ";
        cin >> choice;
        switch (choice) {
        case 2:
            cal.get();
            cout << "hasil penjumlahan: " << cal.add() << endl;
            break;
        case 3:
            cal.get();
            cout << "hasil pengurangan: " << cal.sub() << endl;
            break;
        case 4:
            cal.get();
            cout << "hasil perkalian: " << cal.mul() << endl;
            break;
        case 5:
            cal.get();
            cout << "hasil pembagian : " << cal.div() << endl;
            break;
        }
    } while (choice >= 1 && choice <= 4);
    return 0;
}