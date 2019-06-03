#include <iostream>


using namespace std;


int main(void) {

int a;
int sum = 0;
while (cin>>a)
{
    if (a<40)
        a=40;
    sum += a;
}

cout << sum/5;

}
