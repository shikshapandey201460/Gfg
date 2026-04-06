class Solution{
public:
char getMaxOccuringChar(string s) {
    int freq[26]={0};
    //create an array count of characters
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //lower 
        int number=0;
        if(ch>='a'&& ch<='z'){
        number=ch-'a';
        
    }
    else{
        //upper
        number=ch-'A';
    }
freq[number]++;
}
int maxi=-1;
int ans=0;
for(int i=0;i<26;i++){
    if(maxi<freq[i]){
        ans=i;
        maxi=freq[i];
    }
}
char finalans='a'+ans;
return finalans;
}

};