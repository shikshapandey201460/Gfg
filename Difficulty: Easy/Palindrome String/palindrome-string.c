// User function template for C
bool isPalindrome(char s[]) {
    // code here

        
    int st=0;
    int e=strlen(s)-1;
    while(st<e){
        if(s[st]!=s[e]){
            return false;
        }
        else{
            st++;
            e--;
        }
    }
    return true;
}
    
