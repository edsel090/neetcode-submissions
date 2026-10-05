class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.empty()){
            return {};
        }

        int left = 0;
        int right = numbers.size()-1;

        while(left<right){
            int sum = numbers[left] + numbers[right];
            if(sum == target){
                left++;
                right++;
                return {left,right};
            }
            if(sum<target){
                left++;
            }else{
                right--;
            }
        }

        return {};
    }
};
