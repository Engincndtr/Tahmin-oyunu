#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Oyunun temel i�levlerini i�eren bir s�n�f tan�mlayal�m
class Oyun {
private:
    int rastgeleSayi;
    int tahmin;
    bool devam;

public:
    Oyun() {
        // Rastgele say� �retimi i�in tohum atayal�m
        srand(time(0));
        rastgeleSayi = rand() % 100 + 1; // 1 ile 100 aras�nda rastgele bir say� se�elim
        devam = true;
    }

    void oyna() {
        cout << "1 ile 100 aras�nda bir say� tuttum. Tahmin et!" << endl;

        while (devam) {
            cout << "Tahmininizi girin: ";
            cin >> tahmin;

            if (tahmin == rastgeleSayi) {
                cout << "Tebrikler! Do�ru tahmin ettiniz." << endl;
                devam = false;
            } else if (tahmin < rastgeleSayi) {
                cout << "Daha y�ksek bir say� girin." << endl;
            } else {
                cout << "Daha d���k bir say� girin." << endl;
            }
        }
    }
};

int main() {
    Oyun oyun;
    oyun.oyna();

    return 0;
}
