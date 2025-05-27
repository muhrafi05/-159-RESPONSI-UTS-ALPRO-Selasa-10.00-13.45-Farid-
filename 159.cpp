#include <iostream>
using namespace std;



int main() {
	int nim,pass=2400018159,pilih;
	string nama,user="Muhammad Rafi";
	int jum_matkul;
	string matkul[5]={"alpro ","matdis ","pancasila ","pweb ","Aljabar Linear "};
	string jadwal[5]={"senin 10.00-12.00","selasa 15.00-16.00","rabu 09.00-10.00","kamis 08.00-10.00","jumat 07.00-09.00"};
	string nilai[5]={" 85 "," 90 "," 80 "," 75 "," 70 "};
	long int harga[5]={800000,500000,600000,400000,700000};
	long int tot_harga=0;
	string tot_nilai[5];
	string tot_matkul[5];
	string jadwal_tot[5];
	char tanya;
	int metode;

	cout<<"LOGIN"<<endl;
	cout<<"Username : ";
	getline(cin,nama);
	cout<<"Password : ";
	cin>>nim;
	system("cls");
	cout<<endl;
	cout<<endl;
	cout<<"DATA ANDA"<<endl;
	cout<<"Nama : "<<nama<<endl;
	cout<<"Nim : "<<nim<<endl;
	cout<<"Program studi : Informatika"<<endl;
	cout<<"Fakultas : Teknologi Industri"<<endl;
	
 	cout<<"MATA KULIAH INFORMATIKA SEMESTER 2"<<endl;
	cout<<"0. Algoritma pemrograman"<<endl;
	cout<<"1. Matematika diskrit"<<endl;	
	cout<<"2. Pancasila"<<endl;
	cout<<"3. Pemrograman web"<<endl;
	cout<<"4. Aljabar linear matrik"<<endl;
	cout<<"5. Keluar"<<endl;
	do{
	cout<<"Pilih matkul : ";
	cin>>pilih;
switch(pilih){
	case 0:
	tot_matkul[pilih]+=matkul[pilih];
	jadwal_tot[pilih]+=jadwal[pilih];
	tot_nilai[pilih]+=nilai[pilih];
	tot_harga+=harga[pilih];
	break;
	case 1:
	tot_matkul[pilih]+=matkul[pilih];
	jadwal_tot[pilih]+=jadwal[pilih];
	tot_nilai[pilih]+=nilai[pilih];
	tot_harga+=harga[pilih];
	break;
	case 2:
	tot_matkul[pilih]+=matkul[pilih];
	jadwal_tot[pilih]+=jadwal[pilih];
	tot_nilai[pilih]+=nilai[pilih];
	tot_harga+=harga[pilih];
	break;
	case 3:
	tot_matkul[pilih]+=matkul[pilih];
	jadwal_tot[pilih]+=jadwal[pilih];
	tot_nilai[pilih]+=nilai[pilih];
	tot_harga+=harga[pilih];
	break;
	case 4:
	tot_matkul[pilih]+=matkul[pilih];
	jadwal_tot[pilih]+=jadwal[pilih];
	tot_nilai[pilih]+=nilai[pilih];
	tot_harga+=harga[pilih];
	break;
	default:
	cout<<"selesai"<<endl;
	break;	
}
}while(pilih!=5);
	cout<<endl;
	cout<<"JADWAL KULIAH"<<endl;
	for(int i=0;i<5;i++){
	cout<<tot_matkul[i]<< jadwal_tot[i];
	
}
cout<<endl;
cout<<"Nilai matkul : "<<endl;
for(int i=0;i<5;i++){
	cout<<tot_matkul[i]<< tot_nilai[i];

}
cout<<endl;
cout<<"Total harga sesuai dengan KRS dipilih: "<<tot_harga<<endl;
cout<<"Apakah memiliki beasiswa? (y/t) : ";
cin>>tanya;	
if(tanya=='y'){
	tot_harga-500000;
	cout<<"Metode pembayaran : "<<endl;
	cout<<"1. Tunai"<<endl;
	cout<<"2. Trasnfer bank"<<endl;
	cin>>metode;
	switch(metode){
		case 1:
		cout<<"STRUK PEMBAYARAN"<<endl;
		cout<<"Metode Pembayaran : Tunai"<<endl;
		cout<<"Total harga : "<<tot_harga<<" Dikurangi dengan beasiswa : "<<tot_harga-500000;
		break;
		case 2:
		cout<<"STRUK PEMBAYARAN"<<endl;
		cout<<"Metode Pembayaran : Transfer bank"<<endl;
		cout<<"Total harga : "<<tot_harga<<" Dikurangi dengan beasiswa : "<<tot_harga-500000;
		break;
		default:
		cout<<"tidak valid";
		break;
	}
	
}else{
	cout<<"Metode pembayaran : "<<endl;
	cout<<"1. Tunai"<<endl;
	cout<<"2. Trasnfer bank"<<endl;
	cin>>metode;
	switch(metode){
		case 1:
		cout<<"STRUK PEMBAYARAN"<<endl;
		cout<<"Metode Pembayaran : Tunai"<<endl;
		cout<<"Total harga : "<<tot_harga;
		break;
		case 2:
		cout<<"STRUK PEMBAYARAN"<<endl;
		cout<<"Metode Pembayaran : Transfer bank"<<endl;
		cout<<"Total harga : "<<tot_harga;
		break;
		default:
		cout<<"tidak valid";
		break;
	}
}
return 0;
}
