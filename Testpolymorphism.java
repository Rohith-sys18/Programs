class Animal{
void eat(){
System.out.println(eating...);
}
}
class Dog extends Animal{
void eat1(){
System.out.println(eating bread...);
}
}
class Cat extends Animal{
void eat3(){
System.out.println(derinking milk...);
}
}
class Testpolymorphism{
public static void main(String args[]){
Animal a;
a=new Dog();
a.eat1();
a=new Cat();
a.eat3();
}
}