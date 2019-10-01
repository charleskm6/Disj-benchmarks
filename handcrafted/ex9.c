int main()
{
    int x=0;
    int n=1000;
    int z=500;
    while(x<n){
        if(z>x)
            x++;
        else
            z++;
    }
    assert(z==x);
}