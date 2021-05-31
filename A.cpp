#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main() {
    setlocale(LC_ALL, "Russian");
    int counter = 0;
    bool first_go = true;
    string input;
    getline(cin, input);
    string alfa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int len = 0;
    char sym = 'A';
    for (int i = 0; i<input.size(); i++) {
        for (int j = 0; j<alfa.size(); j++) {
            if (input[i] = alfa[j]) {
                counter++;
                if (counter > 1) {
                    if (first_go) {
                        len = counter;
                        sym = input[i-1];
                        first_go = false;
                    }
                    else if (len < counter || alfa.find(sym)>alfa.find(input[i-counter])) {
                        len = counter;
                        sym = input[i-counter];
                    }
                }
            }
            else {
                counter = 0;
            }
        }
    }
    cout<<sym<<"      "<<len<<endl;
    return 0;
}