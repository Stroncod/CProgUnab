import java.util.
import java.io.*;
import java.util.*;
import java.lang.*;
import java.text.DecimalFormat;

public class 1{
	public static void main(String[] args) {
	Scanner input = new Scanner(System.in);
	String str = input.nextLine();
	double n = Double.parseDouble(str);
	DecimalFormat numberFormat = new DecimalFormat(".000");
	DecimalFormat numberFormat2 = new DecimalFormat("s.000");
	DecimalFormat numberFormat3 = new DecimalFormat("ss.000");

	if (n<10) 
		System.out.println(numberFormat3.format(n));
	else if ()
		System.out.println(numberFormat2.format(n));
	else
		System.out.println(numberFormat.format(n));
	}
}