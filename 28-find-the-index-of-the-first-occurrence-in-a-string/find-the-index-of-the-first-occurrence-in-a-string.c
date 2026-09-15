int strStr(char* haystack, char* needle) {
    int s1=strlen(haystack);
    int s2=strlen(needle);
    int i,j;int index=0;
    for(i=0;i<=(s1-s2);i++){
        for(j=0;j<s2;j++){
            if(haystack[i+j]!=needle[j]){
                index++;
                break;
            }    
        }
        if(j==s2){
                break;
            }
    }
    if(j!=s2){
        return -1;
    }
    return i;

}