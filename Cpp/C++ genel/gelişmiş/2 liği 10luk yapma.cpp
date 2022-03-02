#include<iostream>
#include<cmath>// pow fonksiyonunu kullanmak i�in cmath k�t�phanesini  ekledik.
using namespace std;

int ikiligionlugacevir(int sayi)//ikiligionlugacevir fonksiyonunun i�ine 2 taban�ndaki
                                //say�y� 10'luk tabana �evirme i�lemini tan�taca��z.
{
int d=0,r,c=0,p;//d de�i�kenini 10'luk tabana �evrilmi� haline e�itlemek i�in olu�turduk

while(sayi>0)//while d�ng�s� i�ine sayi>0 olduk ��nk� taban aritmeti�i pozitif say�lar i�in ge�erlidir
{
r = sayi%10;
sayi = sayi/10;
p = pow(2,c);//2'lik tabandaki say�n�n her basama��n� 10'luk tabana �evirmek i�in pow kulland�k
d = d + (r*p);//0.us olan d'ye r yani sayi'n�n mod 10'dan kalan� ile  her basama��n 10'luk tabana
                //�evrilmi�iyle toplam�n�n �arp�m�na e�itledik
c++;
}
cout<<"ikilik sayinin onluk karsiligi:"<<d;}//2'lik tabandaki say�n�n de�eri 10'luk
                                            //tabana �evrilmi� halini yazdrd�k.

int main(){
    int x;
    cout<<"ikilik sayiyi giriniz=";// x de�i�kenini ikiligionlugacevir fonksiyonuna g�nderiyoruz a�a��da

cin>>x;
ikiligionlugacevir(x);//ikiligionlugacevir fonksiyonunda sayi de�i�kenine x'i atad�k ba�ka bir�ey de yazabilirdik
                      //fakat �stte ikilik say�y� x de�i�keninde cin ile ald���m�z i�in
                      // x de�i�kenini �a��rd�k fonksiyonda.
return 0;
}
