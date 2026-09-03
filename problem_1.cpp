#include<bits/stdc++.h>
using namespace std;
int merge_(vector<int>&arr,int left,int mid,int right)
{
    int i=left;
    int j= mid+1;
    vector<int> temp;
    int inv =0;
    while(i<=mid&&j<=right)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            inv+=(mid-i+1);
            j++;
        }
    }
    while(i<= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<= right){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++){
        arr[left + k]=temp[k];
    }
    return inv;
}
int mergeSort(vector<int>&arr,int left,int right)
{
    if(left >= right) return 0;
    int mid =left+(right - left)/2;
    int left_part =mergeSort(arr,left,mid);
    int right_part=mergeSort(arr,mid+1,right);
    int cross=merge_(arr,left,mid,right);
    return left_part+right_part+cross;
}
int inversionCount(vector<int>&arr)
{
    return mergeSort(arr,0,arr.size()-1);

}
int main()
{
    vector<int> arr = {4,3,2,1};
    cout<<"Inversion Count: "
    <<inversionCount(arr)
    <<endl;
    return 0;
}
