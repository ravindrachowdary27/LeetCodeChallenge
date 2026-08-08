bool isPowerOfTwo(int n) 
{
    long int power=1;
    while(power<=n)
    {
        if(power==n)
            return true;
        power=power<<1;
    }
    return false;
}
