int pow_int(int base, int power)
{
    if(power == 0)
    {
        return 1;
    }
    else
    {
        return base * pow_int(base, power-1);
    }
}
