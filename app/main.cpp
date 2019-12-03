#include<iostream>
#define max 25
using namespace std;

void daftarnikah();
void formulirn1();
void formulirn2();
void formulirn4();
void formulirn6();
void membuatnode();
void create(int v);
void insert();
void remove();
void read();
void clear();


int main(){
	int pilih=0;
	cout << " ============================================================================= " << endl ;
	cout << " |                       Selamat Datang di Aplikasi                          | " << endl ;
	cout << " ============================================================================= " << endl ;
	cout << " Siliahkan Pilih                                                            	" << endl ;
	cout << " 1. Daftar Nikah                                                           	" << endl ; // formulir untuk daftar terdiri dari from N1 - N7
	cout << " 2. Numpang Nikah                                                         		" << endl ; // formulir untuknumpang nikah
	cout << " 3. Melihat Data                                                           	" << endl ; // memasukan barcode maka akan muncul data yang sudah diisi
	cout << " 4. Info                                                                   	" << endl ; // untuk mengetahui langkah-langkah pendaftaran
	cout << " Masukan Pilihan Anda = "; 
	cin >> pilih;

	switch(pilih)
	{
		case 1:
		system("cls");
		daftarnikah();
		break;

		case 2:
		system("cls");
		//Numpang-Nikah
		break;

		//case 3:
		//system("cls");
		//Melihat-Barcode
		//break;

		case 4:
		system("cls");
		read();
		//Melihat barcode
		break;

		case 5:
		system("cls");
		//Info
		break;
	}

}

//Linked list
// Buat nyimpen datanya
int nilai;
void membuatnode(int file){

}
int value;
int counter = 0;

// Deklarasi struct untuk membuat STACK
struct node {
	int isi;
	node *next; 
  node *prev; 
}; node *front, *rear, *baru, *bantu; 

// Menginisialisasi 
void create(int v){
	baru = new node;
	baru -> isi = v;
	baru -> next = NULL;
  baru -> prev = NULL;
}

// untuk menambah atau memasukan data dari belakang
void insert(){
	if(counter == max){
		cout << " ANTRIAN SUDAH PENUH " << endl;
	} else if(rear == NULL){
		rear = baru;
    front = baru;   
    counter++;
	} else {
    rear -> next = baru;
    rear = baru;
    rear -> prev = front;
    counter++;
   } 
}

// untuk menghapus data atau menggambil data dari depan
void remove(){
	if (front == NULL || rear == NULL){
		cout << " ANTRIAN MASIH KOSONG " << endl;
	}else if (front -> next == NULL){
    front = NULL;
    counter--;
  } 

  else{
		bantu = front;
    front = front -> next;
    front -> prev = NULL;
    bantu -> next = NULL;
    bantu -> prev = NULL;
    counter--;
	} 
}

// untuk menampilkan data 
void read() {
  bantu = front; 
  if(counter == 0) {
    cout << " ANTRIAN MASIH KOSONG ";
  }else {
    while(bantu != NULL) {
      cout << bantu -> isi << "  ";
      bantu = bantu -> next;
    }
  }
  cout << endl;
}

 //untuk menghapus seluruh data
void clear(){
	front = NULL;
  rear = NULL;
  counter = 0;
}

/*
	int pilih; 
	int v;
  do {
    cout << "1. Tambah Antrian \n";
    cout << "2. kurangi Antrian \n";
    cout << "3. Lihat Antrian\n";
    cout << "4. Hapus semua Antrian\n";
    cout << "5. Exit \n";
    cout << "Silahkan Pilih = ";
    cin >> pilih;
    switch(pilih) {
        case 1 :
          cout << "masukan data : "; cin >> v;
          create(v);
          insert();
          cout << endl << endl;
          break;
        case 2 :
          remove();
          cout << endl << endl;
          break;
        case 3 :
          read();
          cout << endl << endl;
          break;
        case 4 :
          clear();
          cout << " Data Terhapus \n";
          cout << endl << endl;
          break;
        case 5 :
          cout << "Selesai \n";
          cout << endl << endl;
          break;
    }
  }
  while(pilih < 5);
}
*/








