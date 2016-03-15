/*
 * @author  :  Rajan Khullar
 * @created :  03/14/16
 * @updated :  03/14/16
 */

public class target
{
	private static String msg;
	private static int n, x;

	public static void main(String[] args)
	{
		// check for correct number of args
		if(args.length < 2)
		{
			System.out.println("missing parameters");
			System.exit(1);
		}

		// pass message
		msg = args[0];

		// pass number
		try
		{
			n = Integer.parseInt(args[1]);
		} catch (NumberFormatException ex)
		{
			System.out.println("invalid number");
			System.exit(1);
		}

		// print message specified number of times
		for(x=0; x<n; x++)
			System.out.println(msg);
	}
}
