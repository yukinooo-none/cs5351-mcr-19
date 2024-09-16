// supply header files and cpp format
#include <iostream>
using namespace std;


bool isWin(char game[3][3]) {
    bool win = false;
    if (game[0][0] == game[0][1] && game[0][1] == game[0][2] && (game[0][0] ==
            'X' || game[0][0] == 'O')) win = true;
    if (game[1][0] == game[1][1] && game[1][1] == game[1][2] && (game[1][0] ==
            'X' || game[1][0] == 'O')) win = true;
    if (game[2][0] == game[2][1] && game[2][1] == game[2][2] && (game[2][0] ==
            'X' || game[2][0] == 'O')) win = true;
    // column
    if (game[0][0] == game[1][0] && game[1][0] == game[2][0] && (game[0][0] ==
            'X' || game[0][0] == 'O')) win = true;
    if (game[0][1] == game[1][1] && game[1][1] == game[2][1] && (game[0][1] ==
            'X' || game[0][1] == 'O')) win = true;
    if (game[0][2] == game[1][2] && game[1][2] == game[2][2] && (game[0][2] ==
            'X' || game[0][2] == 'O')) win = true;
    // diagonal
    if (game[0][0] == game[1][1] && game[1][1] == game[2][2] && (game[0][0] ==
            'X' || game[0][0] == 'O')) win = true;
    if (game[0][2] == game[1][1] && game[1][1] == game[2][0] && (game[0][2] ==
            'X' || game[0][2] == 'O')) win = true;
    return win;

    
    // Rewrite isWin function, new function: determine if the winner is 'X' or 'O'.
    // for (int i = 0; i < 3; i++) {
    //     if (game[i][0] == game[i][1] && game[i][1] == game[i][2] && (game[i][0] == 'X' || game[i][0] == 'O')) {
    //         return game[i][0]; // return winner ('X' or 'O')
    //     }
    // }
    
    // // check column 
    // for (int j = 0; j < 3; j++) {
    //     if (game[0][j] == game[1][j] && game[1][j] == game[2][j] && (game[0][j] == 'X' || game[0][j] == 'O')) {
    //         return game[0][j]; 
    //     }
    // }
    
    // // check diagonal
    // if (game[0][0] == game[1][1] && game[1][1] == game[2][2] && (game[0][0] == 'X' || game[0][0] == 'O')) {
    //     return game[0][0]; 
    // }
    // if (game[0][2] == game[1][1] && game[1][1] == game[2][0] && (game[0][2] == 'X' || game[0][2] == 'O')) {
    //     return game[0][2]; 
    // }

    // // No winner return ' '
    // return ' '; // tie
}


int main() {
        int i, j;
        // char game[3][3] = {' '}; // Tic-tac-toe
        // Defining arrays in detail
        char game[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };

        char player1 = 'X';
        char player2 = 'O';
        bool turn = true; // false for player 1's turn, true for player 2's turn. Player 1 first.
        cout << "X = Player 1" << endl << "O = Player 2" << endl;
        for (int n = 0; n < 9; n++) {
            turn = !turn; // use the not-operator to change true to false or false to true.
            if (turn == false)
                cout << "Player 1: ";
            else
                cout << "Player 2: ";
            cout << "Which cell to mark? i:[1..3], j:[1..3]: ";
            cin >> i >> j;
            if (turn == false)
                game[i][j] = 'X';
            else
                game[i][j] = 'O';
            if (isWin(game)) {
                cout << "Win!" << endl;
                break; // need to terminate the problem
            }
        }

        // Start the game and determine the winner at the end
      //   for (int n = 0; n < 9; n++) {
      //   bool validInput = false;
      //   while (!validInput) {
      //       cout << (turn ? "Player 2: " : "Player 1: ");
      //       cout << "Which cell to mark? i:[0..2], j:[0..2]: ";
      //       int i, j;
      //       cin >> i >> j;

      //       // Check if input is valid
      //       if (cin.fail() || (i < 0 || i > 2) || (j < 0 || j > 2)) {
      //           cout << "Invalid input. Please enter values between 0 and 2." << endl;
      //           cin.clear();
      //           cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear the input buffer
      //       } else if (game[i][j] == 'X' || game[i][j] == 'O') {
      //           cout << "Cell already marked. Please choose another cell." << endl;
      //       } else {
      //           validInput = true;
      //           game[i][j] = turn ? 'O' : 'X';  
      //       }
      //   }
      //   if (isWin(game)!=' ') {
      //   string winner;
      //   if(isWin(game)=='X') winner = "Player 1";
      //   else winner = "Player 2";
      //   cout << winner << " " << "Win!" << endl;
      //   break; // need to terminate the problem
      //   }
      //   turn = !turn;
      // }
        
            
        if (i == 3) // all celles with i=0 to 2 have been inputted above but no winner yet
        cout << "Tie!" << endl;
    
        // All cells have been inputted above but no winner yet
        // if (isWin(game)==' ') 
        // cout << "Tie!" << endl;
    
        // show the game to console
        cout << game[0][0] << " " << game[0][1] << " " << game[0][2] << endl;
        cout << game[1][0] << " " << game[1][1] << " " << game[1][2] << endl;
        cout << game[2][0] << " " << game[2][1] << " " << game[2][2] << endl;
        return 0;
}
