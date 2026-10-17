class Solution {
  public:
    int floorSqrt(int n) {
        // code here
     int left=1;
      int high=n;
      int ans=0;
        while(left<=high){
            int  mid=(left+high)/2;
            int square =n/mid;
            if(mid <= square){
                ans=mid;
                left=mid+1;
            }
            else
            high=mid-1;
        }
        return ans;
    }
};