Mastermind-C
============

A text-based version of the game Mastermind, coded in C.

Instructions:
This version of Mastermind compiles correctly in both Borland C++ 5.02 and Code::Blocks 8.02. All that is required to run the code succesfully is to compile it in a C IDE and run the executable file that is automatically generated.

Mastermind uses the function ShowMenu(), which is immediately called when main is entered to show the list of options available to the user. The option that the user enters is stored in a character called cMenuChoice. A while loop validates the user's entry, and the loop repeats until the user's entry is a valid one. After a valid option has been received, the program enters a switch statement. Each case in the switch statement corresponds to a different option that the user could have entered. Depending on which option the user has chosen, a different function will be called.

The first option available to the user is MenuPlayGame(). In this function, a loop generates random numbers, the rand function being seeded with the help of time.h. Depending on which number is generated, a different character is entered into sGeneratedPegs for that particular location (the location is decided by the iteration of the loop).

A counter for black pegs and white pegs is set to 0 before the user enters each and every guess, and 3 strings (one that stores the user's entered guess, one that records where the user has been awarded a black/white peg in relation to the entered guess, and one that records where the user has been awarded a white/black peg in relation to the pegs that have been generated) have their first 4 characters set to ' '.

The user enters their guess. A loop checks for black pegs by comparing the pegs entered with the pegs that have been generated in the same location on both arrays. If the two pegs are not equal, another loop is entered. If 2 pegs are found to be the same, and a white / black peg hasn't already been awarded for that particular entry, then a white peg is awarded to the user.

After these loops, an if statement checks whether or not 4 black pegs have been awarded to the user. If they have, then the game is over. The boolean bGameWon is set equal to TRUE, and the user is asked to enter their name in order to record their score. The name that the user enters and the number of guesses it took them to crack the combination are recorded in a file called "scores.dat". The user is then asked if they would like to return to tbe menu or not. If they enter 'N' or 'n', the program ends.

If, however, the user was not awarded 4 black pegs, a counter increments to record the number of guesses that the user has had, and the loop is repeated.

Outside of this loop, if the user never cracked the combination, they are asked if they want to see the combination that they failed to crack. After that, they are asked if they would like to return to the menu or not.


The second option available to the user through the menu (MenuHighScores()) is the option to view the high scores recorded by the game. If this function is entered, then all of the scores found in "scored.dat" (up to a maximum of 99) are printed to the screen, in the order of fewest guesses (best game) to most guesses (worst game).


The third option available to the user (MenuHelp()) shows a help screen that explains how to play Mastermind. After viewing these instructions, the user is asked whether or not they would like to return to the menu. 