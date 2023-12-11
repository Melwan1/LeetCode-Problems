int romanToInt(char* s) {
    if (!(*s))
    {
        return 0;
    }
    if (s[0] == 'I')
    {
        if (s[1] == 'V')
        {
            return 4;
        }
        if (s[1] == 'X')
        {
            return 9;
        }
        return 1 + romanToInt(++s);
    }
    if (s[0] == 'V')
    {
        return 5 + romanToInt(++s);
    }
    if (s[0] == 'X')
    {
        if (s[1] == 'L')
        {
            return 40 + romanToInt(s + 2);
        }
        if (s[1] == 'C')
        {
            return 90 + romanToInt(s + 2);
        }
        return 10 + romanToInt(++s);
    }
    if (s[0] == 'L')
    {
        return 50 + romanToInt(++s);
    }
    if (s[0] == 'C')
    {
        if (s[1] == 'D')
        {
            return 400 + romanToInt(s + 2);
        }
        if (s[1] == 'M')
        {
            return 900 + romanToInt(s + 2);
        }
        return 100 + romanToInt(++s);
    }
    if (s[0] == 'D')
    {
        return 500 + romanToInt(++s);
    }
    return 1000 + romanToInt(++s);
}
