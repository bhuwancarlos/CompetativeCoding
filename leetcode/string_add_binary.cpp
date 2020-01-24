class Solution {
public:
    string addBinary(string a, string b) {
        int la = a.length()-1, lb = b.length()-1, carry = 0;
        string sum = "";
        while(la>=0 && lb>=0){
            if(carry == 0 && la>=0 && lb>=0){
                if(a[la]=='0' && b[lb]=='0') sum += "0";
                if((a[la]=='0' && b[lb]=='1') || (a[la]=='1' && b[lb]=='0') ) sum += "1";
                if(a[la]=='1' && b[lb]=='1') {
                    sum += "0";
                    carry = 1;
                }
                la--;
                lb--;
            }
            if(carry == 1 && la>=0 && lb>=0){
                 if(a[la]=='0' && b[lb]=='0') {
                     sum += "1";
                     carry = 0;
                 }
                if((a[la]=='0' && b[lb]=='1') || (a[la]=='1' && b[lb]=='0') ) {
                    sum += "0";
                    carry = 1;
                }
                if(a[la]=='1' && b[lb]=='1') {
                    sum += "1";
                    carry = 1;
                }
                la--;
                lb--;
            }
         }
        //return sum;
        if(la>=0){
            while(la>=0){
                if(carry==1){
                    if(a[la]=='0') {
                        sum += '1';
                        carry = 0;
                    }
                    if(a[la]=='1') {
                        sum += '0';
                        carry = 1;
                    }
                    la--;
                }
                else if(carry==0){
                    if(a[la]=='0') sum += '0';
                    if(a[la]=='1') sum += '1';
                    la--;
                }
            }
        }
        //return sum;
        if(lb>=0){
            while(lb>=0){
                if(carry==1){
                    if(b[lb]=='0') {
                        sum += '1';
                        carry = 0;
                    }
                    if(b[lb]=='1') {
                        sum += '0';
                        carry = 1;
                    }
                    lb--;
                }
                else if(carry==0){
                    if(b[lb]=='0') sum += '0';
                    if(b[lb]=='1') sum += '1';
                    lb--;
                }
            }
        }
        //string s = to_string(carry);
        //return sum;
        if(carry==1) sum += "1";
        reverse(sum.begin(), sum.end());
        return sum;
    }
};