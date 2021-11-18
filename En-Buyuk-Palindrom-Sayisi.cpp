// En-Buyuk-Palindrom-Sayisi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//100*100=10 000    900*900=810 000				1234,56

#include <iostream>
using namespace std;
int main()
{
	int dizi[6],i, k,s,en=1 ;
	for (i = 100;i < 1000;i++)
	{
		for (k = 100;k < 1000;k++)
		{
			s = k * i;
			dizi[0] = s % 10;			//birler
			dizi[1] = (s / 10) % 10;
			dizi[2] = (s / 100) % 10;
			dizi[3] = (s / 1000) % 10;
			dizi[4] = (s / 10000) % 10;
			dizi[5] = (s / 100000) % 10;
			if (en < s)
				en=s;
			if (dizi[0] == dizi[5] && dizi[1] == dizi[4] && dizi[2] == dizi[3])
			{
				// cout << s << endl;
				if (en < s)
					en = s;
			}
		}
	
	}
	cout <<"********"<< en<<"***********";
}

