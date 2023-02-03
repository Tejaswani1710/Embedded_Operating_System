 char *mystrrev(char str[])
 {
    int len = 0;
    int i;
    char temp = 0;
     while (str[len] != '\0')
        {
            len++;
        }

    for(i=0;i<len/2;i++)
     {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
     }
     //str[len+1]='\0';
    return str;
 }