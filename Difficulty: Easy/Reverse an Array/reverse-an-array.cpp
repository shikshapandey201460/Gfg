#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:

vector<int>reverseArray(vector<int>&arr){
    int s=0;
    int e=arr.size()-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}
};