void daftarnikah()
{
	int v;
	int pilih2=0;
	char nama[50];
	cout << "Masukan Nama Panjang: " << endl;
	cin >> nama;
	cout << "Nama: " << nama << endl;

		cout << " ============================================================================= " << endl ;
		cout << " |                               Daftar Nikah                                | " << endl ;
		cout << " ============================================================================= " << endl ;
		cout << " | Nama :                                                                    | " << endl ; // apabila ingin melihat barcode tinggal pilih nama yang tertera
		cout << " |                                                                           | " << endl ; 
		cout << " | Siliahkan Pilih                                                           | " << endl ;
		cout << " | 1. formulir N1                                                            | " << endl ; 
		cout << " | 2. formulir N2                                                            | " << endl ; 
		cout << " | 3. formulir N3                                                            | " << endl ; 
		cout << " | 4. formulir N4                                                            | " << endl ; 
		cout << " | 5. formulir N5                                                            | " << endl ; 
		cout << " | 6. formulir N6                                                            | " << endl ; 
		cout << " 	Masukan Pilih Anda = ";
		cin >> pilih2;

		switch(pilih2)
		{
			case 1:
			formulirn1();
			create(v);
          	insert();
			//Folmulir n1
			break;

			case 2: 
			system("cls");
			create(v);
          	insert();
			//Folmulir n2
			break;

			case 3: 
			system("cls");
			create(v);
          	insert();
			//Folmulir n3
			break;

			case 4: 
			system("cls");
			create(v);
          	insert();
			//Folmulir n4
			break;

			case 5: 
			system("cls");
			create(v);
          	insert();
			//Folmulir n5
			break;

			case 6: 
			system("cls");
			create(v);
          	insert();
			//Folmulir n6
			break;
		}
}

void formulirn1()
{
	char kelurahan[20];
	char nama2[50];
	char kecamatan[20];
	char kota[20];
	char namaalias[50];
	char jk[1];
	char wn[20];
	char agama[10];
	char pekerjaan[20];
	char tmp_tinggal[50];
	char bint[5];
	char statuskwn[50];
	char statuskwn2[50];
	char isum[20];
	cout << " =============================================================================== " << endl ;
	cout << " |                               Formulir N1                                   | " << endl ;
	cout << " |                      Surat Keterangan Untuk Menikah                         | " << endl ;
	cout << " =============================================================================== " << endl ;
	cout << " Masukan Nama : "; 
	cin >> nama2; 
	cout << endl;
	cout << " KANTOR DESA / KELURAHAN : "; 
	cin >> kelurahan; 
	cout << endl;
	cout << " KECAMATAN : ";
	cin >> kecamatan;
	cout << endl;
	cout << "KABUPATEN / KOTA : ";
	cin >> kota;
	cout << endl;
	cout << "Yang bertanda tangan di bawah ini menerangkan dengan sesungguhnya bahwa :   	 " << endl ;
	cout << "1. Nama Lengkap : "<<nama2<<endl;
	cout << "2. Nama alias ";
	cin >> namaalias;
	cout << endl;
	cout << "3. Jenis Kelamin L/P : ";
	cin >> jk;
	cout << endl;
	cout << "4. Warga Negara : ";
	cin >> wn;
	cout << endl;
	cout << "5. Agama : ";
	cin >> agama;
	cout << endl;
	cout << "6. Pekerjaan : ";
	cin >> pekerjaan;
	cout << endl;
	cout << "7. Tempat Tinggal : ";
	cin >> tmp_tinggal;
	cout << endl;
	cout << "8. Bin/Binti : ";
	cin >> bint;
	cout << endl;
	cout << "9. Status Perkawinan :";
	cout << "a. Jika pria terangkan jejaka, duda atau beristri dan berapa istri nya : ";
	cin >> statuskwn;
	cout << endl;
	cout << "\n b. Jika wanita, terangkan perawan atau janda : ";
	cin >> statuskwn2;
	cout << endl;
	cout << "10. Nama isteri/suami terdahulu : ";
	cin >> isum;
	cout << endl;
	//terus disimpan nya gimana pake apa? struct? atau singel linked list?
}	

