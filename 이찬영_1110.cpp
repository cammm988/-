#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cycle(int a) {
    int oneth = a%10;
    int tenth = a/10;
    int sum = oneth + tenth;
    int sumOneth = sum%10;
    return oneth*10 + sumOneth;
}

int main() {
    int a;
    int count = 0;
    int origin;
    cin >> a;
    origin = a;
    while (true)
    {
        a = cycle(a);
        count++;
        if (origin == a)
            break;
    }
    cout << count;
}
