package adarsh.java;

public class numberPrint {
    public static void main(String[] args) {
        System.out.println(numberPrint(4));
    }

    static int numberPrint(int n){
        numberPrint2(5);
        return n;
    }

    static void numberPrint2(int n){
        numberPrint3(6);
        System.out.println(n);
    }

    static void numberPrint3(int n){
        System.out.println(n);
    }
}
