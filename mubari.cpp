#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

class bangun_ruang{
	public:
	int sisi,luas;

    	void isi_sisi(){
    		cout<<"******** Menghitung Luas Persegi *********\n\n";
    		cout<<"	  Masukan Nilai Sisi : "; cin>>sisi;
    	}

    int rumus(){
    luas=sisi*sisi;
    }

    	void tampil_luas(){
    	cout<<"	  Jadi Luas Persegi  : ";cout<<luas;    }
	};

	int main(){
	bangun_ruang PS;
	PS.isi_sisi();
	PS.rumus();
	PS.tampil_luas();

}

