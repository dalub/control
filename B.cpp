#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string alfa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string inp;
    bool first_go = true;
    int a,b, len;
    char sym;
    ifstream fin("input.txt");
    fin >>inp;
    fin.close();
    cout << inp << endl;
    for (int i =0; i<alfa.size(); i++) {
        if (first_go) {
            a = inp.find(alfa[i]);
            b = inp.rfind(alfa[i]);
            sym = alfa[i];
            len = b-a-1;
            first_go = false;
        }
        else if (inp.rfind(alfa[i]) - inp.find(alfa[i])){
            len = inp.rfind(alfa[i]) - inp.find(alfa[i])-1;
            sym = alfa[i];
        }
    }
    cout<<sym<<" "<<len;
    return 0;
}