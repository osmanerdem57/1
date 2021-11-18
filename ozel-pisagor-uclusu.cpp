// ozel-pisagor-uclusu.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c,islem=0;
	for (c=5; ;c++)
	{
		for (b = 4;b < c;b++)
		{
			for (a = 3;a < b;a++)
			{
				if (pow(a, 2) + pow(b, 2) == pow(c, 2)&& a+b+c==1000)
				{
					cout << a << " " << b << " " << c;
						islem = a * b * c;
						cout << endl << islem;
						break;
				}
				if (islem > 1)
					break;
			}
			if (islem > 1)
				break;
		}
		if (islem > 1)
			break;
	}
	
}

