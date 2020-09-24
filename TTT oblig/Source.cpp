#include <iostream>
using namespace std;

char board[10] = { 'i', '1','2','3','4','5','6','7','8','9' };

int wincon();
int wincon()
{
	if (board[1] == board[2] && board[2] == board[3])
		return 1;
	else if (board[4] == board[5] && board[5] == board[6])
		return 1;
	else if (board[7] == board[8] && board[8] == board[8])
		return 1;
	else if (board[1] == board[4] && board[4] == board[7])
		return 1;
	else if (board[2] == board[5] && board[5] == board[8])
		return 1;
	else if (board[3] == board[6] && board[6] == board[9])
		return 1;
	else if (board[1] == board[5] && board[1] == board[9])
		return 1;
	else if (board[3] == board[5] && board[3] == board[7])//Checking for 8 winconditions
		return 1;
	else if (board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] != '7' && board[8] != '8' && board[9] != '9')//Checking draws
		return 0;
	else//Game in progress
		return -1;
}

void prntTable();
void prntTable()
{
	//system("cls");
	cout << "\t\t Welcome to Tic Tac Toe Two Player\n";
	cout << "\t\tPlayer 1 ->  X  |||  O  <- Player 2\n\n";
	cout << "\t\t-----------------------------------\n";
	cout << "\t\t||    " << "     ||         ||         ||\n";
	cout << "\t\t||    " << board[1] << "    ||    " << board[2] << "    ||    " << board[3] << "    ||\n";
	cout << "\t\t||    " << "     ||         ||         ||\n";
	cout << "\t\t|---------------------------------|\n";
	cout << "\t\t||    " << "     ||         ||         ||\n";
	cout << "\t\t||    " << board[4] << "    ||    " << board[5] << "    ||    " << board[6] << "    ||\n";
	cout << "\t\t||    " << "     ||         ||         ||\n";
	cout << "\t\t|---------------------------------|\n";
	cout << "\t\t||    " << "     ||         ||         ||\n";
	cout << "\t\t||    " << board[7] << "    ||    " << board[8] << "    ||    " << board[9] << "    ||\n";
	cout << "\t\t||    " << "     ||         ||         ||\n";
	cout << "\t\t-----------------------------------\n";
}

int main() {
	int game = 0;
	int choice = 0;
	int currentturn = 1;
	do
	{
		prntTable();
		cout << "\t\tChoose a numbered tile.\n";
		if (currentturn == 0)
		{
			cout << "\t\tPlayer 2 - O is choosing:";
		}
		else if (currentturn == 1)
		{
			cout << "\t\tPlayer 1 - X is choosing:";
		}

		cin >> choice;

		if (currentturn == 1)
		{
			if (choice == 1 && board[1] == '1') {
				board[1] = 'X';
				currentturn--;
			}
			else if (choice == 2 && board[2] == '2') {
				board[2] = 'X';
				currentturn--;
			}
			else if (choice == 3 && board[3] == '3') {
				board[3] = 'X';
				currentturn--;
			}
			else if (choice == 4 && board[4] == '4') {
				board[4] = 'X';
				currentturn--;
			}
			else if (choice == 5 && board[5] == '5') {
				board[5] = 'X';
				currentturn--;
			}
			else if (choice == 6 && board[6] == '6') {
				board[6] = 'X';
				currentturn--;
			}
			else if (choice == 7 && board[7] == '7') {
				board[7] = 'X';
				currentturn--;
			}
			else if (choice == 8 && board[8] == '8') {
				board[8] = 'X';
				currentturn--;
			}
			else if (choice == 9 && board[9] == '9') {
				board[9] = 'X';
				currentturn--;
			}
			else {
				cout << "Invalid move. Pick another tile";
				system("pause");
			}
		}
		else if (currentturn == 0)
		{
			if (choice == 1 && board[1] == '1') {
				board[1] = 'O';
				currentturn++;
			}
			else if (choice == 2 && board[2] == '2') {
				board[2] = 'O';
				currentturn++;
			}
			else if (choice == 3 && board[3] == '3') {
				board[3] = 'O';
				currentturn++;
			}
			else if (choice == 4 && board[4] == '4') {
				board[4] = 'O';
				currentturn++;
			}
			else if (choice == 5 && board[5] == '5') {
				board[5] = 'O';
				currentturn++;
			}
			else if (choice == 6 && board[6] == '6') {
				board[6] = 'O';
				currentturn++;
			}
			else if (choice == 7 && board[7] == '7') {
				board[7] = 'O';
				currentturn++;
			}
			else if (choice == 8 && board[8] == '8') {
				board[8] = 'O';
				currentturn++;
			}
			else if (choice == 9 && board[9] == '9') {
				board[9] = 'O';
				currentturn++;
			}
			else {
				cout << "Invalid move. Pick another tile";
				system("pause");
			}

		}

		game = wincon();
		//cout << game; //- test for bugfix

	} while (game < 0);
	prntTable();

	if (game == 1) {
		if (currentturn == 1)
		{
			cout << "\n\t\t    - - - Congratulations - - -";
			cout << "\n\t\t     >>>>> Player 2 Won! <<<<<";
			cout << "\n\t\t     _________________________";
		}
		else
		{
			cout << "\n\t\t    - - - Congratulations - - -";
			cout << "\n\t\t     >>>>> Player 1 Won! <<<<<";
			cout << "\n\t\t     ________________________";
		}
	}
	else
	{
		cout << "\n\t\t  - - - - - Get fucked - - - - -";
		cout << "\n\t\t    >>>>>>> No one won <<<<<<<";
		cout << "\n\t\t    _________________________";
	}
	system("pause");

	return 0;
}