import java.util.Scanner;
 
class Positive{
public static void main(String[] args){
int num;
System.out.println("Enter a number");
Scanner a=new Scanner(System.in);
num=a.nextInt();
if(num<0)
System.out.println("The num is negative");
else if(num>0)

System.out.println("num is zero");
else
System.out.println("num is positive");

}
}
