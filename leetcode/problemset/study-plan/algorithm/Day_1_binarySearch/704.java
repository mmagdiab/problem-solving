class Solution {
    public int search(int[] nums, int target) {
        int length = nums.length;
        int max = length - 1;
        int min = 0;
        while(min <= max) {

            int mid = ((max-min)/2)+min;
            System.out.println("Min: " + min);
            System.out.println("Mid: " + mid);
            System.out.println("Max: " + max);
            if (target > nums[mid]) {
                min = mid + 1;
            } else if (target < nums[mid]) {
                max = mid - 1;
            } else {
                return mid;
            } 
        } 
               
    return -1;
   
    }
}