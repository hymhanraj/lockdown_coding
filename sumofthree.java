import java.util.Scanner;
public class Sum {

    
  public static void main(String[] args)

{       
    int i,n=0,sum=0;
       System.out.println("Input the 3 numbers : ");  
		for (i=0;i<3;i++)
		{
		    Scanner in = new Scanner(System.in);
		    n = in.nextInt();
		    sum +=n;
		}
	System.out.println("The sum of 3 no is : " +sum+"\n);
 
}
}
