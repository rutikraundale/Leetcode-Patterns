// Kadane's Algorithm - O(n) Time and O(1) Space
// The idea of Kadane's algorithm is to traverse over the array from left to right and for each element, find the maximum sum among all subarrays ending at that element. The result will be the maximum of all these values. 
//This means that maxEnding at index i = max(maxEnding at index (i - 1) + arr[i], arr[i]) and the maximum value of maxEnding at any index will be our answer.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,3,-1,5,7,-3,9};
    int maxendingSum=arr[0];
    int FinalResult=arr[0];
    for(int i=1;i<arr.size();i++){

        maxendingSum=max(arr[i],maxendingSum+arr[i]); // Either extend the previous subarray or start new from current element

        FinalResult=max(FinalResult,maxendingSum);// this will store a final max sum 
    }
    cout<<"Maximum sum subarray:"<<FinalResult<<endl;//output:21 whole array is also a subarray addition of 1+3-1+5+7-3+9
return 0;
}