void formulirn2()
{
	char 
	char kelurahan2[20];
	char kecamatan2[20];
	char kota2[20];

	char alias2[50];
	char TTL[20];
	char wn2[20];
	char agama2[20];
	char pekerjaan2[20];
	char tmp_tinggal2[50];

	char alias3[20];
	char TTL2[20];
	char wn3[20];
	char agama3[20];
	char pekerjaan3[20];
	char tmp_tinggal3[50];

	char alias4[20];
	char TTL3[20];
	char wn4[20];
	char agama4[20];
	char pekerjaan4[20];
	char tmp_tinggal4[50];

	cout << " =============================================================================== " << endl ;
	cout << " |                               Formulir N2                                   | " << endl ;
	cout << " |                        Surat Keterangan Asal Usul                           | " << endl ;
	cout << " =============================================================================== " << endl ;
	/*cout << " Masukan Nama : ";   // buat yang ini gua bingung wkwkw 
	cin >> nama2; 					// buat yang ini gua bingung wkwkw
	cout << endl;*/					// buat yang ini gua bingung wkwkw
	cout << " KANTOR DESA / KELURAHAN : "; 
	cin >> kelurahan2; 
	cout << endl;
	cout << " KECAMATAN : ";
	cin >> kecamatan2;
	cout << endl;
	cout << "KABUPATEN / KOTA : ";
	cin >> kota2;
	cout << endl;
	cout << " Yang bertanda tangan di bawah ini menerangkan dengan sesungguhnya bahwa : " << endl;
	cout << " 1. Nama lengkap dan alias : "; 
	cin >> alias2; 
	cout << endl;
	cout << " 2. Tempat  dan tanggal lahir : ";
	cin >> TTL;
	cout << endl;
	cout << " 3. Warga Negara : ";
	cin >> wn2;
	cout << endl;
	cout << " 4. Agama : ";
	cin >> agama2;
	cout << endl;
	cout << " 5. Pekerjaan : ";
	cin >> pekerjaan2;
	cout << endl;
	cout << " 6. Tempat Tinggal : ";
	cin >> tmp_tinggal2;
	cout << endl;
	cout << endl;
	cout << " Adalah benar anak kandung dari pernikahan seorang pria : "; << endl;
	cout << " 1. Nama lengkap dan alias : ";
	cin >> alias3;
	cout << endl;
	cout << " 2. Tempat dan tanggal lahir : ";
	cin >> TTL2;
	cout << endl;
	cout << " 3. Warga Negara : ";
	cin >> wn3;
	cout << endl;
	cout << " 4. agama : ";
	cin >> agama3;
	cout << endl;
	cout << " 5. Pekerjaan : ";
	cin >> pekerjaan3;
	cout << endl;
	cout << " 6. Tempat Tinggal : ";
	cin >> tmp_tinggal3;
	cout << endl;
	cout << endl;
	cout << " Dengan seorang wanita : "; << endl;
	cout << " 1. Nama lengkap dan alias : ";
	cin >> alias4;
	cout << endl;
	cout << " 2. Tempat dan tanggal lahir : ";
	cin >> TTL3;
	cout << endl;
	cout << " 3. Warga Negara : ";
	cin >> wn4;
	cout << endl;
	cout << " 4. agama : ";
	cin >> agama5;
	cout << endl;
	cout << " 5. Pekerjaan : ";
	cin >> pekerjaan4;
	cout << endl;
	cout << " 6. Tempat Tinggal : ";
	cin >> tmp_tinggal4;
	cout << endl;
}		

