#include <iostream>
#include <string.h>

using namespace std;

string user, asal, tujuan, tanggal1, password;
char pilih;

void login()
{
    string user, password;

    cout << "APLIKASI PEMESANAN TIKET PESAWAT" << endl
         << endl;
    cout << "Masukkan Username : ";
    cin >> user;
    cout << "Masukkan Password : ";
    cin >> password;

    cout << "HAI " << user << " !" << endl;
}

void berangkat()
{
    int tanggal1, bulan1;
    tanggal1 = 1;

    if (tanggal1 <= 30 && tanggal1 >= 1)
    {
        cout << "BULAN YANG TERSEDIA : " << endl;
        cout << "1. November" << endl;
        cout << "2. Desember" << endl;
        cout << "Pilih Bulan : " << endl;
        cin >> bulan1;
        do
        {
            cout << "Bulan Tidak Tersedia!";
        } while (bulan1 != 1 && bulan1 != 2);
    }
    else if (tanggal1 == 31)
    {
        cout << "Pilih Bulan:" << endl;
        cout << "1. Desember" << endl;
        cin >> bulan1;
        do
        {
            cout << "Bulan Tidak Tersedia!";
        } while (bulan1 != 1);
    }
    else
    {
        cout << "Tanggal tidak tersedia" << endl;
    }
}

void jadwalMaskapai()
{
    int jadwal;

    if (jadwal % 2 == 0)
    {
        cout << " ==========================================================" << endl;
        cout << " || MASKAPAI || JAM BERANGKAT || JAM TIBA ||    HARGA    ||" << endl;
        cout << " ==========================================================" << endl;
        cout << " ||  GARUDA  ||      09.00    ||   13.00  || Rp. 200.000 ||";
    };
}

void alert()
{
    cout << "Anda telah berhasil login, Ingin melanjutkan pemesanan? (y/n) " << endl;
    cin >> pilih;
    do
    {
        cout << "Anda telah berhasil login, Ingin melanjutkan pemesanan? (y/n) " << endl;
    } while (pilih != 'y' && pilih != 'n');
}

void form()
{
    if (pilih == 'y')
    {
        cout << "Silahkan isi form dibawah ini!" << endl;
        cout << "Asal : ";
        cin >> asal;
        cout << "Tujuan :";
        cin >> tujuan;
        cout << "Tanggal Berangkat : " << endl;
        cin >> tanggal1;
        berangkat();
        // do
        // {
        //     return berangkat();
        // } while (berangkat() == );
    }
    else if (pilih == 'n')
    {
        cout << "TERIMAKASIH SUDAH MAMPIR!" << endl;
    }
    else
    {
        cout << "INPUT ANDA SALAH" << endl;
        alert();
    }
}

int main()
{
    login();
    alert();
    form();

    return 0;
}
