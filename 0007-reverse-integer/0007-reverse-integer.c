
int reverse(int x)
{
    int reverse=0;
    int z;
    do
        {
            z=x%10;
            if(reverse>214748364 || (reverse==214748364 && z>7))
                return 0;
            if(reverse<-214748364 || (reverse==-214748364 && z<-8))
                return 0;
            reverse=reverse*10+z;
            x=x/10;
        }while(x!=0);
    return reverse;
}