#include <iostream>
using namespace std;
int main(){

	int sayi1,sayi2,buyukSayi;
	cout << "Sayi 1 : ";
		cin >> sayi1;
	cout << "Sayi 2 : ";
		cin >> sayi2;

	// �ki say�n�n EKOK'u bulunurken EKOK en fazla yine ikisinin �arp�m� olabilir.
	for(int i=1; i<=sayi1*sayi2; i++) {
		if( (i%sayi1==0) && (i%sayi2==0) ){
			cout << "EKOK: " << i;
			break;
		}
	}

	cout << endl;

	// �ki say�n�n EBOB'u bulunurken EBOB en fazla b�y�k say� olabilir.
	if(sayi1>sayi2) {
		buyukSayi = sayi1;
	} else {
		buyukSayi = sayi2;
	}

	for(buyukSayi; buyukSayi>0; buyukSayi--) {
		if( (sayi1%buyukSayi==0) && (sayi2%buyukSayi==0) ) {
			cout << "EBOB: " << buyukSayi;
			break;
		}
	}

}
