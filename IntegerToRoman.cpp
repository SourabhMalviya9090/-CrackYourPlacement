class Solution {
public:
    string intToRoman(int num) {
        int count=0;
        string ans = "";
        string roman[7] ={"M","D","C","L","X","V","I"};
        int intval[7] = {1000,500,100,50,10,5,1};
        while(num>0){
            int rem = num%10;
            rem = rem*pow(10,count);
            num  = num/10;
            count++;
            if(rem == 4){
                ans= "IV" + ans;
            }
            else if(rem == 9){
                ans= "IX" + ans;
            }
            else if(rem == 40){
                ans="XL" + ans;
            }
            else if(rem == 90){
                ans= "XC" + ans;
            }
            else if(rem == 400){
                ans= "CD" + ans;
            }
            else if(rem==900){
                ans= "CM" + ans;
            }
            else{
                string temp ="";
                for(int j=0;j<7;j++){
                    int div = rem/intval[j];
                    rem = rem - (div*intval[j]);
                    for(int i=0;i<div;i++){
                    temp+=  roman[j];
                    }
            
                }
                ans = temp + ans;
            }
        }

        return ans;
    }
};
