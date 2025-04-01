#include <iostream>
using namespace std;
void findSum (int a[], int n, int k){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (a[i]+a[j]==k){
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }
}

int main(){
    int n, k;
    cin >> n;
    int *a = new int[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> k;
    findSum(a,n,k);
    delete[] a;
    return 0;
}

