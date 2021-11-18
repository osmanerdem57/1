#include <iostream>
using namespace std;
//2^n<s    (s-2^n)*2+1=hayatta kalan kişi sırası
int main()
{
	setlocale(LC_ALL, "turkish");

	int s, x = 1, kalan;
	tekrar:
	cout << "Gladyatör sayısını giri: ";
	cin >> s;

	for (;;)
	{
		if (x < s)
		{
			x = x * 2;
		}
		else if (x == s)
		{
			cout << "Hayatta kalan kşinin sırası: 1";
			break;
		}
		else if (x == s)
		{
			cout << "Hayatta kalan kşinin sırası: 1" << endl;
			break;
		}
		else
		{
			break;
		}
	}
	if (x > s)
	{
		x = x / 2;
		kalan = ((s - x) * 2) + 1;
		cout << kalan;

	}
	cout<<endl <<"x: "<< x <<"s: "<< s << endl;
	goto tekrar;
	

}