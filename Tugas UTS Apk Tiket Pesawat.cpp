#include <iostream>
#include <string.h>

using namespace std;

string user, asal, tujuan, password, pesawat1, jumlahPenumpang;
char pilih;
int tanggal1, bulan1, penumpang;

void alert()
{
    do
    {
        cout << "Anda telah berhasil login, Ingin melanjutkan pemesanan? (y/n) " << endl;
        cin >> pilih;
    } while (pilih != 'y' && pilih != 'n');
}

// void alert2()
// {
//     do
//     {
//         cout << "BULAN TIDAK TERSEDIA!" << endl;
//         cin >> bulan1;
//     } while (bulan1 != 1 || bulan1 != 2);
// }

// void alert3()
// {
//     do
//     {
//         cout << "BULAN TIDAK TERSEDIA!" << endl;
//         cin >> bulan1;
//     } while (bulan1 != 1);
// }

void login()
{

    cout << "APLIKASI PEMESANAN TIKET PESAWAT" << endl
         << endl;
    cout << "Masukkan Username : ";
    getline(cin >> ws, user);
    cout << "Masukkan Password : ";
    getline(cin >> ws, password);

    cout << "Halo " << user << " Selamat Datang !" << endl;
    alert();
}

void berangkat(int tanggal1)
{
    if (tanggal1 <= 30 && tanggal1 >= 1)
    {
        cout << "BULAN YANG TERSEDIA : " << endl;
        cout << "1. November" << endl;
        cout << "2. Desember" << endl;
        cout << "Pilih Bulan : " << endl;
        cin >> bulan1;
        if (bulan == 1 && bulan == 2)
        {
            maskapaiBerangkat(tanggal1);
        }
        else
        {
            cout << "BULAN TIDAK TERSEDIA!" << endl;
            berangkat(tanggal1);
        }
    }
    else if (tanggal1 == 31)
    {
        cout << "BULAN YANG TERSEDIA : " << endl;
        cout << "Pilih Bulan:" << endl;
        cout << "1. Desember" << endl;
        cin >> bulan1;
        if (bulan1 == 1)
        {
            maskapaiBerangkat(tanggal1);
        }
        else
        {
            cout << "BULAN TIDAK TERSEDIA!" << endl;
            berangkat(tanggal1);
        };
    }
    else
    {
        cout << "Tanggal tidak tersedia" << endl;
    }
}

void maskapaiBerangkat(int tanggal)
{
    if (tanggal1 % 2 == 0)
    {
        cout << " ==========================================================" << endl;
        cout << " || MASKAPAI || JAM BERANGKAT || JAM TIBA ||    HARGA    ||" << endl;
        cout << " ==========================================================" << endl;
        cout << " ||  GARUDA  ||     09.00     ||   13.00  || Rp. 200.000 ||" << endl;
        cout << " || AIR ASIA ||     14.00     ||   17.00  || RP. 800.000 ||" << endl;
        cout << " ==========================================================" << endl;

        cout << "Pilih Maskapai : ";
        cin << pesawat1;
    }
    else if (tanggal1 % 2 != 0)
    {
        cout << " ==========================================================" << endl;
        cout << " || MASKAPAI || JAM BERANGKAT || JAM TIBA ||    HARGA    ||" << endl;
        cout << " ==========================================================" << endl;
        cout << " ||  GARUDA  ||     09.00     ||   13.00  || Rp. 200.000 ||" << endl;
        cout << " ==========================================================" << endl;

        cout << "Pilih Maskapai : ";
        cin << pesawat1;
    }
};

void maskapaiPulang()
{
    if (tanggal1 % 2 == 0)
    {
        cout << " ==========================================================" << endl;
        cout << " || MASKAPAI || JAM BERANGKAT || JAM TIBA ||    HARGA    ||" << endl;
        cout << " ==========================================================" << endl;
        cout << " || CITILINK ||     13.00     ||   17.00  || Rp. 200.000 ||" << endl;
        cout << " || LION AIR ||     20.00     ||   00.00  || RP. 800.000 ||" << endl;
        cout << " ==========================================================" << endl;

        cout << "Pilih Maskapai : ";
        cin << pesawat1;
        penumpang1();
    }
    else if (tanggal1 % 2 != 0)
    {
        cout << " ==========================================================" << endl;
        cout << " || MASKAPAI || JAM BERANGKAT || JAM TIBA ||    HARGA    ||" << endl;
        cout << " ==========================================================" << endl;
        cout << " || CITILINK ||     07.00     ||   11.00  || Rp. 200.000 ||" << endl;
        cout << " ==========================================================" << endl;

        cout << "Pilih Maskapai : ";
        cin << pesawat1;
        penumpang1();
    }
}

void penumpang1(string pesawat1)
{
    jumlahPenumpang = pesawat1 * penumpang;

    cout << "Masukkan Jumlah Penumpang : ";
    cin >> penumpang << endl;
}

void form(char pilih)
{
    if (pilih == 'y' || pilih == 'Y')
    {
        cout << "Silahkan isi form dibawah ini!" << endl;
        cout << "Asal : ";
        getline(cin >> ws, asal);
        cout << "Tujuan :";
        getline(cin >> ws, tujuan);
        cout << "Tanggal Berangkat : " << endl;
        cin >> tanggal1;
        berangkat(tanggal1);
    }
    else if (pilih == 'n' || pilih == 'N')
    {
        cout << "TERIMAKASIH SUDAH MAMPIR!" << endl;
    }
    else
    {
        cout << "INPUT ANDA SALAH" << endl;
    }
    alert();
}

int main()
{
    login();
    form(pilih);
    berangkat(tanggal1);
    maskapaiBerangkat(tanggal1);
    penumpang1(pesawat1);

    return 0;
}

//  switch (tanggal1)
//     {
//     case 1;
//         if (tanggal1 <= 30 || tanggal1 >= 1)
//         {
//             cout << "BULAN YANG TERSEDIA : " << endl;
//             cout << "1. November" << endl;
//             cout << "2. Desember" << endl;
//             cout << "Pilih Bulan : " << endl;
//             cin >> bulan1;
//             do
//             {
//                 cout << "Bulan Tidak Tersedia!" << endl;
//                 cin >> bulan1;
//             } while (bulan1 != 2 || bulan1 != 1);
//         }
//         else if (tanggal1 == 31)
//         {
//             cout << "Pilih Bulan:" << endl;
//             cout << "1. Desember" << endl;
//             cin >> bulan1;
//             do
//             {
//                 cout << "Bulan Tidak Tersedia!";
//                 cin >> bulan1;
//             } while (bulan1 != 1);
//         }
//         else
//         {
//             cout << "Tanggal tidak tersedia" << endl;
//         }
//     }
// }

// BERANGKAT SWITCH CASE
// void berangkat(int tanggal1)
// {
//     switch (tanggal1)
//     {
//     case 1:
//         do
//         {
//             cout << "BULAN YANG TERSEDIA : " << endl;
//             cout << "1. November" << endl;
//             cout << "2. Desember" << endl;
//             cout << "Pilih Bulan : " << endl;
//             cin >> bulan1;
//         } while (tanggal1 <= 30 || tanggal1 >= 1);
//         break;
//     case 2:
//         do
//         {
//             cout << "Pilih Bulan:" << endl;
//             cout << "1. Desember" << endl;
//             cin >> bulan1;
//         } while (tanggal1 == 31);
//         break;
//     case 3:
//         do
//         {
//             cout << "Bulan Tidak Tersedia!";
//             cin >> bulan1;
//         } while (bulan1 != 1);
//     }
// }