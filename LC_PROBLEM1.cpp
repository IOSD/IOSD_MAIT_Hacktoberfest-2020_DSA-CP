class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> a;
        for(int i=0;i<nums.size()-1;i++)
        {
            
            for(int j=i+1;j<nums.size();j++)
            {
                  if(nums[j]==target-nums[i])
                    {
                      a.push_back(i);
                      a.push_back(j); 
                      
                      return a;
                    }
                
            }
            
        }
        
      return vector<int>();
    }
};

