#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Oyunun temel iþlevlerini içeren bir sýnýf tanýmlayalým
class Oyun {
private:
    int rastgeleSayi;
    int tahmin;
    bool devam;

public:
    Oyun() {
        // Rastgele sayý üretimi için tohum atayalým
        srand(time(0));
        rastgeleSayi = rand() % 100 + 1; // 1 ile 100 arasýnda rastgele bir sayý seçelim
        devam = true;
    }

    void oyna() {
        cout << "1 ile 100 arasýnda bir sayý tuttum. Tahmin et!" << endl;

        while (devam) {
            cout << "Tahmininizi girin: ";
            cin >> tahmin;

            if (tahmin == rastgeleSayi) {
                cout << "Tebrikler! Doðru tahmin ettiniz." << endl;
                devam = false;
            } else if (tahmin < rastgeleSayi) {
                cout << "Daha yüksek bir sayý girin." << endl;
            } else {
                cout << "Daha düþük bir sayý girin." << endl;
            }
        }
    }
};

int main() {
    Oyun oyun;
    oyun.oyna();

    return 0;
}
