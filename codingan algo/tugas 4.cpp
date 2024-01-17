/**********

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*********/
#include <iostream>

using namespace std;

int main()
{
    string JenisKarakter;
    string Pilihan;
    
    string NamaPemain;
    string AkunPemain;
    
    string MemilihKarakter;
    string Karakter;
    
    string Next;
    string TingkatKesulitan;
    string Akibat;
    string ulang;
    
    int HP = 500;
    int Kekuatan = 100;
    
    int HPMonster = 600;
    int Serangan = 100;
    
    int Obat = 3;
    
    cout<<"Nama      : meyze hadishopia" <<endl;
    cout<<"Nim       : 20230801188" <<endl;
    
    do {
    cout << endl;
    cout << "===================================================" << endl;
    cout << "=           Ψ SHADOW OF THE COLOSSUS Ψ            =" << endl;
    cout << "===================================================" << endl << endl;
    
    cout << " klik apa saja untuk mulai bermain :";
    cin >> Next;
    cout << endl;
    
    cout << "=================================================== " << endl;
    cout << "=   Putri, cintaku padamu seperti bunga edelweiss = " << endl;
    cout << "= yang akan selalu abadi, aku akan segera kembali = " << endl;
    cout << "=   ke istana kunci kamarmu sampai aku pulang.    = " << endl;
    cout << "==================================================="  << endl << endl;
    
    cout << " klik apa saja untuk mulai bermain :";
    cin >> Next;
    cout << endl;
    
    cout << "\033[2J\033[1;1H";

    cout << endl;
    cout << "=================================================== " << endl;
    cout << "= Keesokan harinya....                            = " << endl;
    cout << "= Istana terlihat begitu sangat gaduh dan kacau,  = " << endl;
    cout << "= tuan putri tak ada dikamarnya, dimana dia ?     = " << endl;
    cout << "==================================================="  << endl;
    cout << endl;
    
    cout << "bantu aku mencari tuan putri !" << endl << endl;
    cout << "klik apa saja untuk melanjutkan :";
    cin >> Next;
    cout << endl;
    
    cout << "=================================================== " << endl;
    cout << "=  oh tidaakk............!!!                      = " << endl;
    cout << "=  tuan putri hilang, ia diculik oleh monster     = " << endl;
    cout << "=  selamatkan tuan putri dari monster jahat       = " << endl;
    cout << "=================================================== " << endl;
    cout << endl;
    
    cout << "klik apa saja untuk melanjutkan :";
    cin >> Next;
    cout << endl;

    while(true){
        
        cout << "\033[2J\033[1;1H";
                    
        cout << endl;
        cout << " 1. KSATRIA" << endl;
        cout << " 2. PEMANAH" << endl;
        cout << " 3. MEDIS" << endl;
                    
        cout << endl;
        cout << " SILAHKAN PILIH KARAKTER : ";
        cin >> Pilihan;
                    
            if(Pilihan == "1"){
            Karakter = "KSATRIA";
            break;
            }
                        
            else if(Pilihan == "2"){
            Karakter = "PEMANAH";
            break;
            }
                        
            else if(Pilihan == "3"){
            Karakter = "MEDIS";
            break;
            }
            
            else{
            continue;
            }
                        
    }
    
        cout << endl;
        cout << " ANDA MEMILIH KARAKTER " << Karakter;
                        
        cout << endl;
        cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
        cin >> Next;
        
        while(true){
                        
        cout << "\033[2J\033[1;1H";
        
        cout << endl;
        cout << " " << Karakter << ", STATUS KESEHATAN :" << endl;
                        
        cout << endl;
        cout << " HP = " << HP << endl;
        cout << " KEKUATAN = " << Kekuatan << endl;
        
            cout << "\033[2J\033[1;1H";

            if(HP <= 0){
            cout << endl;
            cout << " KAMU KALAH, GAME BERAKHIR" << endl;
         
            break;
            }    
            

    
    Akibat = " MONSTER BERLARI KEARAHMU";
     
    while(true){
    
    cout << "\033[2J\033[1;1H";
                    
    cout << endl;
    cout << Akibat << endl;
                    
    cout << endl;
    cout << " HP MU = " << HP << endl;
    cout << " SISA OBAT = " << Obat << endl;
                    
    cout << endl;
    cout << " HP MONSTER = " << HPMonster << endl;
    
        if(HP <= 0){
        cout << endl;
        cout << " KAMU TERBUNUH OLEH MONSTER" << endl;
                    
        break;
        }
                
        else if(HPMonster<= 0){
        cout << endl;
        cout << " KAMU MENANG, MONSTER TERBUNUH! PUTRI BERHASIL DISELAMATKAN. " << endl;
                                
        break;
        }
    
    cout << endl;
    cout << " 1. SERANG" << endl;
    cout << " 2. TAMBAH HP" << endl;
                    
    cout << endl;
    cout << " MASUKKAN PILIHAN : ";
    cin >> Pilihan;
                    
        if(Pilihan == "1"){
        Akibat = " MONSTER TERKENA SERANGANMU";
        HP -= Serangan;
        HPMonster -= Kekuatan;
        continue;
        }
                        
        else if(Pilihan == "2"){
                            
            if(Obat >= 1){
            Akibat = " BERHASIL, POWERMU BERTAMBAH";
            Obat -= 1;
            HP += 40;
            continue;
            }
                            
            else if(Obat < 1){
            Akibat = " OBATMU TELAH HABIS";
            continue;
            }
        }
                        
        else{
        continue;
        }
                        
    }
    
   
    break;
    
    }
    

    cout << endl;
   
    cout << " INGIN BERMAIN LAGI ? (y/n): ";
    cin >> ulang;
    
    } while (ulang == "y");
    
    cout << "\033[2J\033[1;1H";

    return 0;
    
}