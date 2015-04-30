#include <cstdlib>
#include <iostream.h>
#include <windows.h>
#include <conio.h>
#include <fstream.h>
#include <stdio.h>


using namespace std;

void wait ( double seconds )//fungsi timing
{
  clock_t endwait;
  endwait = clock () + seconds * CLOCKS_PER_SEC ;
  while (clock() < endwait) {}
}
int kursi(){

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
               PlaySound("Succes.wav",NULL,SND_ASYNC);
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
       
                 cout <<"                |  Judul Film  : "<<baris1<<endl;
                 cout <<"                |  Hari Tayang : "<<baris2<<endl;
                 cout <<"                |  Jam Tayang  : "<<baris3<<endl;
                 cout <<"                +===================================================+" << endl;
                 cout <<endl;
                                 
	//
    //system("cls");
 // menampilkan data ke layar
}
//welcome
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
    PlaySound("klik.wav",NULL,SND_ASYNC);
}
int loading()
{
     system("color 0A");
  
    int i,j;
    for(i=0;i<80;i++)
    {
        cout<<endl<<endl<<endl<<endl;
        //system("color 0F");
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
int login()
{

    
    char* username;
    char* password;
    int i,j;
    loginback:
    system ("cls");
     system("color 0C");
    
  //Menentukan nilai konstanta dari varible username dan password
               username ="uad-alpro";
               password ="alpro";
  //Inisialisasi variabel
                 char konfirmasi_username[16];
                 char konfirmasi_password[16];
                 cout << endl<<endl<<endl;
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                     LOGIN OPERATOR                |" << endl;
                 cout <<"                +===================================================+" << endl;
  //Fungsi untuk melakukan input data
                 cout << "                |  Username : "; 
                 cin >> konfirmasi_username;
                 cout <<"                |  Password : "; 
                 cin >> konfirmasi_password;
                 
 
 //Fungsi untuk membandingkan dua buah string menggunakan "strcmp"
          if (strcmp (username, konfirmasi_username) == 0){
          if (strcmp (password, konfirmasi_password) == 0){
          system ("cls");
          
          }
          else if (strcmp (password, konfirmasi_password) != 0){
          cout << endl;
          system ("cls");
          PlaySound("passwordfalse.wav",NULL,SND_ASYNC);
          cout << "                   ===========> Maaf, Password Yang Anda Masukkan Salah !" << endl;
          cout << "                                       Coba Sekali Lagi "<< endl;
          goto loginback;
          }
     }
          else{ 
          cout<<endl;
          PlaySound("usernamefalse.wav",NULL,SND_ASYNC);
          cout <<"                    ===========> Maaf, Username Yang Anda Masukkan Salah !" << endl;
          cout << "                                       Coba Sekali Lagi "<< endl;
          goto loginback;
        }
     
    

           
     
     
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
}//}
//}

//}
int admin()
    {
    int x;
    int pil;
    int i;
    int j;
   
              cout << endl;
              PlaySound("goodwork.wav",NULL,SND_ASYNC);
               
              back:
              system("cls");
               system("color 0A");
              cout <<"                 Selamat Datang Di Operator System, Selamat Bekerja !" << endl<<endl;
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                 MENU OF OPERATOR                  |" << endl;
                 cout <<"                +===================================================+" << endl;
                 cout <<"                | 1. Tambah Daftar Film                             |         "<<endl;
                 cout <<"                | 2. Lihat Daftar Film                              |          "<<endl;
                 cout <<"                | 3. Tampilan Kursi Bioskop                         |          "<<endl;
                 cout <<"                | 4. Pembelian Tiket Film                           |          "<<endl;
                 cout <<"                | 5. Cek Sisa Kursi Bioskop                         |          "<<endl;
                 cout <<"                | 6. Exit                                           |          "<<endl;
                 cout <<"                +===================================================+          "<<endl;
                 cout <<"                 Masukkan Pilihan Anda ";
                 cin>>x;
                // x=getch();
                 PlaySound("klik.wav",NULL,SND_ASYNC);
                 cout<<endl<<endl;
            switch(x)
             {
         //  case '1':
           case   1:
                system("cls");
                 system("color 0A");
                  simpan();
                 cout<<"                Tekan ENTER untuk kembali ke menu ";
                 
                 getch();
                 PlaySound("klik.wav",NULL,SND_ASYNC);
                 cout<<endl;
                goto back;
                
                
                break;


            //    case '2':
                case 2:
                     system("cls");
                      system("color 0B");
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                   MENU OF OPERATOR                |" << endl;
                 cout <<"                |                  Lihat Daftar Film                |" << endl;
                 cout <<"                +===================================================+" << endl; 
                  output();
                  
                 cout<<"                Tekan ENTER untuk kembali ke menu ";
                 getch();
                 PlaySound("klik.wav",NULL,SND_ASYNC);
                 cout<<endl;
                   goto back;
                    break;
                 
                // case '3':
                 case 3:
                      system("cls");
                       system("color 0E");
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                   MENU OF OPERATOR                |" << endl;
                 cout <<"                |                 Tampilan Kursi Bioskop            |" << endl;
                 cout <<"                +===================================================+" << endl;

    cout<<"             |                         L A Y A R                          |  "<<endl;
    cout<<"             +------------------------------------------------------------+  "<<endl<<endl<<endl;
  //  system("color 0A");
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
    PlaySound("klik.wav",NULL,SND_ASYNC);
    cout<<endl;
    goto back;
    break;
    
   // case '4':
    case 4:
         system("cls");
          system("color 0D");
         int jenis,total_tiket,jumlah;
         char kursi[5];
         char* jenis_txt;
         
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                   MENU OF OPERATOR                |" << endl;
                 cout <<"                |                 Pembelian Tiket Film              |" << endl;
                 cout <<"                +===================================================+" << endl; 
                 cout <<"                | INFORMASI                                         |" << endl;
                 cout <<"                |    Bioskop Buka setiap hari kec. hari besar       |" << endl;       
                 cout <<"                | Jenis Harga Tiket                                 |" << endl;
                 cout <<"                | 1. Dewasa : Rp.30.000,-                           |" << endl;
                 cout <<"                | 2. Anak   : Rp.25.000,-                           |" << endl;
                 cout <<"                +===================================================+" << endl<<endl;
                 cout<<"                  Tekan ENTER untuk Pembelian Tiket ";
                 getch();
  	              PlaySound("klik.wav",NULL,SND_ASYNC);  
                 cout<<endl<<endl;
                 came: 
                 system("cls");
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                   Lihat Film                      |" << endl;
                 cout <<"                +===================================================+" << endl; 
                 output();
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                 Pembelian Tiket Film              |" << endl;
                 cout <<"                +===================================================+" << endl;     
                 cout <<"                | Jenis Harga Tiket                                 |" << endl;
                 cout <<"                | 1. Dewasa : Rp.30.000,-                           |" << endl;
                 cout <<"                | 2. Anak   : Rp.25.000,-                           |" << endl;
                 cout <<"                | Inputkan jenis Tiket = ";
                 cin >>jenis;
                 cout <<"                | beli berapa banyak   = ";
                 cin >>jumlah;
                 cout <<"                | Kode Kursi           = ";
                 cin >>kursi;
                    if (jenis==1)

   	                 {

   		             total_tiket=jumlah*30000;
      	             jenis_txt="Dewasa";

   	                }

   	            else if (jenis==2)

   	                {

   		            total_tiket=jumlah*25000;
      	            jenis_txt="Anak-anak";

   	               }

   	               else

   	               {
                   cout <<"                +===================================================+"<<endl<<endl;
                   PlaySound("klik.wav",NULL,SND_ASYNC);
   		           cout<<"                 Input Jenis Salah, Mohon ulangi lagi";
      	           getch();
      	           PlaySound("klik.wav",NULL,SND_ASYNC);
                     goto came;
      	               
   	              }
   	              PlaySound("klik.wav",NULL,SND_ASYNC);
    	          system("cls");
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |               Anda Akan Menonton Film             |" << endl;
                 cout <<"                +===================================================+" << endl; 
                 output();
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                 Pembelian Tiket Film              |" << endl;
                 cout <<"                +===================================================+" << endl;     
                 cout <<"                | Jenis Tiket   : " <<jenis_txt<< endl;
                 cout <<"                | Jumlah Beli   : " <<jumlah<< endl;
                 cout <<"                | Kode Kursi    : " <<kursi<< endl;
                 cout <<"                +===================================================+" << endl;
                 cout <<"                |TOTAL BAYAR    : Rp. "<<total_tiket<<",-"<<endl;
                 cout <<"                +===================================================+" << endl;   
                 cout<<"                Tekan ENTER untuk kembali ke menu ";
                 getch();
                 PlaySound("klik.wav",NULL,SND_ASYNC);
                 cout<<endl<<endl;
                 goto back;
         break;
       //  case '6' :
         case 6 :
              system("cls");
               system("color 0E");
              system("color 0C");
              time();
              return EXIT_SUCCESS;
             // break;
         
       //  case '5':
          case 5:
              system("cls");
               system("color 0F");
         	int kursi_isi[4],kursi_kosong[4];
                int a;
                char x='A';

   	             cout<<"                 PETUNJUK "<<endl;
                 cout<<"                 Jumlah kursi di tiap Kode adalah 20 kursi"<<endl;
                 cout<<"                 Silahkan masukkan jumlah kursi yang telah ditempati"<<endl<<endl;
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                 MENU OF OPERATOR                  |" << endl;
                 cout <<"                |               Cek Sisa Kursi Bioskop              |" << endl;
                 cout <<"                |               INPUT KURSI YANG TERISI             |" << endl;
                 cout <<"                +===================================================+" << endl;

               a=0;

   	do

   	{       
                
                
                 cout <<"                | Kursi Kode ["<<x++<<"]  =  ";
                 cin >>kursi_isi[a];
               
       /*          cout <<"                | Input Day Running : "<<baris2<<endl;
                 cout <<"                | Input Time Slot   : "<<baris3<<endl;
                 cout <<"                +===================================================+" << endl;
*/




    //  	cout<<"Wisata "<<a+1<<" : ";

//      	cin>>kursi_isi[a];

      	a++;

   	}
   	

   	while (a<10);
    char y='A';
   	for (a=0;a<10;a++)

   		kursi_kosong[a]=20-kursi_isi[a];

   	//clrscr();
                 cout <<"                +===================================================+"<<endl;
                 PlaySound("klik.wav",NULL,SND_ASYNC);
                 system("cls");
                 cout <<"                +===================================================+"<<endl;
                 cout <<"                |                  MENU OF ADMIN                    |" << endl;
                 cout <<"                |              Cek Kursi Yang Kosong                |" << endl;
                 cout <<"                |                KURSI YANG KOSONG                  |" << endl;
                 cout <<"                +===================================================+" << endl;

   	for (a=0;a<10;a++)

   	{

           cout <<"                | Kursi Kode ["<<y++<<"]  =  "<<kursi_kosong[a]<<endl;
          //out<<"    Wisata "<<a+1<<" : "<<kursi_kosong[a];

      //out<<"\n-------------------------\n";

   	}
       cout <<"                +===================================================+"<<endl;
       cout<<"                Tekan ENTER untuk kembali ke menu ";
       getch();
       PlaySound("klik.wav",NULL,SND_ASYNC);
       cout<<endl;
       goto back;
      break;
               
                }
    return admin();
 
}
 




int main(int argc, char *argv[])
{
    system("title Software Consule Operator Bioskop");
    PlaySound("welcome.wav",NULL,SND_ASYNC);
   loading();
   cinema();
    login();
    admin();
  //  exit();
    
    
    
    
    
   // system("PAUSE");
    return EXIT_SUCCESS;
}
