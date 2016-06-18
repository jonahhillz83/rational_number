typedef struct{
    int numerator;
    int denominator;
    int equal;
}rational;

rational makerational (int,int);

rational add_rational(rational,rational);

rational mul_rational(rational,rational);

rational equal_rational(rational,rational);


int main()
{

    rational r1=makerational(1,2);
    rational r2=makerational(3,4);
    rational mul=mul_rational(r1,r2);
    printf("%d %d",mul.numerator,mul.denominator);
    printf("\n");
    rational sum=add_rational(r1,r2);
    printf("%d %d",sum.numerator,sum.denominator);
    printf("\n");
    rational result=equal_rational(r1,r2);
    printf("%d",result.equal);
    printf("\n");
}

rational makerational(int a ,int b)
{
    rational r_number;
    r_number.numerator=a;
    r_number.denominator=b;
    return r_number;
}

rational add_rational(rational r1, rational r2)
{

    rational result;
    result.numerator=(r1.numerator*r2.denominator)+(r2.numerator*r1.denominator);
    result.denominator=r1.denominator*r2.denominator;
    return result;
}

rational mul_rational(rational r1, rational r2)
{

    rational result;
    result.numerator=(r1.numerator*r2.numerator);
    result.denominator=r1.denominator*r2.denominator;
    return result;
}
rational equal_rational(rational r1, rational r2)
{

    rational result1;
    if(r1.numerator*r2.denominator == r2.numerator*r1.denominator)
{
printf("true");
}
else
{
printf("false");
}


    return result1;
}
