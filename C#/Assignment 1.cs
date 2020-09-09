/* Christopher Albert
 * CSCI 3005 Section 10
 * Program to simulate The Frog Hop Game
 * Assignment 1
 * September 3, 2018
 */
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ChristopherAlbertAssignment01
{
    class Program
    {
        static void Main(string[] args)
        {
            FrogBuilder builder = new FrogBuilder ();
            builder.buildFrog();
            Frog first = builder.getFrog();
            builder.buildFrog();
            Frog second = builder.getFrog();
            builder.buildFrog();
            Frog third = builder.getFrog();
            Console.WriteLine("Enter a distance in inches");
            decimal inches = Convert.ToDecimal (Console.ReadLine());
            Console.WriteLine("The first frog {1}: traveled the distance in {0} minutes", first.getTimeTraveled (inches). ToString("0.0000"), first.getName ());
            Console.WriteLine("The second frog {1}: traveled the distance in {0} minutes", second.getTimeTraveled(inches). ToString("0.0000"), second.getName());
            Console.WriteLine("The first frog {1}: traveled the distance in {0} minutes", third.getTimeTraveled(inches).ToString ("0.0000"), third.getName());
            Console.ReadKey();
        }
    }
}
