class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans =1;

        for (int i=0;i<=30;i++){
            if (n>0 && 1073741824%n == 0){
                ans = ans * 2;
                return true;
        
                
            }

        }
       return false; 
    }
};