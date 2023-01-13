/* onceden bir sifre belirliyoruz.Kullaniciya 3 hak vererek sifre girmesini istiyoruz.
* dogru girerse "hosgeldiniz." yanlis girerse tekrar sifre istiyoruz. her yanlis girmesinde
* hak 1 azaliyor. 
*/
#include <iostream>
using namespace std;
int main()
{
    int hak=3,sifre = 1234; // hak ve sifreyi belirledik.
    int x; // kullanicinin girecegi degerin atanacigi degisken
   
   
    cout << "sifreyi giriniz : " << endl;
    cin >> x; // kullanicin girmis oldugu degeri atadık

    if (x==sifre) { // kullanicinin girmis oldugu deger 1234 eşitse direk hosgeldiz yazacak
        cout << "hosgeldiniz." << endl;

    }
    else {
        cout << "Hatali giris." << endl; // 1234 e eşit değilse hatali giris yazacak
        hak--; //Hak bir azalip Hak=2 kalacak.

        cout << "sifreyi giriniz(Kalan Hak 2) :" << endl; // tekrardan giris yapmasini isteyeceğiz.
        cin >> x;
        // geri kalan adımlar tekrardır.
        if (x == sifre) {
            cout << "hosgeldiniz." << endl;

        }
        else {
            cout << "Hatali giris." << endl;
            hak--; // 1 hak kaldi.
            cout << "sifreyi giriniz (Kalan Hak 1) :" << endl;
            cin >> x;

            if (x == sifre) {
                cout << "hosgeldiniz." << endl;

            }
            else {
                cout << "Hatali giris. Hakkiniz kalmamistir." << endl;
            }

        }


    }
    system("pause");
    return 0;
}

