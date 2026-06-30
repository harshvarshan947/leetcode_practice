class Solution {
public:
    int search(vector<int>& num, int target) {
    int n = num.size();
    int st = 0;
    int end = n-1;

    while (st<=end)
    {
        int mid = (st+end)/2;
        if (num[mid]>target)
        {
            end = mid-1;
        }
        else if (num[mid]<target)
        {
            st = mid+1;
        }
        else if(num[mid] == target){
            return mid;
        }
    }
        return -1;
    }
};