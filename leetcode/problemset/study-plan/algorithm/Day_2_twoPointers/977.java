class Solution {
    public int[] sortedSquares(int[] nums) {
        int l = 0;
        int r = nums.length - 1;
        int[] newArr = new int[nums.length];
        for (int i = r; i >= 0; i--) {
            if (Math.abs(nums[l]) > Math.abs(nums[r])) {
                newArr[i] = nums[l] * nums[l++];
            } else {
                newArr[i] = nums[r] * nums[r--];
            }
        }
        return newArr;
    }
}