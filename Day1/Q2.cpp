#include <iostream>
using namespace std;

int main() {
    int sum=0;
    for (int i=1; i <=5 ; i++) {
        cout << "Enter grade " << i << ": ";
        int a;
        cin >> a;
        sum += a;
    }
    cout << "The sample output is: " << sum/5.0 << endl;

    return 0;
}
