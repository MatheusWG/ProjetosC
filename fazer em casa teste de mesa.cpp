int main()
{
    float H,R,C,Qtde,Area,Litro;
    scanf("%f",&H);
    scanf("%f",&R);
    Area = (3.14 * (R * R))+(2 * 3.14 * R * H);
    Litro = Area/3.0;
    Qtde = Litro/50.0;
    C = Qtde * 50.0;
    printf("%0.2f\n",C);
    printf("%0.2f\n",Qtde);
}

