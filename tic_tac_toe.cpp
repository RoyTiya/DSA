#include <bits/stdc++.h>
#include <iostream>

using namespace std;

//function that returns 2D array
char **createboard (int boardSize=3)
{
    char **board = new char *[boardSize];
    for(int i=0; i<boardSize; i++)
    {
        board[i] = new char[boardSize];
    }
    return board;
}

//function to display the board
void displayBoard(char** board,int boardSize)
{
    system("cls");
    printf("\n\n");

    int unitSize = boardSize;
    for (int i=0;i<boardSize;i++)
    {
        for (int j=0;j<boardSize; j++)
        {
            if(j<boardSize-1)
                cout << " " << board[i][j] << " |";
            else    
                cout << " " << board[i][j] << " " ;
        }
        cout << endl;

        if(i<boardSize-1)
            for(int k=0;k<unitSize*boardSize;k++)
                cout << "-";

        cout << endl;
    }
    cout << endl;
}

//function to label the board
void labelBoard(char** board, int boardSize)
{
    char counter = '0';
    for (int i=0; i< boardSize; i++)
    {
        for(int j=0;j<boardSize;j++)
        {
            board[i][j] = counter++;
        }
    }
}

//function to fetch player names
char** fetchplayer()
{
    char **playerNames = new char *[2];
    for (int i=0; i<2; i++)
    {
        playerNames[i] = new char[30];
        cout << "Player " << (i + 1) << " Name:" ;
        cin >> playerNames[i];
    }
    return playerNames;
} 

//function for choice
void choice(int *x, int *y, int boardSize)
{
    int ch;
    cin >> ch;
    
    *x=ch/boardSize;
    *y=ch%boardSize;
}

//function to chech winner condition
int checkWin(char  **board, int boardSize, int playerTurn)
{
    for (int i=0; i < boardSize; i++)
    {
        char row = board[i][0];int rowMatch =1;
        char col = board[0][i];int colMatch =1;

        for (int j=0; j<boardSize ; j++)
        {
            if(board[i][j]==row)
                rowMatch++;
            if(board[j][i]==row)
                colMatch++;
        }
        if(rowMatch==boardSize + 1 || colMatch==boardSize + 1)
            return playerTurn;
    }

    char leftD = board[0][0];int ldMatch =1;
    char rightD = board[boardSize-1][0];int rdMatch =1;

    for(int i=0;i< boardSize;i++)
    {
        if(board[i][i]==leftD)
           ldMatch++;
        if(board[boardSize-1][i]==rightD)
           rdMatch++;
    }
    if(leftD==boardSize || rightD==boardSize)
        return playerTurn;
        
    return -1;
    
}

//function to basically run the game
void runGame(char **board, int boardSize, char **playerIds)
{
    char weapon[] ={'X','O'};
    int playerTurn=0, round=0;
    displayBoard(board,boardSize);

    while(round<9)
    {
        playerTurn=(playerTurn)?0:1;
        int X,Y;
        cout << playerIds[playerTurn] << " Your Turn" << endl;
        choice(&X,&Y,boardSize);
        board[X][Y] = weapon[playerTurn];
        displayBoard(board,boardSize);

        int winner = checkWin(board, boardSize, playerTurn);
        if(winner!= -1)
        {
            cout << playerIds[winner] << " has won!!!!" << endl;
            exit(0);
        }
        else
            round++;
    }
    cout << "Draw match" << endl;
}

//function for the rules
void rules()
{
    cout << "hellooooww.....here are some basic rules for the game" << endl;
    cout << "1. Select the given number in the position you want." <<  endl << "2. " << endl << "3. " << endl << "Anddd you're ready to goooo...." << endl;
    cout << endl;
}

int main()
{
    rules();
    int boardSize;
    cout << "boardsize? ";
    cin >> boardSize;
    char** board = createboard(boardSize);

    labelBoard(board,boardSize);
    displayBoard(board, boardSize);

    char **playerIds = fetchplayer();
    runGame(board, boardSize, playerIds);

    return 0;
}