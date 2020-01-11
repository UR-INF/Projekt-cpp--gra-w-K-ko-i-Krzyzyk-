#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>


using namespace std;


int main(int argc, char** argv) {


cout  << "Gra w Kolko i Krzyzyk" << endl;
cout <<  "-------------------------------------------------" << endl;	

	char board[3][3];
	
	board[0][0] = '1';
	board[0][1] = '2';
	board[0][2] = '3';
	board[1][0] = '4';
	board[1][1] = '5';
	board[1][2] = '6';
	board[2][0] = '7';
	board[2][1] = '8';
	board[2][2] = '9';

	

	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			cout << "\t";

			cout << board[i][j] << "\t|";
		}
		cout <<endl<<  "-------------------------------------------------" << endl;
	}

	

	
	bool PlayerHasWon = false;
	bool xPlayerFin = false;
	bool yPlayerFin = false;
	int turn_count = 2; 
	char inputLoc = 0;
	int amount_of_players = 0;
	
    cout<< "Gra z kumputerem =1"<<endl;
    cout<< "Gra z drugim graczem =2"<<endl;
    cout<< "Wybierz swojego przeciwnika=";
	cout << "" ;
	cin >> amount_of_players ;

	if (amount_of_players == 2) {

		while (PlayerHasWon == false)
		{

			if (turn_count % 2 == 0) 
			{
				xPlayerFin = false;

				while (xPlayerFin == false)
				{
					cout <<endl<< "Wybierz miejsce w ktorym chcesz postawic X=";
			
					cin >> inputLoc;
					cout<<endl;

					if (inputLoc == '1' && board[0][0] != 'O' && board[0][0] != 'X')
					{
						board[0][0] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '2' && board[0][1] != 'O' && board[0][1] != 'X')
					{
						board[0][1] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '3' && board[0][2] != 'O' && board[0][2] != 'X')
					{
						board[0][2] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '4' && board[1][0] != 'O' && board[1][0] != 'X')
					{
						board[1][0] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '5' && board[1][1] != 'O' && board[1][1] != 'X')
					{
						board[1][1] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '6' && board[1][2] != 'O' && board[1][2] != 'X')
					{
						board[1][2] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '7' && board[2][0] != 'O' && board[2][0] != 'X')
					{
						board[2][0] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '8' && board[2][1] != 'O' && board[2][1] != 'X')
					{
						board[2][1] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '9' && board[2][2] != 'O' && board[2][2] != 'X')
					{
						board[2][2] = 'X';
						xPlayerFin = true;
					}
					else
					{
						cerr << "Nieprawidlowy wybor, sproboj ponownie";
					}

					turn_count++;
				}

			} 
			else if (turn_count % 2 != 0)
			{
				yPlayerFin = false;

				while (yPlayerFin == false)
				{
					cout <<endl<< "Wybierz miejsce w ktorym chcesz postawic 0=";
					
					cin >> inputLoc;
					cout<<endl;

					if (inputLoc == '1' && board[0][0] != 'O' && board[0][0] != 'X')
					{
						board[0][0] = 'O';
						yPlayerFin = true;
					}
					else if (inputLoc == '2' && board[0][1] != 'O' && board[0][1] != 'X')
					{
						board[0][1] = 'O';
						yPlayerFin = true;
					}
					else if (inputLoc == '3' && board[0][2] != 'O' && board[0][2] != 'X')
					{
						board[0][2] = 'O';
						yPlayerFin = true;
					}
					else if (inputLoc == '4' && board[1][0] != 'O' && board[1][0] != 'X')
					{
						board[1][0] = 'O';
						yPlayerFin = true;
					}
					else if (inputLoc == '5' && board[1][1] != 'O' && board[1][1] != 'X')
					{
						board[1][1] = 'O';
						yPlayerFin = true;
					}
					else if (inputLoc == '6' && board[1][2] != 'O' && board[1][2] != 'X')
					{
						board[1][2] = 'O';
						yPlayerFin = true;
					}
					else if (inputLoc == '7' && board[2][0] != 'O' && board[2][0] != 'X')
					{
						board[2][0] = 'O';
						yPlayerFin = true;
					}
					else if (inputLoc == '8' && board[2][1] != 'O' && board[2][1] != 'X')
					{
						board[2][1] = 'O';
						yPlayerFin = true;
					}
					else if (inputLoc == '9' && board[2][2] != 'O' && board[2][2] != 'X')
					{
						board[2][2] = 'O';
						yPlayerFin = true;
					}
					else
					{
						cerr <<endl<< "Nieprawidlowy wybor, sproboj ponownie"<<endl;
					}

					turn_count++;
				}
			} 

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {

					cout << "\t";

					cout << board[i][j] << "\t|";
				}
				cout << endl << "-------------------------------------------------" << endl;
			}

			

			if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) //159
			{
				PlayerHasWon = true;
				cout << board[0][0] << " Gracz wygrywa\n";
			}
			else if (board[0][2] == board[1][1] && board[0][2] == board[2][0]) //357 
			{
				PlayerHasWon = true;
				cout << board[0][2] << " Gracz wygrywa\n";
			}
			else if (board[1][0] == board[1][1] && board[1][0] == board[1][2]) //456
			{
				PlayerHasWon = true;
				cout << board[1][0] << " Gracz wygrywa\n";
			}
			else if (board[0][1] == board[1][1] && board[0][1] == board[2][1]) //258
			{
				PlayerHasWon = true;
				cout << board[0][1] << " Gracz wygrywa\n";
			}
			else if (board[0][0] == board[0][1] && board[0][0] == board[0][2]) //123
			{
				PlayerHasWon = true;
				cout << board[0][0] << " Gracz wygrywa\n";
			}
			else if (board[2][0] == board[2][1] && board[2][0] == board[2][2]) //789
			{
				PlayerHasWon = true;
				cout << board[2][0] << " Gracz wygrywa\n";
			}
			else if (board[0][0] == board[1][0] && board[0][0] == board[2][0]) //147
			{
				PlayerHasWon = true;
				cout << board[0][0] << " Gracz wygrywa\n";
			}
			else if (board[0][2] == board[1][2] && board[0][2] == board[2][2]) //369
			{
				PlayerHasWon = true;
				cout << board[0][2] << " Gracz wygrywa\n";
			}
			else if (turn_count > 10)
			{
				PlayerHasWon = true;
				cout << "Remis!\n";
			}

		}
	}
	else if (amount_of_players == 1) 
	{
		while (PlayerHasWon == false)
		{
				xPlayerFin = false;

				while (xPlayerFin == false)
				{
					cout <<endl<< "Wybierz miejsce w ktorym chcesz postawic X=";
					
					cin >> inputLoc;
					cout<<endl;

					if (inputLoc == '1' && board[0][0] != 'O' && board[0][0] != 'X')
					{
						board[0][0] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '2' && board[0][1] != 'O' && board[0][1] != 'X')
					{
						board[0][1] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '3' && board[0][2] != 'O' && board[0][2] != 'X')
					{
						board[0][2] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '4' && board[1][0] != 'O' && board[1][0] != 'X')
					{
						board[1][0] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '5' && board[1][1] != 'O' && board[1][1] != 'X')
					{
						board[1][1] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '6' && board[1][2] != 'O' && board[1][2] != 'X')
					{
						board[1][2] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '7' && board[2][0] != 'O' && board[2][0] != 'X')
					{
						board[2][0] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '8' && board[2][1] != 'O' && board[2][1] != 'X')
					{
						board[2][1] = 'X';
						xPlayerFin = true;
					}
					else if (inputLoc == '9' && board[2][2] != 'O' && board[2][2] != 'X')
					{
						board[2][2] = 'X';
						xPlayerFin = true;
					}
					else
					{
						cerr <<endl<< "Nieprawidlowy wybor, sproboj ponownie"<<endl;
					}

					turn_count++;
				}




				bool O_AI_Logic = false;
				while (O_AI_Logic == false) {
					srand(time(0));
					int Rand_X, Rand_Y;
					Rand_X = rand() % 3;
					Rand_Y = rand() % 3;
					if (board[Rand_X][Rand_Y] != 'X' && board[Rand_X][Rand_Y] != 'O') {
						board[Rand_X][Rand_Y] = 'O';
						O_AI_Logic = true;
					}
				}

				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {

						cout << "\t";

						cout << board[i][j] << "\t|";
					}
					cout << endl << "-------------------------------------------------" << endl;
				}

				

				if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) //159
				{
					PlayerHasWon = true;
					cout << board[0][0] << " Gracz wygrywa\n";
				}
				else if (board[0][2] == board[1][1] && board[0][2] == board[2][0]) //357 
				{
					PlayerHasWon = true;
					cout << board[0][2] << " Gracz wygrywa\n";
				}
				else if (board[1][0] == board[1][1] && board[1][0] == board[1][2]) //456
				{
					PlayerHasWon = true;
					cout << board[1][0] << " Gracz wygrywa\n";
				}
				else if (board[0][1] == board[1][1] && board[0][1] == board[2][1]) //258
				{
					PlayerHasWon = true;
					cout << board[0][1] << " Gracz wygrywa\n";
				}
				else if (board[0][0] == board[0][1] && board[0][0] == board[0][2]) //123
				{
					PlayerHasWon = true;
					cout << board[0][0] << " Gracz wygrywa\n";
				}
				else if (board[2][0] == board[2][1] && board[2][0] == board[2][2]) //789
				{
					PlayerHasWon = true;
					cout << board[2][0] << " Gracz wygrywa\n";
				}
				else if (board[0][0] == board[1][0] && board[0][0] == board[2][0]) //147
				{
					PlayerHasWon = true;
					cout << board[0][0] << " Gracz wygrywa\n";
				}
				else if (board[0][2] == board[1][2] && board[0][2] == board[2][2]) //369
				{
					PlayerHasWon = true;
					cout << board[0][2] << " Gracz wygrywa\n";
				}
				else if (turn_count > 10)
				{
					PlayerHasWon = true;
					cout << "Remis!\n";
				}

			} 
			
		}
	}
