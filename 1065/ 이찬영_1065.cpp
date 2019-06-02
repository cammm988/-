#include <iostream>

using namespace std;

bool isEqualDiff(int a) {
     if (a<100)
        return true;
    else if (a==1000) return false;
    while (a>0) {
        int cmp1 = a%10;
        a = a/10;
        int cmp2 = a%10;
        a = a/10;
        int cmp3 = a%10;
        if ((cmp1-cmp2 == cmp2-cmp3)||(cmp3-cmp2==cmp2-cmp1))
            return true;
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    int count = 0;
    for (int i = 1; i<=N; i++)
        if (isEqualDiff(i))
            count++;
    cout <<count;
}
