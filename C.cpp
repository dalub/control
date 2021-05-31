#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;


int main() {
    string infa = "ANIF";
    int n,m,k;
    int res = 0;
    int counter = 0;
    cin>>n>>m>>k;
    char* word = (char*)malloc(n*sizeof(char));
    for (int i=0;i<n;i++) {
        word[i] = "A";
    }
    // string res = "";
    for(int i = n;i>0;i--) {
        for(int j = infa.size(); j>=1; j--) {
            word[i] = infa[j];
            for (int r=0; r<n; r++) {
                if (word[r] == "I" || word[r] == "A") {
                    counter++;
                }
            }
            if (counter > m-1) {
                res++;
            }
        }
    }
    cout<<res;
    return 0;
}