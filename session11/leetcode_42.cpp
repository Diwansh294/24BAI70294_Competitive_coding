class Solution {
public:
    int trap(vector<int>& height) {
         int  n =height.size();
       vector<int> suffix(n,0);
       vector<int> prefix(n,0);
       
     
      for(int i=0;i<n;i++){
        if(i==0){
            prefix[i]=height[i];
        }
        else{
            prefix[i]=max(prefix[i-1],height[i]);
        }
      }
      suffix[n-1]=height[n-1];
      for(int j=n-2;j>=0;j--){
suffix[j] = max(suffix[j + 1], height[j]);
      }
      int water = 0;
        for (int i = 0; i < n; i++) {
            water += min(prefix[i], suffix[i]) - height[i];
        }
        
        return water;

    }
};
