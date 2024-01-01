int maxLengthBetweenEqualCharacters(char* s)
{
    int size = strlen(s),i,j,k,retn_val=0,temp=0;
    if(size == 1)
        return -1;
    else if(size == 2)
        if(s[0]==s[1])
            return 0;
        else 
            return -1;
    else
    { 
        size = 0;
        for(i=0;s[i];i++)
        {
            for(j=i+1;s[j];j++)
            {
                if(s[i]==s[j])
                {
                    size++;
                    for(k=i+1;k<j;k++)
                        temp++;
                    if(temp > retn_val)
                        retn_val = temp;
                    temp = 0;
                }
            }
        }
    }
    if(size == 0)
        return -1;
    else
        return retn_val;
}
