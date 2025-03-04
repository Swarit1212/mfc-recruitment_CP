#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
}
void selection_sort(vector<int>arr)
{
    int n=arr.size();
    int j;
    for(int i=0;i<n;i++)
    {
        int mini=i;
        int minel=INT_MAX;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<minel)
            {
                minel=arr[j];
                mini=j;
            }

        }
        swap(arr[mini],arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }

}
void insertion_sort(vector<int> arr)
{
    int n=arr.size();
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
}
void merge_sort_merge(vector<int>&arr ,int low,int mid,int high)
{
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high)
    {
        if(arr[left]>arr[right])
        {
            temp.push_back(arr[right]);
            right++;
        }
        else 
        {
            temp.push_back(arr[left]);
            left++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }

}
void merge_sort_divide(vector<int>&arr,int low,int high)
{
    if(low==high) return ;
    int mid=(low+high)/2;
    merge_sort_divide(arr,low,mid);
    merge_sort_divide(arr,mid+1,high);
    merge_sort_merge(arr,low,mid,high);


}
merge_sort(vector<int>arr)
{
    int n=arr.size();
    merge_sort_divide(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr={9,8,7,3,4,2,1};
    //bubble_sort(arr);
    //selection_sort(arr);
    //insertion_sort(arr);
    merge_sort(arr);
    
   


    return 0;
}