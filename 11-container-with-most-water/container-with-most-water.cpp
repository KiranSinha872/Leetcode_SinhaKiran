// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxwater=0;
//         int lp=0;
//         int rp=height.size()-1;
//         while(lp<rp){
//             int width=rp-lp;
//             int ht=min(height[lp],height[rp]);
//             int currWater=ht * width;

//             maxwater=max(maxwater,currWater);
//             if(height[lp]<height[rp]){
//                 lp++;
//             }else{
//                 rp--;
//             }
//         }

//      return  maxwater; 
//     }
// };

class Solution {
public:
    int maxArea(vector<int>& height) {

        int n=height.size();
        int max_water=0;

        int l=0;
        int r=n-1;
        while(l<r){
            int w=r-l;
            int h=min(height[l],height[r]);

            int curr_water=w*h;
            max_water=max(curr_water,max_water);

            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return max_water;
        
        
    }
};