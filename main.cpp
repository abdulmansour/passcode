#include <iostream>
#include <string.h>
using namespace std;

int main() {
    const int p1 = 1591;
    const string p2 = "molate";
    int entry1;
    string entry2;
    
    cout << "Please enter your digit-code: " << flush;
    cin >> entry1;
    
    if (p1 == entry1) {
        cout << "Access Granted!" << endl;
        int size1;
        size1 = sizeof(entry1);
        int * digit = new int[size1];
        
        for (int i = size1 - 1; i >= 0; i--) {
            digit[i] = entry1 % 10;
            entry1 = entry1 / 10;
        }
        for (int i = 0; i < size1; i++) {
            cout << digit[i] << endl;
        }
        
        delete [] digit;
        
        cout << "Please enter your phrase-code: " << flush;
        cin >> entry2;
        
        if (p2 == entry2) {
            cout << "Access granted!" << endl;
            
            int size2 = 0;
            
            for (int i = 0; i < 1000; i++) {
                if (p2[i] == '\0') {
                    break;
                }
                else {
                    size2++;
                }
            }
            char * phrase = new char[size2];
            
            for (int i = 0; i < size2; i++) {
                phrase[i] = entry2[i];
                cout << phrase[i] << endl;
            }
            
            delete [] phrase;
        }
        else {
            cout << "Access Denied!" << endl;
        }
    }
    else {
        cout << "Access Denied!" << endl;
    }
}
