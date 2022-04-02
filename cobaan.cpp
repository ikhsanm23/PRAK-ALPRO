#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
	int jarak,pilih,jml;
	float harga,tot1,tot2,tot3,tot4,tot5,ongkir,total,total2,diskon;
	char mad;
	
	cout<<"1. Nasi Bakar Ayam    : 18000\n";
	cout<<"2. Nasi Bakar Tongkol : 20000\n";
	cout<<"3. nasi mix           : 25000\n";
	cout<<"4. nasi cumi          : 30000\n";
	cout<<"5. nasi goreng bakar  : 25000\n";
	
	
	do{	
		cout<<"Pilih Menu = ";cin>>pilih;
		switch(pilih){
			case 1 : 
				harga=18000;
				cout<<"Jumlah Menu = ";cin>>jml;
				tot1=harga*jml;
				cout<<"Total Harga = "<<tot1<<endl;
				cout<<"Masih ada (y/t) ";cin>>mad;
				break;
			case 2 :
				harga=20000;
				cout<<"Jumlah Menu = ";cin>>jml;
				tot2=harga*jml;
				cout<<"Total Harga = "<<tot2<<endl;
				cout<<"Masih ada (y/t) ";cin>>mad;
				break;
			case 3 :
				harga=25000;
				cout<<"Jumlah Menu = ";cin>>jml;
				tot3=harga*jml;
				cout<<"Total Harga = "<<tot3<<endl;
				cout<<"Masih ada (y/t) ";cin>>mad;
				break;
			case 4 :
				harga=30000;
				cout<<"Jumlah Menu = ";cin>>jml;
				tot4=harga*jml;
				cout<<"Total Harga = "<<tot4<<endl;
				cout<<"Masih ada (y/t) ";cin>>mad;
				break;
			case 5 :
				harga=25000;
				cout<<"Jumlah Menu = ";cin>>jml;
				tot5=harga*jml;
				cout<<"Total Harga = "<<tot5<<endl;
				cout<<"Masih ada (y/t) ";cin>>mad;
				break;
			}
	
			
	}
	while(mad/='y');
	while(mad/='t');
		total=tot1+tot2+tot3+tot4+tot5;
		cout<<"Total = "<<total<<endl;
		cout<<"Masukkan Jarak = ";cin>>jarak;
			if(jarak>=4){
			ongkir=total+20000;
			}
			else if(jarak<4){
			ongkir=total+8000;
			}
			
	
	if((ongkir>=40000)&&(ongkir<100000)){
		diskon=ongkir-4000;
		total2=ongkir-diskon;
	}
	
	else if((ongkir>=100000)&&(ongkir<150000)){
		diskon=(ongkir-9000)*0.25;
		total2=ongkir-diskon;
	}
	else if(ongkir>=150000){
		diskon=(ongkir-12000)*0.35;
		total2=ongkir-diskon;
	}
	
	cout<<"Total Belanja : Rp."<<ongkir<<endl;
	cout<<"Diskon        : Rp."<<diskon<<endl;
	cout<<"Total Bayar   : Rp."<<total2<<endl;
	cout<<"==============================================="<<endl;
	cout<<endl;
	cout<<"Terimakasih Telah Berkunjung di Kedai Kami"<<endl;
	cout<<" \t   Anda Puas Kami Senang"<<endl;
		
	return 0;
}
