class Rohith{
static int add(int a,int b){
return a+b;
}
static double add(double a,double b,double c){
return a+b+c;
}
}
class TestOverloading2{
public static void main(String args[]){
System.out.println(Rohith.add(22,22));
System.out.println(Rohith.add(33.2,33.3,44.4));
}
}
