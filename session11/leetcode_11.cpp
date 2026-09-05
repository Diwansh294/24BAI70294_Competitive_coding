class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area =0;
        int water=0;
        int i=0;
        int j = height.size()-1;
       while(i<j){
           water = min(height[i],height[j])*(j-i);
          max_area=max(max_area,water);
            if(height[i] > height[j]){
                j--;
            }
            else if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
                i++; 
            }

           
        }
        return max_area;
    }
};
