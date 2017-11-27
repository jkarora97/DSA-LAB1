import java.util.*;
import java.lang.*;
import java.io.*;
class Combination{
     static int ncr(int n,int r){
        if(r==0||r==n)
        return 1;
        int c[][]=new int[n+1][r+1];
        int i,j;
        for(i=0;i<=n;i++)
        c[i][0]=1;
        for(j=0;j<=r;j++)
        c[0][j]=1;
        for(i=1;i<=n;i++){
            for(j=1;j<=r;j++){
                if(i==j)
                c[i][j]=1;
                else if(j>i)
                c[i][j]=0;
                else
                c[i][j]=c[i-1][j-1]+c[i-1][j];
                
            }
        }
        return c[n][r];
        }
        
        public static void main(String[] args){
            int n=5;
            int r=2;
            int comb=ncr(n,r);
            System.out.println(comb);
        }
}
