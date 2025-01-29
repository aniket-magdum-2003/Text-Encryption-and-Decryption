#include <iostream>
using namespace std;

class ciphertext {
public:
    int a; // a is key

    void encrypt(char n[40]) {
        cout << "Enter the pass key = ";
        cin >> a;

        for (int i = 0; (i < 40 && n[i] != '\0'); i++) {
            if (isalpha(n[i])) { // Check if character is a letter
                if (islower(n[i])) {
                    n[i] = ((n[i] - 'a' + a) % 26) + 'a';
                } else if (isupper(n[i])) {
                    n[i] = ((n[i] - 'A' + a) % 26) + 'A';
                }
            }
        }
        cout << "Your data encrypted = " << n;
    }

    // Decrypt logic
    void decrypt(char n[40]) {
        int a;
        cout << "Enter the pass key = ";
        cin >> a;

        for (int i = 0; (i < 40 && n[i] != '\0'); i++) {
            if (isalpha(n[i])) { // Check if character is a letter
                if (islower(n[i])) {
                    n[i] = ((n[i] - 'a' - a + 26) % 26) + 'a';
                } else if (isupper(n[i])) {
                    n[i] = ((n[i] - 'A' - a + 26) % 26) + 'A';
                }
            }
        }
        cout << "Your plain text data = " << n;
    }
};

int main() {
    int x;
    ciphertext p;
    int i;
    char z[40];
    bool run = true;

    while (run) {
        cout << "Enter your input = ";
        cin >> z;
        cout << "Press 1 for encrypt = " << endl;
        cout << "Press 2 for decrypt = " << endl;
        cin >> i;

        switch (i) {
            case 1:
                p.encrypt(z);
                break;
            case 2:
                p.decrypt(z);
                break;
            default:
                cout << "Input invalid";
        }

        cout << "\n l 1-Repeat l 0-Exit l" << endl;
        cin >> run;
    }
}
