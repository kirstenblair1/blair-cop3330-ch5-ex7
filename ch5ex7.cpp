/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution ch 5 ex 7
 *  Copyright 2021 kirsten blair
 */

#include "std_lib_facilities.h"


double a, b, c;

 

double formula(double value)
 {
   double n = a*value*value+b*value+c;
   
   if (n==0) 
    {
      return value;
    }
 }

 


void quadEquation()
 {
     cout << "Enter numbers a b c: ";

     while(cin >> a >> b >> c)
     {
         if(a == 0)
         {
             if(b == 0)
             {
                 cout << "No roots.\n";
             }

             else
             {
                 cout << "x = " << formula(-c/b);
             }   
         }
         else if(b == 0)
         {
             double x = -c/a;
             if(x == 0)
             {
                 cout << "x = 0";
             }
             else if (x < 0)
             {
                 cout << "No roots.";
             }
             else
             {
                 cout << "Two roots: " << formula(sqrt(x)) << " and " << formula(-sqrt(x)) << "\n";
             }
         }

         else
         {
             double n = b*b-4*a*c;

             if (n == 0)
             {
                 cout << "There is 1 root: " << formula(-b/(2*a)) << "\n";
             }

             else if (n < 0)
             {
                 cout << "No roots.";
             }

             else 
             {
                 cout << "Two roots: " << setprecision(12) << formula((-b+sqrt(n))/(2*a)) << " and " << formula((-b-sqrt(n))/(2*a));
             }
         }

     }

     cout << "Enter numbers a b c: ";
 }




int main()
 {
     quadEquation();


     return 0;
 }
