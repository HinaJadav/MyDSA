#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = 0, second = 0, third = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second) {
            third = arr[i];
        }
    }
    cout << first << " " << second << " " << third << endl;
    return 0;
}
