import java.util.*;
import java.io.*;
public class LastDigit{
	public static void main(String []args) {
		int a,b;
		String c;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter the values for a and b : ");
		a=s.nextInt();
		b=s.nextInt();
		c=Integer.toString((int) Math.pow(a, b));
		System.out.print("The last element of "+a+"^"+b+" is : "+c.charAt(c.length()-1));
		s.close();
	}
}
