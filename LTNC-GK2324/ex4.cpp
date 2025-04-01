//Chi ap dung cho day so da sap xep

#include <iostream>
using namespace std;
int findNumber(int a[], int k, int left, int right){
    if (left>right){
        return -1;
    }
    int mid = (right+left)/2;
    if (a[mid]==k){
        return mid;
    }
    else if (a[mid]<k){
        return findNumber(a,k,mid+1,right);
    }
    else return findNumber(a,k,left,mid-1);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    int index = findNumber(a,k,0,n-1);
    if (index!=-1){
        cout << "So " << k << " nam o vi tri thu " << index+1; 
    }
    else cout << "Khong co trong day";
}




