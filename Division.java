import java.util.Scanner;
class Division
{
    public static void main(String[] args)
    {
    int num1,num2,quotient=0;
    Scanner in=new Scanner(System.in);
    num1=in.nextInt();
    num2=in.nextInt();
    while(num1>=num2)
    {
        num1=num1-num2;
        quotient++;
    }
    System.out.println(quotient);
    System.out.println(num1);
    }
}
