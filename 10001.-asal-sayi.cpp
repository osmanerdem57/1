// 10001.-asal-sayi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	unsigned int sayac = 2, i, k;
	cout << "1. asal sayı 2"<<endl;
	for (i = 3;i<100;i++)
	{
		for (k = 2;k < i;k++)
		{
			if (i % k == 0)
				break;
			if (k == i - 1)
			{
				cout << sayac << ". asal sayı " << i << endl;
				sayac++;
			}
		}
		if (sayac==10002)
			break;
	}
}

