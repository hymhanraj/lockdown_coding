package may18;
import java.util.Scanner;

public class May182020 {
	
	    public static void main(String[] args) {  
	        String str = "Hello friend";  
	        int count =0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7= 0,count8=0,count9=0;  
	        for (int i=0; i<=str.length()-1; i++) {  
	            if(str.charAt(i) == 'H') {  
	                count++; 
	            }  
	            if(str.charAt(i) == 'e') {  
	                count1++;  
	            }
	            if(str.charAt(i) == 'l') {  
	                count2++;  
	            }
	            if(str.charAt(i) == 'o') {  
	                count3++;  
	            }
	            if(str.charAt(i) == 'f') {  
	                count4++;  
	            }
	            if(str.charAt(i) == 'r') {  
	                count5++;  
	            }
	            if(str.charAt(i) == 'i') {  
	                count6++;  
	            }
	            if(str.charAt(i) == 'n') {  
	                count7++;  
	            }
	            if(str.charAt(i) == 'd') {  
	                count8++;  
	            }
	            if(str.charAt(i) ==' ') {  
	                count9++;  
	            }
	            
	        }  
	        System.out.println("Frequency of H is: "+count); 
	        System.out.println("Frequency of E is: "+count1); 
	        System.out.println("Frequency of L is: "+count2); 
	        System.out.println("Frequency of 0 is: "+count3); 
	        System.out.println("Frequency of F is: "+count4); 
	        System.out.println("Frequency of R is: "+count5); 
	        System.out.println("Frequency of I is: "+count6); 
	        System.out.println("Frequency of N is: "+count7); 
	        System.out.println("Frequency of D is: "+count8); 
	        System.out.println("Frequency of - is: "+count9); 
	    }  
	  

}
