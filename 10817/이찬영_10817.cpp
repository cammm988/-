#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main() {
int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a,a+3, cmp);
    cout << a[1];

}
