// Asal-sayilarin-toplami.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
int main()
{
	unsigned int i, k, toplam=2;
	for (i = 3;i < 20000;i++)
	{
		for (k = 2;k < i;k++)
		{
			if (i % k == 0)
				break;
			if (k == i - 1)
				toplam += i;
		}
	}
	cout << toplam;
}
