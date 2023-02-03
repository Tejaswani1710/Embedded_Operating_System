void strCopy(char str2[], char str1[])
{
    int i;
    for(i=0;str1[i]!='\0';i++)
     {
        str2[i] = str1[i];
     } 
    str2[i]='\0';
}