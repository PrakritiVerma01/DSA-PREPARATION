class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        if(digits[n]!=9){                                  
            digits[n]++;
        }
        else{
            digits[n]=0;                               
            for(int i=n-1; i>=0; i--){                     
                if(digits[i]==9 && i-1>=0){       
                    digits[i]=0;
                }
                else if(digits[i]!=9){                
                    digits[i]+=1;
                    return digits;
                }
            }
            digits[0]=0;                             
            digits.insert(digits.begin(), 1);
        }
        return digits;                                   
    }
};