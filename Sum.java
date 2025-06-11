public class Sum { 
    public float sum(int x, int y) 
	{
		return (x + y);
		}  
    public double sum(double x, double y) 
    { 
        return (x + y); 
    }  
    public static void main(String args[]) 
    { 
        Sum s = new Sum(); 
        System.out.println(s.sum(10.2f, 20.3f));  
        System.out.println(s.sum(10.5, 20.5)); 
    } 
}