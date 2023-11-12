/**
 * test.cpp
 * Project UID 24b93ce4a6274610f4c3f3e31fe17277t
 *
 * Casey Lee
 * leecasey
 *
 * EECS 183: Project 2
 * Fall 2023
 *
 * Testing functions for your rps.cpp implementation.
 * Holds the definitions of required testing functions.
 * We have stubbed all required functions for you.
 */

#include <iostream>
#include <string>

using namespace std;


//************************************************************************
// You should have implemented the following functions in rps.cpp
//************************************************************************
string getName(int playerNumber);
int getMenuChoice();
bool isMoveGood(char move);
char getMove(string playerName);
bool isRoundWinner(char move, char opponentMove);
void announceRoundWinner(string winnerName);
int doRound(string p1Name, string p2Name);
void announceWinner(string winnerName);
string doGame(string p1Name, string p2Name, int gameType);

//************************************************************************
// The following functions were already implemented for you in rps.cpp
//************************************************************************
void printInitialHeader();
void printMenu();
void printErrorMessage(int errorNumber);
void printCloser();

//************************************************************************
// Testing function declarations. Function definition is below main.
//************************************************************************
void test_isMoveGood();
void test_isRoundWinner();
void test_announceRoundWinner();
void test_announceWinner();


void startTests() {
    cout << "\nExecuting your test cases\n";

    test_isMoveGood();
    test_isRoundWinner();
    test_announceRoundWinner();
    test_announceWinner();

    return;
}

//************************************************************************
// Put all your test function implementations below here.
// We have stubbed all required functions for you
// to recieve full points when submitting test.cpp
// NOTE: We will only grade your tests for the following functions
//       * isMoveGood
//       * isRoundWinner
//       * announceRoundWinner()
//       * announceWinner()
//************************************************************************

void test_isMoveGood() {
    cout << "Now testing function isMoveGood()\n";
    cout << "'r': Expected: 1, Actual: " << isMoveGood('r') << endl;
    cout << "'q': Expected: 0, Actual: " << isMoveGood('q') << endl;
    cout << "'R': Expected: 1, Actual: " << isMoveGood('R') << endl;
    cout << "'1': Expected: 0, Actual: " << isMoveGood('1') << endl;

    return;
}

void test_isRoundWinner() {
    //We will be testing function announceRoundWinner to see which player won.
    cout << "Now testing function isRoundWinner()\n";
    cout << "'r' && 's': Expected: 1, Actual: " << isMoveGood('r' & 's') << endl;
    cout << "'R' && 'S': Expected: 1, Actual: " << isMoveGood('R' & 'S') << endl;
    cout << "'s' && 'p': Expected: 1, Actual: " << isMoveGood('s' & 'p') << endl;
    cout << "'S' && 'P': Expected: 1, Actual: " << isMoveGood('S' & 'P') << endl;
    cout << "'p' && 'r': Expected: 1, Actual: " << isMoveGood('r' & 'p') << endl;
    cout << "'P' && 'R': Expected: 1, Actual: " << isMoveGood('R' & 'P') << endl;
    cout << "'s' && 'r': Expected: 0, Actual: " << isMoveGood('s' & 'r') << endl;
    cout << "'S' && 'R': Expected: 0, Actual: " << isMoveGood('S' & 'R') << endl;
    cout << "'p' && 's': Expected: 0, Actual: " << isMoveGood('p' & 's') << endl;
    cout << "'P' && 'S': Expected: 0, Actual: " << isMoveGood('P' & 'S') << endl;
    cout << "'r' && 'p': Expected: 0, Actual: " << isMoveGood('r' & 'p') << endl;
    cout << "'R' && 'P': Expected: 0, Actual: " << isMoveGood('R' & 'P') << endl;
    
    return;
}

void test_announceRoundWinner() {
	// We will be testing the function announceRoundWinner
    // to determine the winner for this round
    cout << "Now testing function announceRoundWinner()\n";
    
    cout << "\"David Cao\": Expected: David Cao wins the round!, Actual: ";
    announceRoundWinner("David Cao");
    cout << endl;
    
    cout << "This round is a draw!";
    announceRoundWinner("");
    cout << endl;
    
    return;
}

void test_announceWinner() {
	// We will be announcing the winner that won more rounds overall
    cout << "Now testing function test_announceWinner()\n";
    
    cout << "Congratulations David Cao!" << endl;
    cout << "You won EECS 183 Rock-Paper-Scissors!" << endl;
    announceWinner("David Cao");
    cout << endl;
    
    cout << "No winner!";
    announceWinner("");
    cout << endl;
    
    return;
}
