int fact (int n){
     int t1=0,t2=1,s=0,i;
     if(n<=1){
        return n;
     }
     
        for ( i = 2; i<=n; i++)
        {
             s=t1+t2;
             t1=t2;
             t2=s;
        }
        return s;
        
     }