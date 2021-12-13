package adarsh.java;

public class factorial {
    public static void main(String[] args) {
       int n = 3;
       int ans = factorial(n);
        System.out.println(ans);
    }

    static int factorial(int n){
        if(n==1){
            return 1;
        }
        return n*factorial(n-1);
    }
}
