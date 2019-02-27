//NAMA			: MUHAMMAD DENY ZULYAN ALY MAKSUM
//NIM  			: 18050623006
//PRODI			: D3 MANAJEMEN INFORMATIKA
//MATA KULIAH	: STRUKTUR DATA
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int x[10]={1,2,3,4,5,6,4,7,8,9};
    int elemen[10];
    int j,z,y,a=0;


    cout<<" data 1,2,3,4,5,6,4,7,8,9";
      cout << "\ninput data : ";
      cin >> z;

    
      for (j=0;j<10;j++)
      {
            if(x[j]==z)
            {
                  elemen[a]=j;
                  a++;
            }
      }
      if (a>0)
      {
            cout << "\n data berjumlah " << a;
            cout << "\n data pada elemen ke : ";

            for(j=0;j<a;j++)
            {
                  cout << elemen[j] << " ";
            }
            cout << "\n";
      }
      else
      {
            cout << "\ndata tidak ditemukan";
      }
	
	
      return 0;
}
