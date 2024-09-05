bool isPalindrome(int x) {
    long long num;
    int len,hflen,key=1;
    num = x;
    if(num<0)
        return 0;
    len = (int)log10(num)+1;
    hflen = len/2;
    for(int i=0;i<hflen;i++){
        if(((num/(int)pow(10,i))%10) != ((num/(int)pow(10,len-i-1))%10))
            key=0;
    }
    return key;
    
}