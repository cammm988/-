#include <iostream>
#include <string>
using namespace std;


int main(void) {
string num[8] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
string name;
cin >> name;
int sum = 0;
for (int i = 0; i<name.length(); ++i) {
    for (int j = 0; j < 8; j++) {
        for (int k = 0; k<num[j].length(); k++) {
            if (name[i] == num[j][k]) {
                sum += (j+3);

            }

        }
    }
}
cout << sum;
}
