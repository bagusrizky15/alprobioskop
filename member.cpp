#include <cstdlib>
#include <iostream.h>
#include <windows.h>
#include <conio.h>
#include <fstream.h>

using namespace std;
void wait ( double seconds )//fungsi timing
{
  clock_t endwait;
  endwait = clock () + seconds * CLOCKS_PER_SEC ;
  while (clock() < endwait) {}
}


int time(){
    PlaySound("hitung.wav",NULL,SND_ASYNC);
     for(int i=5;i>=1;i--){
     
          system("cls");//penghapus layar
         //   cout<<" lampu akan hijau dalam hitungan :"<<endl;
            cout<<endl<<endl<<endl<<endl<<endl;
            cout<<"                                  Tunggu Sebentar"<<endl<<endl;
            cout<<"                                         "<<i;wait(1);//pemberian waktu
            }
    system("cls");//penghapus layar
  //  cout<<"silahkan jalan :D"<<endl;
   // system("PAUSE");
    return EXIT_SUCCESS;
}
 //simpan teks
 int simpan(){
         string isiFile;
         string judul, hari;
         string jam;
  //  ofstream fileout;
    //fileout.open("nwd.txt");
  
    //cout<<" berapa jumlah update Film : ";
  //  cin>>a;
  //  for(int i=0; i<a; i++){
          ofstream fileout;
          fileout.open("nwd.txt"); 
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                   MENU OF OPERATOR                |" << endl;
                 cout <<"                |                  Update Daftar Film               |" << endl;
                 cout <<"                +===================================================+" << endl;        
                 cout <<"                | Input Judul Film  : ";
                 cin >>judul;
                 cout <<"                | Input Hari Tayang : ";
                 cin >>hari;
                 cout <<"                | Input Jam Tayang  : ";
                 cin >>jam;
                 cout <<endl;
//}
          ofstream fl("nwd.txt");
             if(fl.is_open()){
                 fl << isiFile;
                 fl << judul<<endl; 
                 fl << hari<<endl;
                 fl << jam<<endl;
                 
                 }//+" "+nmBk;
                 fl.close();
 
               // ();
               cout <<"                  Selamat, Update Film  Berhasil !" << endl<<endl;
}
//output text
 int output(){
    string baca;
    string baris1;
    string baris2;
    string baris3;
	ifstream data;
	data.open ("nwd.txt"); // membuka file dataku.txt
      // while(!data.eof()) //membaca data secara keseluruhan
    //   { 
	        getline(data, baris1);
	        getline(data, baris2);
	        getline(data, baris3);
	      //  getline(data, baca);
	    //    baca += baris+"\n";
	        
      //  } 
        
	data.close();
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                   MENU PELANGGAN                  |" << endl;
                 cout <<"                |                  Lihat Daftar Film                |" << endl;
                 cout <<"                +===================================================+" << endl;        
                 cout <<"                |  Judul Film  : "<<baris1<<endl;
                 cout <<"                |  Hari Tayang : "<<baris2<<endl;
                 cout <<"                |  Jam Tayang  : "<<baris3<<endl;
                 cout <<"                +===================================================+" << endl;
                 cout <<endl;
	//
    //system("cls");
 // menampilkan data ke layar
}
int cinema()
{
   // system("color F0");
  
    char a[]={" 18-juni-2012\n TERIMA KASIH KEPADA MENTOR 'NURI PRIYANTO'\n Product By Nurwahid, Risky Andika Surya, Agung Hidayat"};
    int i;
    double j;


        cout<<endl<<endl;
        system("color 0F");
        cout<<"    o====   o-   o-  -o    o====    o-    -o    -o--o-                         "<<endl;
        cout<<"   ||       ||   ||| ||   ||        |||  |||   -o    o-                        "<<endl;        
        cout<<"   ||       ||   || |||   ||-oo-/   || || ||    -o--o-                         "<<endl;
        cout<<"   ||       ||   ||  ||   ||        || o- ||                                   "<<endl;
        cout<<"    o====/  -o   -o  o-    o====/   -o    o-    o=======o         =======      "<<endl;
        cout<<"                                               /==o--o===o       ========      "<<endl;
        cout<<"                                              /==o    o===o    ==========      "<<endl;
        cout<<"                                                       o===o   ==========      "<<endl;        
        cout<<"                                                       o===o       ======      "<<endl;
        cout<<"                                                       o===o       ======      "<<endl;
        cout<<"                                                       o===o       ======      "<<endl;
        cout<<"                                                       o===o       ======      "<<endl;        
        cout<<"                                                      o===o        ======      "<<endl;
        cout<<"                                                    o===o          ======      "<<endl;
        cout<<"                                                  o===o            ======      "<<endl;
        cout<<"                                                o===o   ===o       ======      "<<endl;        
        cout<<"                                              o===o    ===o        ======      "<<endl;
        cout<<"                                             o===========o     ==============  "<<endl;
        cout<<"                                             o===========o     ==============  "<<endl;
        cout<<"                                             o===========o     ==============  "<<endl;
      //  system ("cls");
            for(i=0;a[i]!='\0';i++)
    {
      
                                                            cout<<""<<a[i];
        for(j=0;j<=9999990;j++){
        
        }
        
      //  ;//menghapus layar

    
    }
   // PlaySound("klik.wav",NULL,SND_ASYNC);
}
//welcome
int loading()
{
  
    int i,j;
    system("color 0A");
    for(i=0;i<80;i++)
    {
        cout<<endl<<endl<<endl<<endl;
        
        cout<<"          oooo   oooo   ooo  oo      ooo   00      o   o      ooo "<<endl;
        cout<<"          ooo     ooo  o      o     o     0  0    o o o o    o    "<<endl;        
        cout<<"           oo  o  oo   oooo   o     o     0  0   oo  o  oo   oooo  "<<endl;
        cout<<"            o o o o    o      o oo  o     0  0  ooo     ooo  o     "<<endl;
        cout<<"             o   0      ooo   0000   ooo   00   oooo   oooo   ooo "<<endl<<endl;
       // system("color 0C");
        cout<<"                             LOADING "<<i+20<<"%";
        cout<<"\n";
        for(j=0;j<i;j++)
        {
            cout<<">";
        }
        system ("cls");//menghapus layar
    }
}
//login

