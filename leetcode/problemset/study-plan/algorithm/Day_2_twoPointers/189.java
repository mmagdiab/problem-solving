class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        int[] newArr = new int[n];
        int arrayStart = n - (k % n);
        for (int i = 0; i < n; i++) {
           newArr[i] = nums[i];
        }
    
         
        for (int i = 0; i < n; i++) {
            if (arrayStart >= n) arrayStart = 0;
            nums[i] = newArr[arrayStart];
            arrayStart++;
        }
        
        
        // for (int i = 0; i < n; i++) {
        //     System.out.print(newArr[i] + " ");
        // }
    }
}