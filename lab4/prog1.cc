// Example Program for lab3

/*
 *        File: prog1.cc
 *      Author: Alex Vano
 *        Date: 2/9/2024
 * Description: Lab 4 prog1.cc
 */

#include <iostream>
#include <cstdlib>

using namespace std;



/*

	File: git-lab-program.cc
	Author: Alex Vano
	Date: 9/22/2023
	Description: Fixing lab4

*/

int main()
{
  int number;   // Be sure to add comments for each of these variables
		// that are declared!

  int answer;   // Don't forget this one.

  do {
    cout << "Enter a number, and I'll compute the answer:";
    cin >> number;
    
    switch (number) {
    case 0:
      answer = 0;
      cout << "You've got nothing!\nTry again.\n";
      break;
    case 1:
      answer = number*2;
      cout << "Well, at least you have something\nBut it's not enough, try again.\n";
      break;
    case 13:
      answer = -13;
      cout << "You're very unlucky aren't you.\nTry again.\n";
      break;
    case 21:
      answer = 22;
      cout << "Well, I'll give you one more, but it's still not enough.\nTry again.\n";
      break;
    case 42:
      cout << "You have the answer already!\n";
      answer = 42;
      cout << "You've succeeded in getting out of this dumb program!\n"
       << "Congratulations\n";
       return (EXIT_SUCCESS);
    case 12345:
      answer = 12345;
      cout << "You've succeeded in getting out of this dumb program!\n"
       << "Congratulations\n";
       return (EXIT_SUCCESS);
    default:
      answer = -1;
      cout << "That number is so bogus, I'm taking what little you have away from you.\n"
	   << "Try again, and be smart about it this time.\n";
      break;
    }
    
    
  } while (answer != 42 || answer != 12345);
  
  cout << "You've succeeded in getting out of this dumb program!\n"
       << "Congratulations\n";

  return (EXIT_SUCCESS);
}
