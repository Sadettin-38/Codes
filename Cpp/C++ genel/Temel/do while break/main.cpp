#include <iostream>

using namespace std;

int main()
{
  /*break: d�ng�deki break deyimi �al��t�r�ld���
  zaman d�ng�n�n d���na yallah
  continue: d�g�de bu deyim �al��t�r�ld��� zaman
   kod �al��t�rmadan ba�a d�er */
   int i=0;
   while(i<10)
   {
       if(i==5)
       {
           break;
       }
       cout<< " i: "<<i<<endl;
       i++;
   }
    return 0;
}
