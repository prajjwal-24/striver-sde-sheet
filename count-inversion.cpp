#include <bits/stdc++.h> 

int merge(long long *arr, int low,int mid, int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    int count=0;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            count+=(mid-left+1);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return count;
}
int mergeSort(long long *arr, int low, int high){
    int count=0;
    if(low>=high)return count;
    int mid= (low+high)/2;
    count +=mergeSort(arr,low,mid);
    count+=mergeSort(arr, mid+1, high);
    count+= merge(arr,low,mid,high);
    return count;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    // 2 5, 2 1, 2 3, 2 4
    // 5 1, 5 3, 5 4
    // 1 3, 1 4
    // 3 4
    return mergeSort(arr,0,n-1);
    
}

_____________________________________________________________________________________________________
  
//   Method 2
//   brute force
  #include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    // 2 5, 2 1, 2 3, 2 4
    // 5 1, 5 3, 5 4
    // 1 3, 1 4
    // 3 4
    int count=0;
    for(int i=0;i<n;i++){
        int curr =arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<curr)
            count++;
        }
    }
    return count;
}
