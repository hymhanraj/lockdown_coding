public class Subarray { 
  
    // function to find total sub-array 
    // which start and end with same element 
    public static void cntArray(int A[], int N) 
    { 
        // initialize result with 0 
        int result = 0; 
  
        for (int i = 0; i < N; i++) { 
  
            // all size 1 sub-array 
            // is part of our result 
            result++; 
  
            // element at current index 
            int current_value = A[i]; 
  
            for (int j = i + 1; j < N; j++) { 
  
                // Check if A[j] = A[i] 
                // increase result by 1 
                if (A[j] == current_value) { 
                    result++; 
                } 
            } 
        } 
  
        // print the result 
        System.out.println(result); 
    } 
  
    // Driver code 
    public static void main(String[] args) 
    { 
        int[] A = { 1, 5, 6, 1, 9, 
                    5, 8, 10, 8, 9 }; 
        int N = A.length; 
        cntArray(A, N); 
    } 
}
