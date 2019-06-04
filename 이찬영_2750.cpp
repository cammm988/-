#include <bits/stdc++.h>
using namespace std;


int main(void) {
int N;
cin >> N;
int* a = new int[N];
for (int i = 0; i<N; i++)
    cin>> a[i];
sort(a,a+N);
for (int i = 0; i<N; i++)
    cout << a[i] << endl;

}


