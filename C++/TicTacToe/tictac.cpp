#include <iostream>
#include <ctime>
using namespace std;

//declaring functions
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

//main class to run tictactoe
int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
    }
    cout << "Thanks for playing!\n";

    return 0;
};

void drawBoard(char *spaces){

    //function to draw out the tictactoe board, and also inseting new marks
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    cout << "     |     |     " << endl;
    cout << endl;
};
void playerMove(char *spaces, char player){

    //function for player to put down a mark
    int number;

    do {
        cout << "Choose a spot to put in your mark! (1-9): " << endl;
        cin >> number;
        number--;
        if (spaces[number] == ' '){
            spaces[number] = player;
            break;
        }

    } while(! number < 8 || ! number > 0);
};
void computerMove(char *spaces, char computer){
    
    //function to make computer choose where to put down its mark
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;            //rand will choose a random index under 9
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
};
bool checkWinner(char *spaces, char player, char computer){

    //function to check for winning conditions either by player or computer
    //check by the rows for 3 in a row marks
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1] && spaces[1] == spaces[2])){
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4] && spaces[4] == spaces[5])){
        spaces[3] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7] && spaces[7] == spaces[8])){
        spaces[6] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    
    //check by the columns for 3 in a row marks
    if ((spaces[0] != ' ') && (spaces[0] == spaces[3] && spaces[3] == spaces[6])){
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4] && spaces[4] == spaces[7])){
        spaces[1] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5] && spaces[5] == spaces[8])){
        spaces[2] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }

    //check by the diagonals for 3 in a row marks
    if ((spaces[0] != ' ') && (spaces[0] == spaces[4] && spaces[4] == spaces[8])){
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4] && spaces[4] == spaces[6])){
        spaces[1] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else{
        return false;
    }

    return true;
};
bool checkTie(char *spaces){

//function to check any ties between player and computer
for(int i = 0; i < 9; i++){
    if(spaces[i]==' '){
        return false;
        }
    }
    cout << "IT'S A TIE!\n";
    return true;
};