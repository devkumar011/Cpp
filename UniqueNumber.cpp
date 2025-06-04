#include<iostream>
using namespace std;


int findUniqueNumber(int arr[],int size){
    int ans=0;
    int n = nums.size();
    //to find the final answer we need to xor all the number in the array
    for(int i=0;i<n;i++){
        ans =ans^nums[i];
    }
    return ans;
}
int main(){
    int arr[]={2,4,1,4,1};
    int size =5;

    int ans = findUniqueNumber(arr,size);
    cout<<"Unique number is "<<ans <<endl;
}