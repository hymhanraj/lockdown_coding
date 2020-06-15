import java.util.*;
import java.io.*;
class GFG 
{ 
	static int isKPalRec(String str1, 
			String str2, int m, int n) 
	{ 
		if (m == 0) 
		{ 
			return n; 
		} 
		if (n == 0) 
		{ 
			return m; 
		} 
		if (str1.charAt(m - 1) == 
			str2.charAt(n - 1)) 
		{ 
			return isKPalRec(str1, str2, 
							m - 1, n - 1); 
		} 
		return 1 + Math.min(isKPalRec(str1, str2, m - 1, n), 
				isKPalRec(str1, str2, m, n - 1)); 
	} 
	static boolean isKPal(String str, int k) 
	{ 
		String revStr = str; 
		revStr = reverse(revStr); 
		int len = str.length(); 

		return (isKPalRec(str, revStr, len, len) <= k * 2); 
	} 

	static String reverse(String input) 
	{ 
		char[] temparray = input.toCharArray(); 
		int left, right = 0; 
		right = temparray.length - 1; 

		for (left = 0; left < right; left++, right--) 
		{ 
			// Swap values of left and right 
			char temp = temparray[left]; 
			temparray[left] = temparray[right]; 
			temparray[right] = temp; 
		} 
		return String.valueOf(temparray); 
	} 
	public static void main(String[] args) 
	{ 
		Scanner s = new Scanner(System.in);
		String str;
		int k;
		System.out.print("Enter a string : ");
		str = s.next();
		System.out print("Enter the value of K : ");
		k = s.nextInt();
		if (isKPal(str, k)) 
		{ 
			System.out.println("Yes"); 
		} 
		else
		{ 
			System.out.println("No"); 
		} 
	} 
}
