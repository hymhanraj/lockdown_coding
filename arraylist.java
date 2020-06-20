package count;
import java.util.HashMap; 
import java.util.Map; 
import java.util.Map.Entry; 
import java.util.*; 

public class Count_ArrayList {
		public static void countFrequencies(ArrayList<String> list) 
		{ 
			
			Map<String, Integer> hm = new HashMap<String, Integer>(); 

			for (String i : list) { 
				Integer j = hm.get(i); 
				hm.put(i, (j == null) ? 1 : j + 1); 
			} 
			for (Map.Entry<String, Integer> val : hm.entrySet()) { 
				System.out.println("Element " + val.getKey() + " "
								+ "occurs"
								+ ": " + val.getValue() + " times"); 
			} 
		} 

		public static void main(String[] args) 
		{ 
			ArrayList<String> list = new ArrayList<String>(); 
			list.add("for"); 
			list.add("array"); 
			list.add("from ");
			list.add("array");
			list.add("for");
			countFrequencies(list); 
		} 
	} 
