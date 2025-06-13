class Solution {
public:
        
    int sizeOfElements(int num){
        int size = 0;
        while(num > 0){
            num /= 10;
            size++;
        }        
        return size;
    }
    
    bool checkEven(int num){
        return (sizeOfElements(num) % 2 == 0);
    }

    
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(checkEven(nums[i])){
                count++;
            }
        }
        return count;
    }
};
