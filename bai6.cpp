#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            cout << j + 1 << " ";
        }
        for (int k = n - i ; k < n; k++){
            cout << n - k << " ";
        }
        cout << endl;
    }
}
