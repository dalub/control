#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
    int size_x, size_y, x,y,color;
    cin >> size_x >> size_y;
    cin >> x >> y;
    cin >> color;
    int** arr = (int**)malloc(size_x*size_y*sizeof(int));


    for (int i = 0; i>size_y; i++) {
        arr[i] = (int*)malloc(size_x*sizeof(int));
    }
    for (int i = 0; i<size_y; i++) {
        for (int j = 0; j<size_x; j++) {
            cin >> arr[i][j];
        }
    }
    // cout<<"here";
    // if (arr[x][y] == color) {
    //     for (int i = 0; i>size_y; i++) {
    //         for (int j = 0; j>size_x; j++) {
    //             cout << arr[i][j];
    //     }
    // }
    // }
    return 0;
}