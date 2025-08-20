// CODE MADE WİTH TURKİSH, LAUNGAGE SUPPORT İN PROGRAM. DO NOT CARE TURKİSH VARİABLES.
// TALL SPACES FOR READABLE

#include <iostream>
using namespace std;

int main() {
    int kenar1;
    int kenar2;
    int yukseklik;
    int taban;
    int secim;
    int birim;
    int dil;

    cout << "TÜRKÇE İÇİN 1," << endl;
    cout << "2 FOR ENGLİSH" << endl;
    cout << "3 для русского" << endl;
    cin >> dil;

    if (dil == 1) {
        cout << endl << "Dil Türkçe Olarak Ayarlanmıştır" << endl;
        cout << "Kare için 1," << endl;
        cout << "Dikdörtgen için 2," << endl;
        cout << "Üçgen için 3." << endl;
        cin >> secim;

        if (secim == 1) {
            cout << "Şekil = Kare." << endl;
            cout << "Cm için 1," << endl;
            cout << "Metre için 2. " << endl;
            cin >> birim;

            if (birim == 1) {
                cout << endl << "Kenar Uzunluğu: ";
                cin >> kenar1;
                cout << endl << "Alan: " << kenar1 * kenar1 << "cm2";
            }

            if (birim == 2) {
                cout << endl << "Kenar Uzunluğu: ";
                cin >> kenar1;
                cout << endl << "Alan: " << kenar1 * kenar1 << "m2";
            }
        } //kare için















          
        if (secim == 2) {
            cout << "Şekil = Dikdörtgen." << endl;
            cout << "Cm için 1," << endl;
            cout << "Metre için 2. " << endl;
            cin >> birim;
        
            if (birim == 1) {
                cout << endl << "Kısa Kenar Uzunluğu: ";
                cin >> kenar1;
                cout << endl << "Uzun Kenar Uzunluğu: ";
                cin >> kenar2;
                cout << endl << "Alan: " << kenar1 * kenar2 << "cm2";
            }

            if (birim == 2) {
                cout << endl << "Kısa Kenar Uzunluğu: ";
                cin >> kenar1;
                cout << endl << "Uzun Kenar Uzunluğu: ";
                cin >> kenar2;
                cout << endl << "Alan: " << kenar1 * kenar2 << "m2";
            } //dikdörtgen için
        }














        if (secim == 3) {
            cout << "Şekil = Üçgen." << endl;
            cout << "Cm için 1," << endl;
            cout << "Metre için 2. " << endl;
            cin >> birim;

            if (birim == 1) {
                cout << endl << "Yükseklik Uzunluğu: ";
                cin >> yukseklik;
                cout << endl << "Taban Uzunluğu: ";
                cin >> taban;
                cout << endl << "Alan: " << (taban * yukseklik) / 2 << "cm2";
            }

            if (birim == 2) {
                cout << endl << "Yükseklik Uzunluğu: ";
                cin >> yukseklik;
                cout << endl << "Taban Uzunluğu: ";
                cin >> taban;
                cout << endl << "Alan: " << (taban * yukseklik) / 2 << "m2";
            } //üçgen için
        }


    }
    // TÜRKÇE













    if (dil == 2) {
        cout << endl << "The language is set to English." << endl;
        cout << "1 for Square," << endl;
        cout << "2 for Rectangle," << endl;
        cout << "3 for Triangle." << endl;
        cin >> secim;

        if (secim == 1) {
            cout << "Shape = Square." << endl;
            cout << "1 for Cm," << endl;
            cout << "2 for Meter." << endl;
            cin >> birim;

            if (birim == 1) {
                cout << endl << "Side Lenght: ";
                cin >> kenar1;
                cout << endl << "Area: " << kenar1 * kenar1 << "cm2";
            }

            if (birim == 2) {
                cout << endl << "Side Lenght: ";
                cin >> kenar1;
                cout << endl << "Area: " << kenar1 * kenar1 << "m2";
            }
        } //kare için












        if (secim == 2) {
            cout << "Shape = Rectangle." << endl;
            cout << "1 for Cm," << endl;
            cout << "2 for Meter. " << endl;
            cin >> birim;
        
            if (birim == 1) {
                cout << endl << "Short Side Lenght: ";
                cin >> kenar1;
                cout << endl << "Tall Side Lenght: ";
                cin >> kenar2;
                cout << endl << "Area: " << kenar1 * kenar2 << "cm2";
            }

            if (birim == 2) {
                cout << endl << "Short Side Lenght: ";
                cin >> kenar1;
                cout << endl << "Tall Side Lenght: ";
                cin >> kenar2;
                cout << endl << "Area: " << kenar1 * kenar2 << "m2";
            } //dikdörtgen için
        }















        if (secim == 3) {
            cout << "Shape = Triangle." << endl;
            cout << "1 for Cm," << endl;
            cout << "2 for Meter. " << endl;
            cin >> birim;

            if (birim == 1) {
                cout << endl << "Height: ";
                cin >> yukseklik;
                cout << endl << "Base: ";
                cin >> taban;
                cout << endl << "Area: " << (taban * yukseklik) / 2 << "cm2";
            }

            if (birim == 2) {
                cout << endl << "Height: ";
                cin >> yukseklik;
                cout << endl << "Base: ";
                cin >> taban;
                cout << endl << "Area: " << (taban * yukseklik) / 2 << "m2";
            } //üçgen için
        }
    } // ingilizce

















    if (dil == 3) {
        cout << endl << "Язык установлен на английский." << endl;
        cout << "1 — Квадрат," << endl;
        cout << "2 — Прямоугольник," << endl;
        cout << "3 — Треугольник." << endl;
        cin >> secim;

        if (secim == 1) {
            cout << "Фигура = Квадрат." << endl;
            cout << "1 — Сантиметры," << endl;
            cout << "2 — Метры." << endl;
         cin >> birim;

             if (birim == 1) {
             cout << endl << "Длина стороны: ";
             cin >> kenar1;
              cout << endl << "Площадь: " << kenar1 * kenar1 << " см²";
            }


            if (birim == 2) {
             cout << endl << "Длина стороны: ";
             cin >> kenar1;
             cout << endl << "Площадь: " << kenar1 * kenar1 << " м²";
            }
    }













    if (secim == 2) {
        cout << "Фигура = Прямоугольник." << endl;
        cout << "1 — Сантиметры," << endl;
        cout << "2 — Метры." << endl;
        cin >> birim;

        if (birim == 1) {
            cout << endl << "Короткая сторона: ";
            cin >> kenar1;
            cout << endl << "Длинная сторона: ";
            cin >> kenar2;
            cout << endl << "Площадь: " << kenar1 * kenar2 << " см²";
        }

        if (birim == 2) {
            cout << endl << "Короткая сторона: ";
            cin >> kenar1;
            cout << endl << "Длинная сторона: ";
            cin >> kenar2;
            cout << endl << "Площадь: " << kenar1 * kenar2 << " м²";
        }


    
    }











    if (secim == 3) {
        cout << "Фигура = Треугольник." << endl;
        cout << "1 — Сантиметры," << endl;
        cout << "2 — Метры." << endl;
        cin >> birim;

        if (birim == 1) {
            cout << endl << "Высота: ";
            cin >> yukseklik;
            cout << endl << "Основание: ";
            cin >> taban;
            cout << endl << "Площадь: " << (taban * yukseklik) / 2 << " см²";
        }

        if (birim == 2) {
            cout << endl << "Высота: ";
            cin >> yukseklik;
            cout << endl << "Основание: ";
            cin >> taban;
            cout << endl << "Площадь: " << (taban * yukseklik) / 2 << " м²";
        }
    }
}

}