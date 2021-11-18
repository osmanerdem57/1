#include <iostream>
#include <time.h>
#include <locale.h>
#include <random>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");

	int	r,i,rnd, t, k, i1, cevap, oyna, ysayac = 0, dsayac = 0, adet;
	srand(time(NULL));
	cout << "Kaç tane çözmek istersiniz: ";
	cin >> adet;
	time_t baslangic_zamani = time(NULL);
	for ( r=1 ; r <= adet; r++)
	{
		rnd = rand() % 10 + 1;
		k = rand() % 4 + 2;
		i1 = rand() % 2 + 1;
		t = rand() % 10 + 1;
													/*
													cout << k << "x" << endl;
													cout << i1 << " ( 1 --> +"<< t <<" ) ( 2 --> -"<<t<<" )"<< endl;
													*/
		cout << "1. adım " << rnd << endl;
		for ( i=2 ; i < 4; i++)
		{
			if (i1 == 1)
			{
				rnd = rnd * k + t;
				cout << i << ". adım " << rnd << endl;
			}
			else 
			{
				rnd = rnd * k - t;
				cout << i << ". adım " << rnd << endl;
			}
		}
		if (i1 == 1)
		{

			rnd = rnd * k + t;

		}
		else
		{
			rnd = rnd * k - t;
		}
		cout << "4. adım ?";
		cevapla:
		cout << endl << "soru işareti yerine ne gelmelidir: ";
		cin >> cevap;
		if (cevap == rnd)
		{
			cout << "Tebrikler bildiniz." << endl;
			dsayac++;
			cout << "*******************************************************************" << endl;
		}
		else
		{
			cout << "Yanlış cevap.";
			ysayac++;
			goto cevapla;
		}
	}
	time_t bitis_zamani = time(NULL);
	double saniye = (double)(bitis_zamani - baslangic_zamani);
	cout << "10 soruda doğru yanlış sayınız " << endl << "Doğru cevap sayısı: " << dsayac << endl << "Yanlış cevap sayısı: " << ysayac;
	cout << endl << "Cevap Süreniz : " << saniye << " Saniyedir."<<endl<<endl;
	cout << "Oynadığınız için teşekkürler umarım eğlenmişsinizdir." <<endl<< endl;
	system("pause");

	//oynarken geçen süeyi yazdırmada Ahmet Bohur dan yardım aldım

	//Dijital Oyun Tasarımı 1B Osman Erdem 1902020031
}
