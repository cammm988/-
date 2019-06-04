#include <iostream>
#include <string>
using namespace std;


int main(void) {
int N;
string str;
cin >> N;
while(N--)
{
    int count;
    string result;
    cin >> count;
    cin >> str;
    for (int i = 0; i<str.length(); i++)
        for (int j = 0; j<count; j++)
            result += str[i];
    cout << result << endl;
}
}
