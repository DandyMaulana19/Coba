#include <iostream>
#include <string.h>

using namespace std;

string user, asal, tujuan, password;
int tanggal;
char pilih;

// Alert Function
void alert_success() {
    cout << "Berhasil" << endl;
}

void alert_error() {
    cout << "ERROR\nPilihan Anda tidak tersedia" << endl;
}


// Jadwal Maskapai
void jadwalMaskapai()
{
    int jadwal;

    if (jadwal % 2 == 0)
    {
        cout << " ==========================================================" << endl;
        cout << " ||  MASKAPAI  || JAM BERANGKAT || JAM TIBA ||    HARGA    ||" << endl;
        cout << " ==========================================================" << endl;
        cout << " ||   GARUDA   ||      09.00    ||   13.00  || Rp. 200.000 ||" << endl;
        cout << " ||  AIR ASIA  ||      09.00    ||   13.00  || Rp. 200.000 ||" << endl;
    };
}

// Cetak Tiket
void cetakTiket(int tanggal, string username, string asal, string tujuan, int bulan) {
    cout << "============== TIKET ANDA ==============" << endl;
    cout << "Nama\t\t: " << username << endl;
    cout << "Asal\t\t: " << asal << endl;
    cout << "Tujuan\t\t: " << tujuan << endl;
    cout << "Tanggal\t\t: " << tanggal << endl;
    if(bulan == 1) {
        cout << "Bulan\t\t: November" << endl;
    }else if(bulan == 2) {
        cout << "Bulan\t\t: Desember" << endl;
    }
    if(tanggal % 2 == 0) {
        cout << "Maskapai\t: Garuda " << endl;
    }else {
        cout << "Maskapai\t: Air Asia " << endl;
    }
}



// Berangkat Function
void berangkat(int tanggal, string username, string asal, string tujuan){
    int bulan;

    if(tanggal >= 1 && tanggal <= 30) {
        cout << "BULAN YANG TERSEDIA : " << endl;
        cout << "1. November" << endl;
        cout << "2. Desember" << endl;
        cout << "Pilih Bulan : "; cin >> bulan;

        if(bulan == 1 || bulan == 2) {
            cout << "Bulan Tersedia" << endl;
            cout << "Apakah Ingin PP? (y/n) : "; cin >> pilih;
            if(pilih == 'y') {
                // disini PP
            }else if(pilih == 'n') {
                jadwalMaskapai();
                cetakTiket(tanggal, username, asal, tujuan, bulan);
            }
        }else {
            cout << "Bulan tidak tersedia" << endl;
        }
        
    }else if(tanggal == 31) {
        cout << "BULAN YANG TERSEDIA : " << endl;
        cout << "1. Desember" << endl;
        cout << "Pilih bulan : "; cin >> bulan;
        if(bulan != 1) {
            cout << "Bulan tidak tersedia" << endl;
        }else {
            cout << "Bulan Tersedia" << endl;
            cout << "Apakah Ingin PP? (y/n) : "; cin >> pilih;
            if(pilih == 'y') {
                // disini pp
            }else if(pilih == 'n') {
                jadwalMaskapai();
                cetakTiket(tanggal, username, asal, tujuan, bulan);
            }
        }
    }
}


// Form Function
void form(string username){
    if (pilih == 'y'){
        cout << "Silahkan isi form dibawah ini!" << endl;
        cout << "Asal : "; getline(cin >> ws, asal);
        cout << "Tujuan : "; getline(cin >> ws, tujuan);
        cout << "Tanggal Berangkat : ";cin >>  tanggal;
        berangkat(tanggal, username, asal, tujuan);
    }else if (pilih == 'n'){
        cout << "TERIMAKASIH SUDAH MAMPIR!" << endl;
    }else{
        cout << "INPUT ANDA SALAH" << endl;
    }
}



// Login Function
void login()
{
    string username, password;
    cout << "===============================================" << endl;
    cout << "       APLIKASI PEMESANAN TIKET PESAWAT        " << endl;
    cout << "===============================================" << endl;
    cout << "================== L O G I N ==================" << endl;
    cout << "Masukkan Username : ";
    getline(cin >> ws, username);
    cout << "Masukkan Password : ";
    getline(cin >> ws, password);
    cout << "Halo " << username << " Selamat datang!" << endl;
    cout << "Lanjutkan ke pemesanan tiket? (y/n)"; cin >> pilih;

    if(pilih == 'y' || pilih == 'Y') {
        form(username);
    }else if(pilih == 'n' || pilih == 'N') {
        return;
    }else {
        alert_error();
    }
}





// void alert()
// {
//     cout << "Anda telah berhasil login, Ingin melanjutkan pemesanan? (y/n) " << endl;
//     cin >> pilih;
//     do
//     {
//         cout << "Anda telah berhasil login, Ingin melanjutkan pemesanan? (y/n) " << endl;
//     } while (pilih != 'y' && pilih != 'n');
// }


int main()
{
    login();
    // alert();
    // form();

    return 0;
}
