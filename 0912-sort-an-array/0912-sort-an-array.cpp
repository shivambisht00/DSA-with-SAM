class Solution {
public:
void merge (vector<int>& nums , int st , int en){
    int mid = st +(en-st)/2;
      // create two lengths 
    int  len1 = mid - st + 1;
    int len2 = en - mid;
    // create two arrays 
    vector<int>left(len1);
      vector<int>right(len2);
    int main = st;
    for(int i = 0 ; i <len1 ;i++){
        left[i]=nums[main++];
    }
    main = mid+1;
     for(int i = 0 ; i <len2 ;i++){
      right[i]= nums[main++];
    }
    main = st;
    int index1 = 0 , index2 = 0;
    while(index1<len1 && index2<len2){
        if(left[index1] <= right[index2]){
            nums[main++] = left[index1++];
        } else {
            nums[main++] = right[index2++];
        }
    }
    while(index1<len1){
        nums[main++] = left[index1++];
    }
    while(index2<len2){
        nums[main++] = right[index2++];
    }
}

void mergesort(vector<int>& nums , int st , int en){
    int mid = st +(en-st)/2;
    if(st>=en){
        return ;
    }
    // left part 
    mergesort(nums,st,mid);
    // right part 
    mergesort(nums,mid+1,en);
    // both 
    merge(nums , st , en);
}

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0 , nums.size()-1);
        return nums;
    
    }
};