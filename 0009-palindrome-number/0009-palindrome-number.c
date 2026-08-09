bool isPalindrome(int x) 
{
    int rem;
    long long reverse=0;
    int temp=x;
    if(x>=0)
    {
        do
        {
            rem=x%10;
            reverse=reverse*10+rem;
            x=x/10;
        }while(x!=0);
        if(temp==reverse)
            return true;
        else
            return false;
    }
    else
        return false;
}