#include <iostream>
#include<fstream>//dosya okuma ve yazma k�t�phanesi
using namespace std;

int main()
{
    int i,sayi,toplam=0;//de�i�kenler tan�ml�yoruz
    ofstream yaz;//dosyay� yazmak i�in ofstream output
    ifstream oku;//dosyadan okumak i�in input
    oku.open("dosya.txt");//veri.txt klas�r�n� oku denklasyonu
    for(int i=0;i<5;i++)//klas�rdeki ilk 10 say�y� s�rala
    {
        oku>>sayi;//say�lar� oku
        toplam+=sayi;//okudu�un say�lar� topla
    }
    oku.close ();//dosyay� kapat
    yaz.open("sonuc.txt");//sonuc.txt ad�nda dosya a�
    yaz<<"Toplam="<<toplam;//ve toplam� sonu� dosyas�na yazd�r�yor
    cout<<"toplam="<<toplam;
    yaz.close();
    return 0;
}
