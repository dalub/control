#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int get_first_two_number(int num) {
    while (num>100) {
        num = num/10;
    }
    return num;
}


int main() {
    int a, b, res;
    cin>>a>>b;
    int max_numb=0;
    int count = 0;
    while (a<b) {
        if (a<100) {
            res=0;
        }
        else {
            
            res = get_first_two_number(a) - a%100;
        }
        if (res!=0){
            if (a%res == 0) {
                count = count+1;
                max_numb = a;
            }
        }
        a++;
    }
    cout<<count<<" "<<max_numb;
    return 0;
}