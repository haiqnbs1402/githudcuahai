#include<iostream>
#include<math.h>
using namespace std;
main()
{
		float money,year,moneyhope,percent;
	cout<<"Nhap so tien gui:";cin>>money;
	cout<<"Nhap so lai xuat(%):";cin>>percent;
	cout<<"Nhap so tien ky vong:";cin>>moneyhope;
	year=log(moneyhope/money)/log(1+percent/100);
	cout<<"So nam can gui: "<<year;
}
