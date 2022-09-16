class Solution {
public:
    int titleToNumber(string columnTitle) {
       int p,sum=0;
        if (columnTitle.length()==1)
            return (int) columnTitle[0]-'A'+1;
        else{
            int len=columnTitle.length();
            int k=len-1;
            for(int i=0;i<len;i++)
            {
                p=(columnTitle[i]-'A'+1)*pow(26,k);
                sum=sum+p;
                k--;
            }    
                
                
                
                
           
           
            
        }//else  
           
           
        return sum;       
            
            
                            /*
                            int val=26*(columnTitle[0]-'A'+1)+ columnTitle[1]-'A'+1;
                            return val; */

        
        
    }
};