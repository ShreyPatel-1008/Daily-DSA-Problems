//again 
//167. Two Sum II - Input Array Is Sorted
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int st = 0;
        int end = numbers.size()-1;
        
        while(st < end){
            int sum = numbers[st] + numbers[end] ;
            if(sum == target){
                return {st + 1, end + 1}; 
            }else if(sum < target) {
                st++;
            }else{
                end--;
            }
        }
        return{};
    }
};
