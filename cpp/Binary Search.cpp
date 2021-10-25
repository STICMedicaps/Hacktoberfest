#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int target){
  int low=0;
  int high=n-1;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(target==arr[mid]){
      return mid;
      }
    else if(target>mid){
      low=mid+1;
      }
    else{
      high=mid-1;
      }
    }
  return -1;
  }
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    }
  int target;
  cin>>target;
  int ans=binarySearch(arr,n,target);
  cout<<ans<<endl;
  return 0;
  }
