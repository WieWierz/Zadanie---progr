#include <iostream>
#include <fstream>

using namespace std;

class pliki
{
	string napis;

		ifstream plik;
		ofstream plik1;

public:

	pliki();
	~pliki();

void wczytaj()
{
while(!plik.eof())
	{
		plik>>napis;
	}
		cout<<napis<<endl;
	}

void zmien()
	{
		for(int i=0;i<napis.length();i++)
			{
				napis = napis.substr(1,2);
			}		
	}
void wypisz()
	{
		int i=0;
		napis[i] -= 32;
		plik1<<napis<<endl;
		cout<<napis<<endl;
	}
};	

pliki::pliki()
	{
		plik.open("liczby1.txt");
		plik1.open("liczby2.txt");
	}

pliki::~pliki()
	{	
		plik.close();
		plik1.close();
	}


int main(int argc, char** argv) {

pliki p;
p.wczytaj();
p.zmien();
p.wypisz();
cout<<"ok";
return 0;
}
