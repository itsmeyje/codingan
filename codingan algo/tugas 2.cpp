/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>
#include <cmath>

using namespace std;

    double LuasPersegi (double Sisi) {
    return pow(Sisi, 2);
    }
    
    double LuasPersegiPanjang (double Panjang, double Lebar){
    return Panjang * Lebar;
    }
    
    double LuasLingkaran (double JariJari){
    return pow(JariJari, 2);
    }

int main() {
    
    string BangunDatar;
    
    cout << " PROGRAM UNTUK MENGHITUNG LUAS BANGUN DATAR" << endl << endl;
    
    while (true){
    cout << " 1. LUAS PERSEGI" << endl;
    cout << " 2. LUAS PERSEGI PANJANG" << endl;
    cout << " 3. LUAS LINGKARAN" << endl;
    cout << " MASUKKAN BANGUN DATAR YANG INGIN ANDA HITUNG LUASNYA (1/2/3) : ";
    cin >> BangunDatar;
    cout << endl;
    
        if (BangunDatar == "1"){
        
            double Sisi;
        
            cout << " MENGHITUNG LUAS PERSEGI" << endl << endl;
        
            cout << " MASUKKAN PANJANG SISI PERSEGI : ";
            cin >> Sisi;
            cout << endl;

            double Luas = LuasPersegi (Sisi);

            cout << " LUAS PERSEGI DENGAN PANJANG SISI " << Sisi << " CM ADALAH " << Luas << " CM²"; 
            }
        
        else if (BangunDatar == "2"){
        
            double Panjang;
            double Lebar;
        
            cout << " MENGHITUNG LUAS PERSEGI PANJANG" << endl << endl;
        
            cout << " MASUKKAN PANJANG PERSEGI : ";
            cin >> Panjang;
            cout << endl;
        
            cout << " MASUKKAN LEBAR PERSEGI : ";
            cin >> Lebar;
            cout << endl;

            double Luas = LuasPersegiPanjang (Panjang, Lebar);

            cout << " LUAS PERSEGI PANJANG DENGAN PANJANG " << Panjang << " CM DAN LEBAR " << Lebar << " CM ADALAH " << Luas << " CM²"; 
            }
        
        else if (BangunDatar == "3"){
    
            int JariJari;
            
            cout << " MENGHITUNG LUAS LINGKARAN" << endl << endl;
        
            cout << " MASUKKAN JARI JARI LINGKARAN : ";
            cin >> JariJari;
            cout << endl;
        
                if(JariJari % 7 == 0){
                    
                double luas = LuasLingkaran (JariJari) * 22/7;

                cout << " LUAS LINGKARAN DENGAN JARI JARI " << JariJari << " CM ADALAH " << luas << " CM²"; 
                }
        
                else if(JariJari % 7 != 0){
                double luas = LuasLingkaran (JariJari) * 3.14;

                cout << " LUAS LINGKARAN DENGAN JARI JARI " << JariJari << " CM ADALAH " << luas << " CM²"; 
                }
        }
        
        else {
            
            cout << " MAAF, BANGUN DATAR YANG ANDA MASUKKAN TIDAK TERSEDIA" << endl << endl;
            continue;
        }
        
    cout << endl << endl;
       
    string Next;
    
    cout << " >> KETIK APA SAJA UNTUK MELANJUTKAN" << endl;
    cout << " >> KETIK 1 UNTUK BERHENTI" << endl;
    cout << " APAKAH ANDA INGIN MENGHITUNG LUAS BANGUN DATAR LAGI ? : ";
    cin >> Next;
    
        if(Next == "1"){
        break;
        }
        
        else{
        cout << endl << endl;
        continue;
        }
        
    }

    return 0;
}