/* ------------------------------------------------
   prog1ggerac3.cpp
 
   Program #1: Toothpicks: Puzzle to equalize the number of toothpicks in three stacks.
   Class: CS 141
   Author: Gina Gerace
   Lab: Tues 11am
   System:  C++ Windows DevC++

   Grading Rubric:

   50 Execution points
         5 Displays header info on screen when run
         5 Displays instructions
         5 Output is formatted as shown in sample output
         3 Handles both upper and lower case input
         5 Input can be adjacent or have spaces between them
        15 Makes moves correctly
        10 Handles the specified error conditions
         2 Gives appropriate end of program messages

   50 Programming Style (Given only if program runs substantially correctly)
         5 Program naming convention is followed
        10 Meaningful identifier names
        10 Comments: Has header.  Comments on each block of code
        10 Appropriate data and control structures
        10 Code Layout: Appropriate indentation and blank lines
   ------------------------------------------------
*/

#include <iostream>    // For cin and cout
#include <iomanip>     // For formatted output using setw()
using namespace std;

int main()
{
        // Display identifying information
        cout << "Program #1: Toothpicks" << endl << "Class: CS 141" << endl
			 << "Author: Gina Gerace" << endl << "Lab: Tues. 11am" << endl
             << "System: C++ Windows DevC++" << endl
             << endl;
        
        // Display the instuctions
        cout << "Welcome to the Toothpick Puzzle, where the goal is to get an equal" << endl
			 << "number of toothpicks in each stack, in three moves." << endl
        	 << endl << setw(22) <<  "Stack: " << setw(8) << "A  B  C" << endl
        	 << "Number of Toothpicks: " << setw(8) << "11  7  6" << endl
        	 << endl << "A move consists of moving toothpicks from one stack to a second stack,"
			 << endl << "where the number of toothpicks moved is exactly the number that is in the"
			 << endl << "destination stack.  In other words, to move from stack B (7 toothpicks)"
			 << endl << "to stack C (6) as shown above, we would move 6 from B to C, leaving us"
			 << endl << "with 1 in B and 12 in stack C." << endl
			 << endl << "Here we go..." << endl;
			 		
		// Declare variables for stacks
        char moveFrom = ' ';
        char moveTo = ' ';
        
        // Declare variables for starting number of toothpicks in each stack
        int stackA = 11;
        int stackB = 7;
        int stackC = 6;
        
        // Display the stacks
	    cout << endl << setw(24) << "Stack:  " << setw(4) << "A" << setw(4) << "B" << setw(4) << "C" << endl;
	    cout << " Number of Toothpicks:	" << setw(4) << stackA << setw(4) << stackB << setw(4) << stackC << endl;
        
        // Declare a counter to count the number of moves
        int loopCounter = 1;
        
        // Use a while looop to keep track of moves
        while( loopCounter <= 3) {
	      
		    // Prompt the user for source and destination stacks
	        cout << endl << loopCounter << ". Enter FROM and TO stack letters: ";
	        cin >> moveFrom >> moveTo;
	        
			// Make sure letter stored is capital
			moveFrom = toupper (moveFrom); 
	        moveTo = toupper (moveTo);
        
	        // Check if user input is from A to B
	        if( moveFrom == 'A' && moveTo == 'B' ) {
	            // if number of toothpicks permits, carry out the turn
				if( stackA >= stackB) {
					stackA = stackA - stackB;
					stackB = stackB * 2;
					loopCounter = loopCounter + 1;
	            }
	            // if number of toothpicks doesn't permit, send error message & start turn over
				else {
					cout << "Sorry, not enough toothpicks in A. Retry..." << endl;
					continue;
	            }
	    	}
	    	// Check if user input is from A to C
	        if( moveFrom == 'A' && moveTo == 'C' ) {
	            // if number of toothpicks permits, carry out the turn
				if( stackA >= stackC) {
					stackA = stackA - stackC;
					stackC = stackC * 2;
					loopCounter = loopCounter + 1;
	            }
				// if number of toothpicks doesn't permit, send error message & start turn over
				else {
					cout << "Sorry, not enough toothpicks in A. Retry..." << endl;
					continue;
	            }
	    	}
	    	// Check if user input is from B to C
	        if( moveFrom == 'B' && moveTo == 'C' ) {
	            // if number of toothpicks permits, carry out the turn
				if( stackB >= stackC) {
					stackB = stackB - stackC;
					stackC = stackC * 2;
					loopCounter = loopCounter + 1;
	            }
				// if number of toothpicks doesn't permit, send error message & start turn over
				else {
					cout << "Sorry, not enough toothpicks in B. Retry..." << endl;
					continue;
	            }
	    	}
	    	// Check if user input is from B to A
	        if( moveFrom == 'B' && moveTo == 'A' ) {
	            // if number of toothpicks permits, carry out the turn
				if( stackB >= stackA) {
					stackB = stackB - stackA;
					stackA = stackA * 2;
					loopCounter = loopCounter + 1;
	            }
				// if number of toothpicks doesn't permit, send error message & start turn over
				else {
					cout << "Sorry, not enough toothpicks in B. Retry..." << endl;
					continue;
	            }
	    	}
	    	// Check if user input is from C to A
	        if( moveFrom == 'C' && moveTo == 'A' ) {
	            // if number of toothpicks permits, carry out the turn
				if( stackC >= stackA) {
					stackC = stackC - stackA;
					stackA = stackA * 2;
					loopCounter = loopCounter + 1;
	            }
				// if number of toothpicks doesn't permit, send error message & start turn over
				else {
					cout << "Sorry, not enough toothpicks in C. Retry..." << endl;
					continue;
	            }
	    	}
	    	// Check if user input is from C to B
	        if( moveFrom == 'C' && moveTo == 'B' ) {
	            // if number of toothpicks permits, carry out the turn
				if( stackC >= stackB) {
					stackC = stackC - stackB;
					stackB = stackB * 2;
					loopCounter = loopCounter + 1;
	            }
				// if number of toothpicks doesn't permit, send error message & start turn over
				else {
					cout << "Sorry, not enough toothpicks in C. Retry..." << endl;
					continue;
	            }
	    	}
			// Display the stacks
	        cout << endl << setw(24) << "Stack:  " << setw(4) << "A" << setw(4) << "B" << setw(4) << "C" << endl;
	   		cout << " Number of Toothpicks:	" << setw(4) << stackA << setw(4) << stackB << setw(4) << stackC << endl;
		}
		
		// Display message telling user if they won or lost
		if( stackA == stackB && stackB == stackC) {
			cout << endl << "Congratulations! You did it! Great job!" << endl;
		}
		else {
			cout << endl << "Nope, sorry, that's not it. Try again." << endl;
		}
	
	return 0;
}
