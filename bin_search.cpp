#include<bits/stdc++.h>
using namespace std;
int bin(int a[],int n,int k){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<e){
        if(a[mid]==k){
            ans = mid;
        }
        if(k > a[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int even[6]={2,4,6,8,12,14};
    int odd[5]={3,8,11,14,16};

    int index = bin(odd,5,14);
    cout << index;

}

// first index of element of occurence : e = mid-1
// last index of element of occurence : s = mid + 1
// no. of occurences in an array : e - s + 1

