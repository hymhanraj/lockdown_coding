import java.util.*;
import java.io.*;
public class Main { 
	public static void cntArray(int A[], int N) 
	{ 
		int result = 0; 
		for (int i = 0; i < N; i++) {  
			result++; 
			int current_value = A[i]; 
			for (int j = i + 1; j < N; j++) { 
				if (A[j] == current_value) { 
					result++; 
				} 
			} 
		} 
		System.out.println(result); 
	} 

	public static void main(String[] args) 
	{ 
		int N;
		Scanner s = new Scanner(System.in);
		System.out.print("Enter size of array");
		N = s.nextInt();
		System.out.print("Enter array elements");
		int[] A = new int[N];
		for(int i = 0;i < N;i++)
			A[i]=s.nextInt(); 
		cntArray(A, N); 
	} 
} 
