import java.util.Scanner;

class question{
    public static void main(String[] args) {
       int[] nums = {1,1,1,2,2,2,3,4};
       int ans = removeDuplicates(nums);
       System.err.println(ans);
    }
     public static int removeDuplicates(int[] nums) {
        int l = nums.length - 1;
        int count = 0;
        for(int i=1; i<=l; i++){
            if(nums[i]==nums[i-1]){
                count++;
        } else {
            continue;
        }
    }
    return count;
}
}