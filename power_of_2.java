public class power_of_2
{
  public static void main(String[] args)
  {
    Scanner in=new Scanner(System.in);
    System.out.println("Enter n");
    int n=in.nextInt();
    int a=1;
    if(((~n)&1)==1)
    {
      System.out.println("Power of 2");
    }
    else
      System.out.println("Not a power of 2");
  }
}
