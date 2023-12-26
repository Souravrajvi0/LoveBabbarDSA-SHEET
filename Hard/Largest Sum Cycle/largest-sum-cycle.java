//{ Driver Code Starts
//Initial Template for Java


import java.util.*;
import java.lang.*;
import java.io.*;


class GFG{
    static class FastReader{ 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader(){ 
            br = new BufferedReader(new InputStreamReader(System.in)); 
        } 
  
        String next(){ 
            while (st == null || !st.hasMoreElements()){ 
                try{ st = new StringTokenizer(br.readLine()); } catch (IOException  e){ e.printStackTrace(); } 
            } 
            return st.nextToken(); 
        } 
  
        String nextLine(){ 
            String str = ""; 
            try{ str = br.readLine(); } catch (IOException e) { e.printStackTrace(); } 
            return str; 
        } 

        Integer nextInt(){
            return Integer.parseInt(next());
        }

        Long nextLong(){
            return Long.parseLong(next());
        }
    }

    public static void main(String[] args) throws IOException
    {
        FastReader sc = new FastReader();
        PrintWriter out = new PrintWriter(System.out);
        int t = sc.nextInt();
        while(t-- > 0){
            int N = sc.nextInt();
            int Edge[] = new int[N];
            for(int i = 0; i < N; i++)
                Edge[i] = sc.nextInt();
            Solution ob = new Solution();
            long ans = ob.largesSumCycle(N, Edge);
            out.println(ans);            
        }
        out.flush();
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    long sum;
    public long largesSumCycle(int N, int Edge[]){
        long[] values = new long[N];
        sum = -1l;
        for(int i=0; i<N; i++){
            if( Edge[i]>-1 ){
                bt(i, 0l, Edge, values);
            }
        }
        return sum ;
    }
    
    private void bt(int idx, long curSum, int[]edge, long[]values){
        if(edge[idx] == -1) return ;
        if(edge[idx]==-2){
            sum = Math.max(sum, curSum-values[idx]);
            return ;
        }
        int next = edge[idx];
        edge[idx] = -2;         // marking currently visited.
        values[idx] = curSum;       // storing the total index sum till now.
        
        bt(next, curSum+idx, edge, values);
        edge[idx] = -1;             // making past visited or making invalid to avoid visit next time.
    }
}