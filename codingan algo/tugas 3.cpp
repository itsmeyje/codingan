/**************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

***************************/
#include <iostream>

using namespace std;

int main()
{
    int kodetiket;
    string nama;
    string ulang;
    int jumlah; 
    int total = 0;
    string tiket;
    
    
    int potongan;
    
    int a = 100000;
    int b = 200000;
    int c = 300000;
    
    cout << endl;
    cout << "===============================================" << endl; 
    cout << "SELAMAT DATANG DI TICKETING KERETA API INDONESIA" << endl;
    cout << "===============================================" << endl << endl;
    
   	    cout << "             DAFTAR KELAS KERETA" << endl;
		cout << "   ---------------------------------------" << endl;
		cout << "   |Kode |     Kelas     |      Harga     |" << endl;
		cout << "   --------------------------------------" << endl;
		cout << "   |1    | Ekonomi       | Rp. 100.000,-  |" << endl;
		cout << "   |2    | Bisnis        | Rp. 200.000,- -|" << endl;
		cout << "   |3    | Eksekutif     | Rp. 300.000,- -|" << endl;
		cout << "   --------------------------------------" << endl;

    cout << "===============================================" << endl; 

    cout << "     ISI DATA DIRI UNTUK MELANJUTKAN PEMBELIAN" << endl;
   
    cout << "===============================================" << endl << endl; 

    cout << "Silahkan masukkan nama anda :";
    cin >> nama;
    
    do {
         
    cout << "Masukkan kode tiket yang ingin dipesan :";
    cin >> kodetiket;
    cout << "Apakah anda ingin mengubah tiket pesanan? (y/n) :";
    cin >> ulang;
    
    } while (ulang == "y");
    
    do {
        
    cout << "Masukkan jumlah tiket yang ingin dipesan :";
    cin >>jumlah;
    cout << "Apakah anda ingin mengubah jumlah tiket pesanan? (y/n) :";
    cin >> ulang;
    
    } while (ulang == "y");
    
    cout << endl;
    
    switch (kodetiket){
        case 1 :
        tiket = "ekonomi";
        total += a * jumlah;
        break;
        
        case 2 :
        tiket = "bisnis";
        total += b * jumlah;
        break;
        
        case 3 :
        tiket = "eksekutif";
        total += c * jumlah;
        break;
        default : 
        cout << "Menu tidak tersedia " << endl;
		cout << endl;
    }
    
    
    //output
    cout << "Anda memesan tiket" << tiket << "dengan total harga Rp." << total << endl;
    
    if (total >= 500000){
        potongan = total * 90/100;
        cout << "ANDA MENDAPATKAN DISKON SEBESAR 10%, ANDA HANYA PERLU MEMBAYAR SEBESAR RP." << potongan;
    }
    
    else if (total >= 300000){
        potongan = total * 95/100;
        cout << "ANDA MENDAPATKAN DISKON SEBESAR 5%, ANDA HANYA PERLU MEMBAYAR SEBESAR RP." << potongan;
    }
    
    else if (total >= 200000){
        potongan = total * 98/100;
        cout << "ANDA MENDAPATKAN DISKON SEBESAR 2%, ANDA HANYA PERLU MEMBAYAR SEBESAR RP." << potongan;
    }
    
    
    return 0;
    
}