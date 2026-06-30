class Solution {
public:
    int maxArea(vector<int>& height) {
    int area = INT_MIN;
    int n = height.size()-1;
    int m = 0;

    while(m<n)
    {   
        area = max(area,min(height[m],height[n])*(n-m));

        if (height[m]<height[n])
        {
            m++;
        }
        else
        {
            n--;
        }
    }
    return area;
    }
    
};