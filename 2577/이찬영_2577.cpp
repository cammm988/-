#include <iostream>
using namespace std;

int main(void) {
int a,b,c;
int numList[10] {0};
int num;
cin >> a >> b >> c;
int total = a*b*c;
while (total>0) {
    num = total%10;
    numList[num]++;
    total = total/10;
}

for (auto a : numList)
    cout << a << endl;

}
