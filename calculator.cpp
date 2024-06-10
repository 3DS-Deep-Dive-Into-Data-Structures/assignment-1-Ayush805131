class Solution {
public:
    int calculate(string s) {
        stack<pair<int,int>>st;
        int n=s.size();
        long int sum=0;
        char sign='+';
         int i=0;
         while(i<n){
            
            if(s[i]=='+' || s[i]=='-'){
                sign=s[i];

            }
            
            else if(s[i]=='('){
                st.push({sum,sign});
                sum=0;
                sign='+';
            }
            else if(s[i]==')'){
               if(st.top().second=='+'){
                sum=st.top().first+sum;
               }
               else{
                sum=st.top().first-sum;
               }
               st.pop();
            }
            else if(i<n && s[i]<=57 && s[i]>=48){

               long int x=0;
                while(i<n && s[i]<=57 && s[i]>=48){
                    x=x*10+s[i]-'0';
                    i++;
                }
                i--;


                if(sign=='+'){
                    sum+=x;}
                else{
                    sum-=x;
                }  

                
            }

            i++;

        }
        return sum;
    }
};