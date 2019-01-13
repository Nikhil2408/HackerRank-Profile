import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;
class Demo
{
    void compareTriplets(int a[],int b[])
    {
        int arr[]=new int[2];
        int counta=0;
        int countb=0;
        for(int i=0;i<3;i++)
        {
            if(a[i]<b[i])
            {
                countb++;
            }
            if(a[i]>b[i])
            {
                counta++;
            }
        }
        for(int i=0;i<2;i++)
        {
            if(i==0)
            {
                arr[i]=counta;
            }
            else
            {
                arr[i]=countb;
            }
            
        }
        for(int i=0;i<2;i++)
        {
            System.out.print(arr[i]+" ");
        }
       
    }
}
class Solution
{
    public static void main(String[] args)
    {
        Demo d=new Demo();
        Scanner sc=new Scanner(System.in);
        int a[]=new int[3];
        int b[]=new int[3];
        for(int i=0;i<3;i++)
        {
            a[i]=sc.nextInt();
        }
        for(int i=0;i<3;i++)
        {
            b[i]=sc.nextInt();
        }
        d.compareTriplets(a,b);
    }
}