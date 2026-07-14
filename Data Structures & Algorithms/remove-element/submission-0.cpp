class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Pointer/counter for valid elements
        
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is NOT the one we want to remove
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move it to the 'k' position
                k++;               // Move the 'k' pointer forward
            }
        }
        
        // Return the total count of valid elements
        return k; 
    }
};