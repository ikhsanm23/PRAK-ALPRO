#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
	
int menu, jum_beli, bayar,diskon,jumlah[60],harga[60],sub_tot[60];
string nam_menu[60];
float tot;

  	cout<<"\t\t\t***********************************************************"<<endl;
    cout<<"\t\t\t                       KEDAI AYAM TIREN                          "<<endl;
    cout<<"\t\t\t       Jl.Imogiri Timur Km.10,5 RT.03 RW.-, Pleret, Bantul      "<<endl;
    cout<<"\t\t\t Hp:0812-145-878 | Email:kedaiayamtiren21@gmail.com "<<endl;
    cout<<"\t\t\t***********************************************************"<<endl;
    cout<<"\t\t\t 1. Pilihan Menu"<<endl;
    cout<<"\t\t\t 2. Keluar"<<endl;
    cout<<"PILIH MENU : ";
	cin>>menu;
	
	switch (menu)
	{
		case 1: 
			cout<<"========================================="<<endl;
			cout<<"\t\tPilihan Menu"<<endl;
			cout<<"|_______________________|______________|"<<endl;
			cout<<"|      Menu Makanan     |      Harga   |"<<endl;
			cout<<"|_______________________|______________|"<<endl;
        	        cout<<"|                       |              |"<<endl;
                        cout<<"|   1. Ayam Goreng      |  Rp. 17.000  |"<<endl;
                        cout<<"|   2.Ayam Bakar        |  Rp. 21.000  |"<<endl;
                        cout<<"|_______________________|______________|"<<endl;
			cout<<"========================================="<<endl;
			cout<<"Masukan Jumlah Menu : ";
			cin>>jum_beli;
	
	
		for (int i=0; i<jum_beli;i++){
	 		cout<<endl;
	 		cout<<"Masukan Menu Ke-"<<i+1<<endl;
	 		cout<<endl;
	 		cout<<"Nama Nama : ";
	 		cin.ignore();
	 		getline(cin,nam_menu[i]);
	 		cout<<"Jumlah : ";
			cin>>jumlah[i];
	 		cout<<"Harga : ";
	 		cin>>harga[i];
	 		sub_tot[i]=jumlah[i]*harga[i];
	 		tot+=sub_tot[i];
		}
		cout<<endl;
		cout<<"STRUK HASIL BELANJA"<<endl;
		cout<<"==============================================="<<endl;
		cout<<"No | Barang |Jumlah |Harga   |Sub Total"<<endl;
		cout<<"==============================================="<<endl;
			for (int i=0;i<jum_beli;i++){
			cout<<i+1<<setw(6)<<nam_menu[i]<<setw(10)<<jumlah[i]<<setw(10)<<harga[i]<<setw(12)<<sub_tot[i]<<endl;
		}
		cout<<"==============================================="<<endl;
 		if (tot>=45000){
 		 diskon=0.10*tot;
		} 
		else {
	 	 diskon=0;
		}	

			cout<<"Total Belanja : Rp."<<tot<<endl;
			cout<<"Diskon : Rp."<<diskon<<endl;
			cout<<"Total Bayar : Rp."<<tot-diskon<<endl;
			cout<<"==============================================="<<endl;
			cout<<endl;
			cout<<"Terimakasih Telah Berkunjung di Kedai Kami"<<endl;
			cout<<" \t   Anda Puas Kami Senang"<<endl;
		break;
			}
	return 0;
}
	

