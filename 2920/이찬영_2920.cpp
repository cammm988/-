#include <iostream>

using namespace std;


int main(void) {
    int a[8];
    int asc = 0;
    int dsc = 0;
    for (int i = 0; i<8; i++) {
        cin >> a[i];
    }
    for (int i = 0; i<8; i++) {
        if (a[i]==i+1)
            asc++;a
        else if (a[i] == 8-i)
            dsc++;
    }
    if (asc == 8)
        cout <<"ascending";
    else if (dsc == 8)
        cout <<"descending";
    else
        cout << "mixed";

    return 0;






}
