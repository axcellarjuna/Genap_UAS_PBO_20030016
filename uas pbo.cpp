#include <iostream>
#include <conio.h>
using namespace std;

class BangunRuang
{
  protected:

       double p,r,l;
  public:
       virtual void masukkan()=0;
       virtual void display()=0;
};


class selimut_tabung : public BangunRuang
{
   public:
    	void masukkan(void)
   		{
   			cout<<"--------------------------------------\n";
       		cout<<"|   Menghitung Luas Selimut Tabung    |\n";
       		cout<<"--------------------------------------\n";
       		cout<<" Masukkan Angka  : \n";
       		cout<<" Panjang = "; 
	  		cin>>p;
       		cout<<" Lebar   = "; 
	   		cin>>l;
   		}
   		
    	void display(void)
    	{
       	double selimut;
        selimut = p * l;
       		cout<<"\n----------------------------------------\n";
       		cout<<"Di ketahui : Panjang = "<<p;
       		cout<<"\n	    Lebar   = "<<l;   
       		cout<<"\n\nDi tanya : Luas Selimut  ";
       		cout<<"\n\nJawab : ";
       		cout<<"\n\nLuas Selimut 	 = panjang x lebar ";
       		cout<<"\n                    = "<< p<< " x "<<l;
      	  	cout<<"\n                    = "<<selimut;
       		cout<<"\n----------------------------------------\n";
    	}
};


class volume_tabung : public BangunRuang
{
   	public:
		void masukkan(void)
    	{
    		cout<<"---------------------------------\n";
       		cout<<"|    Menghitung Volume Tabung    |\n";
       		cout<<"---------------------------------\n";
       		cout<<" Masukkan Angka  : \n";
       		cout<<" Jari Jari = "; 
	   		cin>>r;
       		cout<<" Lebar       = "; 
	   		cin>>l;
    	}
    	
		void display(void)
    	{
       	double volume;
       	volume = 3.14 *r*r * l ;
       		cout<<"\n----------------------------------------\n";
       		cout<<"Di ketahui : Jari - jari = "<<r;
       		cout<<"\n	    Lebar   = "<<l;   
       		cout<<"\n\nDi tanya : Volume Tabung ";
       		cout<<"\n\nJawab : ";
       		cout<<"\n\nVolume Tabung = 3,14 x r x r x lebar ";
       		cout<<"\n              = 3,14 x "<<r<< " x " <<r<< " x " <<l;
       		cout<<"\n              = "<<volume;
       		cout<<"\n----------------------------------------\n";
    	}
};


class semua_tabung : public BangunRuang
{
    public:
    	void masukkan(void)
    	{
    		cout<<"----------------------------\n";
       		cout<<"| Menghitung Bangun Tabung |\n";
       		cout<<"----------------------------\n";
       		cout<<" Masukkan Angka  : \n";
       		cout<<" Panjang     = "; 
	   		cin>>p;
       		cout<<" Lebar       = "; 
	   		cin>>l;
       		cout<<" Jari Jari = "; 
			cin>>r;
    	}
    	
		void display(void)
    	{
        double selimut,volume;
        selimut = p*l;
        volume = 3.14*r*r*l;
       		cout<<"\n----------------------------------------\n";
       		cout<<"Di ketahui : Panjang	= "<<p;
       		cout<<"\n            Jari jari = "<<r;
       		cout<<"\n	    Lebar   	= "<<l;   
       		cout<<"\n\nDi tanya : Luas Selimut dan Volume Tabung  ";
       		cout<<"\n          Volume Tabung ";
       		cout<<"\n\nJawab : ";
       		cout<<"\n\nLuas Selimut  = panjang x lebar ";
       		cout<<"\n                    = "<< p<< " x "<<l;
       		cout<<"\n                    = "<<selimut;
       		cout<<"\n\nVolume Tabung = 3.14 x r x r x lebar ";
       		cout<<"\n              = 3.14 x "<<r<< " x " <<r<< " x " <<l;
       		cout<<"\n              = "<<volume;
       		cout<<"\n----------------------------------------\n";
    	}
};

int main()
{
	system("cls");
	selimut_tabung selimut;
	volume_tabung volume;
	semua_tabung tabung;

BangunRuang *pilih[3];
pilih[0]=&selimut;
pilih[1]=&volume;
pilih[2]=&tabung;

int pilihan;
while(1)
{
system("cls");
  cout<<"----------------------------------------------------";
  cout<<"\n|   SELAMAT DATANG    |\n";
  cout<<"----------------------------------------------------";
  cout<<"\n|  MENGHITUNG TABUNG  |\n";
  cout<<"----------------------------------------------------\n";
  cout<<"| 1. Luas Selimut            |\n\n";
  cout<<"| 2. Volume Tabung		   |\n\n";
  cout<<"| 3. Luas Selimut dan Volume Tabung  |\n";
  cout<<"------------------------------------\n";
  cout<<"Masukkan Pilihan: ";
  cin>>pilihan;
  
  if(pilihan==1){
          pilih[0]->masukkan();
          pilih[0]->display();
          getch();
          }
  else if (pilihan==2){
          pilih[1]->masukkan();
          pilih[1]->display();
          getch();
          }
  else if (pilihan==3){
          pilih[2]->masukkan();
          pilih[2]->display();
          getch();
          }
  else
     exit(1);
}}

