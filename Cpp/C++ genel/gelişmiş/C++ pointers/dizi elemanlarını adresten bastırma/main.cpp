#include <iostream>

using namespace std;

int main()
{
int arr[7]={2,3,1,3,4,5,6};
cout << &arr<<endl;
int *ptr;
ptr =arr;
cout<<ptr<<endl;
cout<<*ptr<<endl;
cout<<*(ptr+1)<<endl;
cout<<*(ptr+3)<<endl;

cout <<endl<<"dizinin tum elemmanları: "<<endl;
for(int i=0; i<7; i++)

    cout<< *(ptr+i) <<endl;

    return 0;
}
