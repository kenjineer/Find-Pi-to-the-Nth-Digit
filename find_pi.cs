using System;
public class Hello
{
    public static void Main()
    {
        double pi = Math.PI;
        double result = 0;
        int place = 0;
        bool limit = true;

        while(limit)
        {
            Console.Write("Enter how many decimal places of Pi to be displayed [LIMIT 15]: ");
            place = int.Parse(Console.ReadLine());
            try
            {
                result = Math.Round(pi, place);
                limit = false;
            }
            catch(ArgumentOutOfRangeException e)
            {
                Console.WriteLine("{0} Please enter a valid value.", e);
                limit = true;
            }
        }      
        Console.Write("Pi in " + place + " decimal places is: " + result);
    }
}

Hello.Main();