

//Link for question leetcode- https://leetcode.com/problems/valid-palindrome/submissions/
class Solution {
public :
    bool valid(char p){
        if((p>='a'&& p<='z')||(p>='A'&& p<='Z')||(p>='0'&& p<='9')){
            return 1 ;
        }
        return 0;
    }
    
public : 
    char islower(char p){
        if((p>='a'&& p<='z')||(p>='a'&& p<='z')){
            return p;
        }
        else if(p>='A'&&p<='Z'){
            p = (p -'A'+'a');
        }
        return p;
    }
    
public :
    bool checkpalindrome(string str){
        int s = str.length()-1;
        int i = 0;
        while(i<=s){
            if(str[i]!=str[s]){
                return 0;
            }
               //else{
               i++,s--;
    //    }
    }
        return 1;
    }
    
public:
    bool isPalindrome(string s) {
        //string temp ="";
        string temp;
        for(int i = 0;i<=s.length();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
            }
        for(int j= 0;j<=temp.length();j++){
            temp[j]=islower(temp[j]);
        }
        return checkpalindrome(temp);
    }
};
