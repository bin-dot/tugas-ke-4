/* Menghitung jumlah deret */
/* Sitti Aulia Sabina Rahmannissa */
/* 20051397016 */

#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
 cout << "program menghitung deretan  \n";
 cout <<"----------------------------------  \n";
 int a=0,b,c,n,i, jumlah=0;
 cout << "deret bilangan = 3,7,11,15,... ";
 cin >> a;
 cout << "masukkan beda : ";
 cin >> b;
 cout << "masukkan banyak suku yang ingin di tampilkan :";
 cin >> n;
 cout<< "deret ke" <<n<<" : ";
 cout << a << " , ";
 jumlah = jumlah + a;
 for (i=0;i<n-1;i++){
 	c = a+b;
 	a = c;
 	cout << c << " , ";
 	jumlah = jumlah +c ;
}
cout << "\n jumlah deret ke-";
cout << jumlah;
getch ();
}

