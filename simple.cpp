#include <iostream>
using namespace std;

int main() {
    double n,i,a;
    double sum=0,avg;

    cout << "enter no of elements: ";
    cin >> n;
    cout << n;

    cout << "\nenter " << n << " numbers: ";
    for(i=0;i<n;i++)
        {
            cin >> a;
            cout << "\n" << a;
            sum = sum+a;
        }

    avg = sum/n;
    cout << "\navg of " << n << " numbers:" << avg;
    
    return 0;
}
