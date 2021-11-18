#include <iostream>
#include <math.h>
/*Kullanıcıdan aldığımız (islem) değişkeniyle yapımızın hangi kod satırını çalıştırması gerektiğini belirlemesini istedik casede tanımlı sabitler islem
değişkeniyle aynı olurlarsa o satır ve sonrası çalışmaya başlar bir caseden diğer case geçmeden önce her birine eklemiş olduğumuz break komutu dikkatinizi
çekmiştir break komutarı eğer olmazsa casedeki işlemler bittikten sonra diğer case değişkenle eşleşmesede o satırlarda çalışmaya başlar break komutuyla switch
yapısını kırıyoruz
*/
using namespace std;
float toplama(float x, float y) 
{
	return x + y;
}
float cikarma(float x, float y)
{
	return x - y;
}
float carpma(float x, float y)
{
	return x * y;
}
float bolme(float x, float y) 
{
	return x / y;
}
float ussu(float x, float y)
{
	return pow(x, y);
}


int main()
{
	setlocale(LC_ALL, "turkish");
	float sayi1, sayi2, sonuc;
	int islemkontrol;
	char islem;

	cout << "İşlemler (+)toplama (-)çıkartma (*)çarpma (/)bölme (^)üssü"<<endl;

islemsifirlama:

	cin >> sayi1 >> islem >> sayi2;

islemdevam:

	switch (islem)
	{
	case '+':
		sonuc = toplama(sayi1, sayi2);
		cout << sonuc<<endl;
		break;
	case '-':
		sonuc = cikarma(sayi1,sayi2);
		cout << sonuc<<endl;
		break;
	case '*':
		sonuc = carpma(sayi1,sayi2);
		cout << sonuc<<endl;
		break;
	case '/':
		sonuc = bolme(sayi1,sayi2);
		cout << sonuc<<endl;
		break;
	case '^':
		sonuc = ussu(sayi1, sayi2);
		cout << sonuc << endl;
		break;
	default:
		cout << "Yapabileceklerimin dışında bir işlem girdiniz";
		break;
	}

kontroltekrari:

	cout << "işlem sonlandırmak için 0, işleme devam etmek için 1, işlemleri sıfırlamak için 2 giriniz"<<endl;
	cin >> islemkontrol;


	switch (islemkontrol)
	{
	case 0:
		break;
	case 1:
		sayi1 = sonuc;
		cout << sayi1<<" ";
		cin >> islem >> sayi2;
		goto islemdevam;
	case 2:
		goto islemsifirlama;
	default:
		cout << "Üzgünüm geçersiz veri girdiniz!!!"<<endl;
		goto kontroltekrari;
	}

}
