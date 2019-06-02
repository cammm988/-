#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
int N;
int num;
cin >> N;
while(N--) {
    int sum = 0;
    double avg;
    int count = 0;
    cin >> num;
    int* scores = new int[num];
    for (unsigned int i= 0; i<num; i++) {
        cin >> scores[i];
        sum += scores[i];
    }
    avg = (double) sum/num;

    for (unsigned int i= 0; i<num; i++) {
        if (scores[i] > avg)
            count++;
    }
    cout.precision(3);
    cout << fixed << (double) count/num*100.00 << "%"<< endl;

    delete scores;
}





}
