#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long x, z, v, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, a1, a2, b1, b2, c1, c2, d1, d2, e1, e2, f1, f2, g1, g2, h1, h2;
     
     
    
    do
    {
        x = get_long("Enter your card number: ");
    }
    while (10000000000000000 < x);
    
    // z = checksum (2nd to last, *2) c = checksum, last, addition
    
    a = (floor(x % 100)/10);
    b = (floor(x % 10000)/1000);
    c = (floor(x % 1000000)/100000);
    d = (floor(x % 100000000)/10000000);
    e = (floor(x % 10000000000)/1000000000);
    f = (floor(x % 1000000000000)/100000000000);
    g = (floor(x % 100000000000000)/10000000000000);
    h = (floor(x % 10000000000000000)/1000000000000000);
    i = (floor(x % 10)/1);
    j = (floor(x % 1000)/100);
    k = (floor(x % 100000)/10000);
    l = (floor(x % 10000000)/1000000);
    m = (floor(x % 1000000000)/100000000);
    n = (floor(x % 100000000000)/10000000000);
    o = (floor(x % 10000000000000)/1000000000000);
    p = (floor(x % 1000000000000000)/100000000000000);
    
    if (a > 4)
    {
        a1 = ((a*2) % 10);
        a2 = floor((a*2) / 10);
        a = 0;
    }
    else 
    {
        a1 = 0;
        a2 = 0;
    }
    //
    if (b > 4)
    {
        b1 = ((b*2) % 10);
        b2 = floor((b*2) / 10);
        b = 0;
    }
    else 
    {
        b1 = 0;
        b2 = 0;
    }
    //
    if (c > 4)
    {
        c1 = ((c*2) % 10);
        c2 = floor((c*2) / 10);
        c = 0;
    }
    else 
    {
        c1 = 0;
        c2 = 0;
    }
    //
    if (d > 4)
    {
        d1 = ((d*2) % 10);
        d2 = floor((d*2) / 10);
        d = 0;
    }
    else 
    {
        d1 = 0;
        d2 = 0;
    }
    //
    if (e > 4)
    {
        e1 = ((e*2) % 10);
        e2 = floor((e*2) / 10);
        e = 0;
    }
    else 
    {
        e1 = 0;
        e2 = 0;
    }
    //
    if (f > 4)
    {
        f1 = ((f*2) % 10);
        f2 = floor((f*2) / 10);
        f = 0;
    }
    else 
    {
        f1 = 0;
        f2 = 0;
    }
    //
    if (g > 4)
    {
        g1 = ((g*2) % 10);
        g2 = floor((g*2) / 10);
        g = 0;
    }
    else 
    {
        g1 = 0;
        g2 = 0;
    }
    //
    if (h > 4)
    {
        h1 = ((h*2) % 10);
        h2 = floor((h*2) / 10);
        h = 0;
    }
    else 
    {
        h1 = 0;
        h2 = 0;
    }
    
    z = a*2 + b*2 + c*2 + d*2 + e*2 + f*2 + g*2 + h*2 + a1 + a2 + b1 + b2 + c1 + c2 + d1 + d2 + e1 + e2 + f1 + f2 + g2 + g1 + h1 + h2;
    v = i + j + k + l + m + n + o + p;
    
    
    /*printf("%li\n", i);
    printf("%li\n", a);
    printf("%li\n", j);
    printf("%li\n", b);
    printf("%li\n", k);
    printf("%li\n", c);
    printf("%li\n", l);
    printf("%li\n", d);
    printf("%li\n", m);
    printf("%li\n", e);
    printf("%li\n", n);
    printf("%li\n", f);
    printf("%li\n", o);
    printf("%li\n", g);
    printf("%li\n", p);
    printf("%li\n", h);
    
    printf("%.0li\n", x);
    printf("%.0li\n", z);
    printf("%.0li\n", v);*/
    
    if ((z + v) % 10 == 0)
    {
        if (x > 340000000000000 && x < 350000000000000)
        {
            printf("AMEX\n");
        }
        else if (x > 370000000000000 && x < 380000000000000)
        {
            printf("AMEX\n");
        }
        else if (x > 5100000000000000 && x < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if (x > 4000000000000000 && x < 5000000000000000)
        {
            printf("VISA\n");
        }
        else if (x > 4000000000000 && x < 5000000000000)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}