import java.util.Scanner;

public class prog
{
    public static int f(int num)
    {
        int f=1, i;
        
        for(i=1; i<=num; i++)
        {
            f = f*i;
        }
        return f;
    }
    public static void main(String args[])
    {
        int n, r,c;
       
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Value of n : ");
        n = sc.nextInt();
        System.out.print("Enter Value of r : ");
        r = sc.nextInt();
        System.out.print("\nNPR = " +(f(n)/(f(n-r))));

    }
}
