class DisplayMessage extends Thread{
private String message;
private int delay;
DisplayMessage(String message,int delay){
this.message=message;
this.delay=delay;
}
public void run(){
try{
while(true){
System.out.println(message);
Thread.sleep(delay * 1000);
}
}
catch(InterruptedException e){
e.printStackTrace();
}
}
}
class MultiThreadExample{
public static void main(String args[])
{
DisplayMessage thread1=new DisplayMessage("Good Morning",1);
DisplayMessage thread2=new DisplayMessage("hello",2);
DisplayMessage thread3=new DisplayMessage("welcome",3);
thread1.start();
thread2.start();
thread3.start();
}
}