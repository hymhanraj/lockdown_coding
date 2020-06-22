package modularexpo;
import java.io.*; 
public class ExpoModular {
	
	static int exponentMod(int A, 
						int B, int C) 
	{ 
		if (A == 0) 
			return 0; 
		if (B == 0) 
			return 1; 
		
		long y; 
		if (B % 2 == 0) 
		{ 
			y = exponentMod(A, B / 2, C); 
			y = (y * y) % C; 
		}
		else
		{ 
			y = A % C; 
			y = (y * exponentMod(A, B - 1, 
								C) % C) % C; 
		} 
		
		return (int)((y + C) % C); 
	}
	public static void main(String args[]) 
	{ 
		int A = 2, B = 5, C = 13; 
		System.out.println("Power is " + 
							exponentMod(A, B, C)); 
	} 
	
}