void formulirn4()
{
	char

	char alias5[50];
	char TTL4[20];
	char wn5[20];
	char agama5[20];
	char pekerjaan5[20];
	char tmp_tinggal5[50];

	char alias6[20];
	char TTL5[20];
	char wn6[20];
	char agama6[20];
	char pekerjaan6[20];
	char tmp_tinggal6[50];

	char alias7[20];
	char TTL6[20];
	char wn7[20];
	char agama7[20];
	char pekerjaan7[20];
	char tmp_tinggal7[50];

	cout << " =============================================================================== " << endl ;
	cout << " |                               Formulir N4                                   | " << endl ;
	cout << " |                     Surat Keterangan Tentang Orang Tua                      | " << endl ;
	cout << " =============================================================================== " << endl ;
	/*cout << " Masukan Nama : ";   // buat yang ini gua bingung wkwkw 
	cin >> nama2; 					// buat yang ini gua bingung wkwkw
	cout << endl;*/					// buat yang ini gua bingung wkwkw
	cout << " Yang bertanda tangan di bawah ini : " << endl;
	cout << " I.   1. Nama lengkap dan alias : "; 
	cin >> alias5; 
	cout << endl;
	cout << "      2. Tempat  dan tanggal lahir : ";
	cin >> TTL4;
	cout << endl;
	cout << "      3. Warga Negara : ";
	cin >> wn5;
	cout << endl;
	cout << "      4. Agama : ";
	cin >> agama5;
	cout << endl;
	cout << "      5. Pekerjaan : ";
	cin >> pekerjaan5;
	cout << endl;
	cout << "      6. Tempat Tinggal : ";
	cin >> tmp_tinggal5;
	cout << endl;
	cout << endl;
	cout << " II.  1. Nama lengkap dan alias : ";
	cin >> alias6;
	cout << endl;
	cout << "      2. Tempat dan tanggal lahir : ";
	cin >> TTL5;
	cout << endl;
	cout << "      3. Warga Negara : ";
	cin >> wn6;
	cout << endl;
	cout << "      4. agama : ";
	cin >> agama6;
	cout << endl;
	cout << "      5. Pekerjaan : ";
	cin >> pekerjaan6;
	cout << endl;
	cout << "      6. Tempat Tinggal : ";
	cin >> tmp_tinggal6;
	cout << endl;
	cout << endl;
	cout << " Adalah benar ayah kandung dan ibu kandung dari seorang : "; << endl;
	cout << "      1. Nama lengkap dan alias : ";
	cin >> alias7;
	cout << endl;
	cout << "      2. Jenis	Kelamin : ";
	cin >> jk2;
	cout << endl;
	cout << "      3. Tempat dan tanggal lahir : ";
	cin >> TTL6;
	cout << endl;
	cout << "      4. Warga Negara : ";
	cin >> wn7;
	cout << endl;
	cout << "      5. agama : ";
	cin >> agama7;
	cout << endl;
	cout << "      6. Pekerjaan : ";
	cin >> pekerjaan7;
	cout << endl;
	cout << "      7. Tempat Tinggal : ";
	cin >> tmp_tinggal7;
	cout << endl;

}

void formulirn6()
{
	char

	char alias8[50];
	char bint2 [50]
	char TTL8[20];
	char wn8[20];
	char agama8[20];
	char pekerjaan8[20];
	char tmp_tinggal8[50];
	char meninggal[20];
	char MenDi[20];


	char alias9[20];
	char TTL8[20];
	char wn9[20];
	char agama9[20];
	char pekerjaan9[20];
	char tmp_tinggal9[50];

	cout << " =============================================================================== " << endl ;
	cout << " |                               Formulir N6                                   | " << endl ;
	cout << " |                   Surat Keterangan Kematian Suami/istri                     | " << endl ;
	cout << " =============================================================================== " << endl ;
	/*cout << " Masukan Nama : ";   // buat yang ini gua bingung wkwkw 
	cin >> nama2; 					// buat yang ini gua bingung wkwkw
	cout << endl;*/					// buat yang ini gua bingung wkwkw
	cout << " Yang bertanda tangan di bawah ini : " << endl;
	cout << " I.   1. Nama lengkap dan alias : "; 
	cin >> alias8; 
	cout << endl;
	cout << "      2. Bin/Binti : ";
	cin >> bint2;
	cout << endl;
	cout << "      3. Tempat  dan tanggal lahir : ";
	cin >> TTL7;
	cout << endl;
	cout << "      4. Warga Negara : ";
	cin >> wn8;
	cout << endl;
	cout << "      5. Agama : ";
	cin >> agama8;
	cout << endl;
	cout << "      6. Pekerjaan Terakhir : ";
	cin >> pekerjaan8;
	cout << endl;
	cout << "      7. Tempat Tinggal Terakhir : ";
	cin >> tmp_tinggal8;
	cout << endl;
	cout << "      Telah Meninggal Dunia Pada Tanggal : ";
	cin >> meninggal;
	cout << endl;
	cout << "      Di : ";
	cin >> MenDi;
	cout << endl;
	cout << endl;
	cout << " II.  1. Nama lengkap dan alias : ";
	cin >> alias9;
	cout << endl;
	cout << "      2. Tempat dan tanggal lahir : ";
	cin >> TTL8;
	cout << endl;
	cout << "      3. Warga Negara : ";
	cin >> wn9;
	cout << endl;
	cout << "      4. agama : ";
	cin >> agama9;
	cout << endl;
	cout << "      5. Pekerjaan : ";
	cin >> pekerjaan9;
	cout << endl;
	cout << "      6. Tempat Tinggal : ";
	cin >> tmp_tinggal9;
	cout << endl;
	cout << "      Adalah Suami/istri dari orang yang telah meninggal tersebut diatas ";
	cout << endl;
	cout << endl;

}