int member()
    {
    int x;
    int pil;
    int i;
    int j;
   
   
              
           //   PlaySound("member.wav",NULL,SND_ASYNC);
              
                back:
                system("cls");
                 system("color 0A");
                cout <<"                 Selamat Datang Pelangggan, Selamat Menikmati !" << endl<<endl;

               
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                   MENU PELANGGAN                  |" << endl;
                 cout <<"                +===================================================+" << endl;
                 cout <<"                | 1. Lihat Daftar Film                              |         "<<endl;
                 cout <<"                | 2. Tampilan Kursi Bioskop                         |          "<<endl;
                 cout <<"                | 3. Harga Tiket Film                               |          "<<endl;
                 cout <<"                | 4. Petunjuk Pembelian Tiket                       |          "<<endl;
                 cout <<"                | 5. Exit                                           |          "<<endl;
                 cout <<"                +===================================================+          "<<endl;
                 cout <<"                 Masukkan Pilihan Anda ";
                 cin>>x;
           //      PlaySound("klik.wav",NULL,SND_ASYNC);
                 cout<<endl<<endl;
            switch(x)
             {
                case 1:
                system("cls");
                 system("color 0B");
                  output();
                 cout<<"                Tekan ENTER untuk kembali ke menu ";
                 
                 getch();
          //       PlaySound("klik.wav",NULL,SND_ASYNC);
                 cout<<endl;
                goto back;
                    break;
                case 3:
                system("cls");
                 system("color 0E");
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                   MENU PELANGGGAN                 |" << endl;
                 cout <<"                |                     Tiket Film                    |" << endl;
                 cout <<"                +===================================================+" << endl; 
                 cout <<"                | INFORMASI                                         |" << endl;
                 cout <<"                |    Bioskop Buka setiap hari kec. hari besar       |" << endl;       
                 cout <<"                | Jenis Harga Tiket                                 |" << endl;
                 cout <<"                | 1. Dewasa : Rp.30.000,-                           |" << endl;
                 cout <<"                | 2. Anak   : Rp.25.000,-                           |" << endl;
                 cout <<"                +===================================================+" << endl<<endl;
                 cout<<"                Tekan ENTER untuk kembali ke menu ";
                 
                 getch();
            //     PlaySound("klik.wav",NULL,SND_ASYNC);
                 cout<<endl;
                goto back;
                    break;
                
                case 5:
              system("cls");
               system("color 0C");
              time();
              return EXIT_SUCCESS;
              break;
                
                case 4:
                                system("cls");
                 system("color 09");
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                   MENU PELANGGGAN                 |" << endl;
                 cout <<"                |             Pentunjuk Pembelian Tiket Film        |" << endl;
                 cout <<"                +===================================================+" << endl; 
                 cout <<"                |INFORMASI                                          |  " << endl;
                 cout <<"                | -> Sebelum Menikmati layanan kami , anda silahkan-|   " << endl;       
                 cout <<"                |    membaca informasi yang ada di menu ini         |   " << endl;
                 cout <<"                | -> untuk pembelian tiket langsung saja datang     |" << endl;
               //  cout <<"                  Untuk pembelian tiket langsung saja datang      " << endl;                                               |" << endl;
                 cout <<"                |      ke loket kami                                |  " << endl;
                 cout <<"                | -> Atau lebih jelasnya silahkan bertanya pada -   |   " << endl;
                 cout <<"                |    penjaga yang berada di loket                   |   " << endl;
                 cout <<"                | -> Kami tidak tidak menjual tiket di luar loket - |   " << endl;
                 cout <<"                |    jadi mohon berhati-hati jika ada yang menjual -|   " << endl;
                 cout <<"                |    tiket mengatas namakan Bioskop kami            |   " << endl;
                 cout <<"                | -> Berhati-hatilah dalam berbagai apapun          |   " << endl;
                 cout <<"                | -> Selamat Menonton                               |   " << endl;
                 cout <<"                |            JANGAN LUPA KEMBALI LAGI *_^           |  " << endl;
                 cout <<"                +===================================================+" << endl<<endl;
                 cout<<"                Tekan ENTER untuk kembali ke menu ";
                 
                 getch();
             //    PlaySound("klik.wav",NULL,SND_ASYNC);
                 cout<<endl;
                goto back;
                    break;
                     
                 
                 case 2:
                 system("cls");
                 system("color 0F");
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                   MENU PELANGGAN                  |" << endl;
                 cout <<"                |                 Tampilan Kursi Bioskop            |" << endl;
                 cout <<"                +===================================================+" << endl;

    cout<<"             |                         L A Y A R                          |  "<<endl;
    cout<<"             +------------------------------------------------------------+  "<<endl<<endl<<endl;
  //system("color 0A");
    cout<<"            Kode                                                           Kode"<<endl;
    cout<<"        K -> A |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| A"<<endl;
    cout<<"        U -> B |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| B"<<endl;
    cout<<"        R -> C |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| C"<<endl;
    cout<<"        S -> D |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| D"<<endl;
   // cout<<endl;
    cout<<"           pintu                                                          pintu "<<endl;         
   // cout<<endl;
    cout<<"        I -> E |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| E"<<endl;
    cout<<"        K -> F |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| F"<<endl;
    cout<<"        U -> G |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| G"<<endl;
    cout<<"        R -> H |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| H"<<endl;
    cout<<"        S -> I |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| I"<<endl;
    cout<<"        I -> J |1|2|3|4|5| p |6|7|8|9|10|11|12|13|14|15| p |16|17|18|19|20| J"<<endl;
    cout<<"                           i                             i                   "<<endl;
    cout<<"                           n                             n                   "<<endl;
    cout<<"                           t                             t                   "<<endl;
    cout<<"                           u                             u                   "<<endl;
    
                 cout<<"                          Tekan ENTER untuk kembali ke menu ";
                 
                 getch();
             //    PlaySound("klik.wav",NULL,SND_ASYNC);
                 cout<<endl;
                goto back;

    break;
    


                
                
                }
                return member();
     
 
}
 



int exit(){
    int i,j;
     for(i=0;i<80;i++)
    {
    cout<<endl<<endl<<endl<<endl;
   //ystem  ("color 0A");
        cout<<"               ooo  o   0  o  ooooo "<<endl;
        cout<<"              o      o o   o    0  "<<endl;        
        cout<<"              oooo    o    o    o  "<<endl;
        cout<<"              o      o o   o    o    "<<endl;
        cout<<"               ooo  o   0  o    0    Loading "<<i+20<<"%"<<endl;
      //  cout<<"                        LOADING "<<i+50<<"%";
        cout<<"\n";
        for(j=0;j<i;j++)
        {
        //    cout<<">";
        }
        system ("cls");//menghapus layar
    }
}
int main(int argc, char *argv[])
{
    system("title Software Consule Member Bioskop");
// system("color FFF");
   PlaySound("welcome.wav",NULL,SND_ASYNC);
    loading();

    cinema();
    member();
   
    
    
    
    
    
  //system("PAUSE");
    return EXIT_SUCCESS;
}
