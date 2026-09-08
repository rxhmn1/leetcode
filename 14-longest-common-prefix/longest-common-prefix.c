char* longestCommonPrefix(char** strs, int strsSize) {
    int i=0,j=0;
    for(i=0;i<strlen(strs[0]);i++){
        for(j=1;j<strsSize;j++){
            if(strs[0][i]!=strs[j][i] || strs[j][i]=='\0'){
                strs[0][i]='\0';
                break;
            }
        }
    }
    return strs[0];
}