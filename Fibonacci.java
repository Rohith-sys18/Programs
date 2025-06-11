// Online Java Compiler
// Use this editor to write, compile and run your Java code online
public class Fibonacci{
    public static void main(String args[]){
        int n=10;
        int firstterm=0;
        int secondterm=1;
        System.out.println(firstterm+" "+secondterm+" ");
        for(int i=2;i<n;i++){
            int nextterm=firstterm+secondterm;
            System.out.println(nextterm+" ");
            firstterm=secondterm;
            secondterm=nextterm;
        }
    }
}