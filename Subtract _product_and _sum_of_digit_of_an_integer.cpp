class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int product=1,sum =0;
        while(n){
            
      int  i=  n%10;
          n= n/10;
            sum =sum + i;
            product = product*i;
            
            
        }
      //  int result = product - sum;
       // cout<<result;
      //  return result;
     return   product - sum;
    }
};