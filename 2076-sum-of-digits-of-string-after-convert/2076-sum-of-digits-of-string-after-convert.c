int getLucky(char* s, int k) {
    int len = strlen(s),sum=0,sums[100];
    for(int i=0;i<len;i++){
        if(s[i]-'a'+1>9){

            sum += (*(s+i)-'a'+1)/10;
            sum += (*(s+i)-'a'+1)%10;
        }
        else
            sum += *(s+i)-'a'+1;
    }
    for(int i=0;i<k-1;i++){
        int tmp=sum;
        sum = 0;
        len = (int)log10(tmp)+1;
        for(int j=0;j<len;j++){
            sum += tmp%10;
            tmp /= 10;
        }
    }
    return sum;
}