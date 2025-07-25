# include<iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int** a = new int*[n]; // Declare a 2D array with n rows
    
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }
    
    cout << "Sum: " << sum << endl;

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}