#include <iostream>

using namespace std;

int main()
{
    int n, a, b, i, j, bayar, tiket;
    string nama, seat[5][5];
    
    
    cout << "Selamat Datang di Bioskop Kami" << endl;
    cout << "1. Booking Film" << endl;
    cout << "2. Keluar" << endl;
    cout << "Masukkan Pilihan Anda: ";
    cin >> n;
    cout << endl;
    
    switch (n){
        case 1:
        cout << "1. Spider-Man No Way Home" << endl;
        cout << "2. Venom 2" << endl;
        cout << "3. Shang Chi" << endl;
        cout << "Pilihlah Film yang ingin di Booking: ";
        cin >> a;
        cout << endl;
        
        cout << "1. 12pm" << endl;
        cout << "2. 3pm" << endl;
        cout << "3. 6pm" << endl;
        cout << "Jam yang Diinginkan: ";
        cin >> b;
        cout << endl;
                
        cout << "Masukkan Nama Anda: ";
        cin >> nama;
        cout << endl;
                
        cout << "Banyak Tiket yang Ingin Dipesan: ";
        cin >> tiket;
        cout << endl;
                
        cout << "Tempat Duduk, Baris: A-E dan Kolom: 1-5. Baris,Kolom" << endl;
        cin >> seat[i][j];
        cout << endl;
               
        cout << "Total Pemesanan Tiket Anda: " << tiket*35000 << endl;
        cout << "Uang Anda Sebesar: ";
        cin >> bayar;
        cout << endl;
        cout << "Kembalian Anda: " << bayar - (tiket*35000) << endl;
        
        case 2:
        cout << "Terima Kasih";
        break;
    }
}


