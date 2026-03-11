class Solution {
public:
    int bitwiseComplement(int n) {
        int mask=0;
        int cmp=~n;
        if(n==0)
           return 1;
        while(n)
        { 
            n=n>>1;
           mask=mask<<1;
           mask=mask|1;
             
        }
        cmp=cmp&mask;
        return cmp;
    }
};