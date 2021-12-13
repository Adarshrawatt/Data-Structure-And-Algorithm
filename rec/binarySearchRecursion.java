package adarsh.java;

public class binarySearchRecursion {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6,7};
        int target = 1;
        int ans = binaryRecursion(arr, target, 0, arr.length-1);
        System.out.println(ans);
    }

    static int binaryRecursion(int[] arr, int target, int s, int e){
        int mid = s + (e - s)/2;
        if (s>e){
            return -1;
        } else if (arr[mid] == target){
            return mid;
        } else if (arr[mid]>target){
            return binaryRecursion(arr,target,s,mid-1);
        } else {
            return binaryRecursion(arr,target,mid+1,e);
        }
    }
}
