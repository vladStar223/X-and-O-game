#include <iostream>
#include<string>
#include<ctime>
#include <time.h>
#include<string.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void choice();
void checkplaer();
void gamplay1();
void  gamplay0();
void check();
void playsistem();
void play();
void play1();
int resultplaer;
int resultplaer1;
int player;
int player1;
bool null_or_crectik;
bool null_or_crectik1;
bool null_or_crectiksistem;
bool win = false;
int complexity;
bool gocan[9]{};
int resultmove = 0;
bool complexity1;
bool complexity2;
bool complexity3;
bool choicemode;
string pole[9]{};
string x = "X";
string o = "O";
bool go = true;
void showpole()
{
	cout << "| -" << pole[6] << "-" << pole[7] << "-" << pole[8] << "-|" << endl;
	cout << "| -" << pole[3] << "-" << pole[4] << "-" << pole[5] << "-|" << endl;
	cout << "| -" << pole[0] << "-" << pole[1] << "-" << pole[2] << "-|" << endl;
}
void restart()
{
	cout << "Хотите начать заново" << endl;
	cout << "Нажмите  1 если хотите начать заново  или 0 если хотите выйти" << endl;
	int restartgame;
	cin >> restartgame;
	switch (restartgame)
	{
	case 1:
	{
		for (int i = 0; i < 9; i++)
		{
			pole[i] = "-";
		}
		win = false;
		choice();

	}
	case 0:
	{
		cout << "Игра закончена" << endl;
	}
	default:
		break;
	}
}
void randsistem()
{
	int random;
	random = rand() % 9;

	if (random == 0)
	{
		randsistem();

	}
	if (random == 1)
	{
		if (gocan[0] == true)
		{
			resultmove = random;
		}
		else
		{
			randsistem();
		}
	}
	if (random == 2)
	{
		if (gocan[1] == true)
		{
			resultmove = random;
		}
		else
		{
			randsistem();
		}
	}
	if (random == 3)
	{
		if (gocan[2] == true)
		{
			resultmove = random;
		}
		else
		{
			randsistem();
		}
	}
	if (random == 4)
	{

		if (gocan[3] == true)
		{
			resultmove = random;
		}
		else
		{
			randsistem();
		}
	}
	if (random == 5)
	{
		if (gocan[4] == true)
		{
			resultmove = random;
		}
		else
		{
			randsistem();
		}
	}
	if (random == 6)
	{
		if (gocan[5] == true)
		{
			resultmove = random;
		}
		else
		{
			randsistem();
		}
	}
	if (random == 7)
	{
		if (gocan[6] == true)
		{
			resultmove = random;
		}
		else
		{
			randsistem();
		}
	}
	if (random == 8)
	{
		if (gocan[7] == true)
		{
			resultmove = random;
		}
		else
		{
			randsistem();
		}
	}
	if (random == 9)
	{
		if (gocan[8] == true)
		{
			resultmove = random;
		}
		else
		{
			randsistem();
		}
	}

}
void choice()
{
	cout << "Выберите в какой режим будете играть" << endl;
	cout << "1 это один игрок  с  ИИ , 2 это два игрока" << endl;
	int mode;
	cin >> mode;
	switch (mode)
	{
	case 1:
	{
		cout << "Режим один игрок" << endl;
		choicemode = false;
		gamplay1();
	}
	break;
	case 2:
	{
		cout << "Режим два игрока" << endl;
		choicemode = true;
		gamplay0();
	}
	break;
	default:
	{
		cout << "Вы вели не допустимые значения" << endl;
		choice();
	}
	break;
	}
}
void check()
{


	if (null_or_crectiksistem == true || null_or_crectiksistem == false)
	{
		if (gocan[0] == false && gocan[1] == false && gocan[2] == false && gocan[3] == false && gocan[4] == false && gocan[5] == false && gocan[6] == false && gocan[7] == false && gocan[8] == false)
		{
			cout << "Ничья" << endl;


			win = false;
			restart();

		}
		if (pole[0] == x && pole[1] == x && pole[2] == x)
		{
			cout << "ИИ победил!" << endl;

			win = true;
			restart();
		}
		if (pole[3] == x && pole[4] == x && pole[5] == x)
		{
			cout << "ИИ победил!!" << endl;

			win = true;
			restart();
		}
		if (pole[6] == x && pole[7] == x && pole[8] == x)
		{
			cout << "ИИ победил!!!" << endl;

			win = true;
			restart();
		}
		if (pole[0] == x && pole[3] == x && pole[6] == x)
		{
			cout << "ИИ победил!!!!" << endl;

			win = true;
			restart();

		}
		if (pole[1] == x && pole[4] == x && pole[7] == x)
		{
			cout << "ИИ победил!!!!!" << endl;

			win = true;
			restart();


		}
		if (pole[2] == x && pole[1] == x && pole[8] == x)
		{
			cout << "ИИ победил!!!!!!" << endl;

			win = true;
			restart();

		}
		if (pole[0] == x && pole[4] == x && pole[8] == x)
		{
			cout << "ИИ победил!!!!!!!" << endl;

			win = true;
			restart();

		}
		if (pole[7] == x && pole[4] == x && pole[3] == x)
		{
			cout << "ИИ победил!!!!!!!" << endl;

			win = true;
			restart();

		}

	}




}
void checkplaer()
{

	if (gocan[0] == false && gocan[1] == false && gocan[2] == false && gocan[3] == false && gocan[4] == false && gocan[5] == false && gocan[6] == false && gocan[7] == false && gocan[8] == false)
	{
		cout << "Ничья" << endl;


		win = false;
		restart();

	}
	if (null_or_crectik == true || null_or_crectik == false)
	{

		if (pole[0] == x && pole[1] == x && pole[2] == x)
		{
			cout << "Пользователь победил!" << endl;
			win = true;
			restart();
		}
		if (pole[3] == x && pole[4] == x && pole[5] == x)
		{
			cout << "Пользователь победил!!" << endl;
			win = true;
			restart();
		}
		if (pole[6] == x && pole[7] == x && pole[8] == x)
		{
			cout << "Пользователь победил!!!" << endl;
			win = true;
			restart();
		}
		if (pole[0] == x && pole[3] == x && pole[6] == x)
		{
			cout << "Пользователь победил!!!!" << endl;
			win = true;
			restart();

		}
		if (pole[1] == x && pole[4] == x && pole[7] == x)
		{
			cout << "Пользователь победил!!!!!" << endl;
			win = true;
			restart();
		}
		if (pole[2] == x && pole[1] == x && pole[8] == x)
		{
			cout << "Пользователь победил!!!!!!" << endl;
			win = true;
			restart();
		}
		if (pole[0] == x && pole[4] == x && pole[8] == x)
		{
			cout << "Пользователь победил!!!!!!!" << endl;
			win = true;
			restart();
		}
		if (pole[7] == x && pole[4] == x && pole[3] == x)
		{
			cout << "Пользователь победил!!!!!!!" << endl;
			win = true;
			restart();
		}

	}



}
void checkplaer1()
{
	if (gocan[0] == false && gocan[1] == false && gocan[2] == false && gocan[3] == false && gocan[4] == false && gocan[5] == false && gocan[6] == false && gocan[7] == false && gocan[8] == false)
	{
		cout << "Ничья" << endl;


		win = false;
		restart();

	}


	if (null_or_crectik1 == false || null_or_crectik1 == true)
	{

		if (pole[0] == x && pole[1] == x && pole[2] == x)
		{
			cout << "Пользователь 2 победил!" << endl;
			win = true;
			restart();
		}
		if (pole[3] == x && pole[4] == x && pole[5] == x)
		{
			cout << "Пользователь 2 победил!!" << endl;
			win = true;
			restart();
		}
		if (pole[6] == x && pole[7] == x && pole[8] == x)
		{
			cout << "Пользователь 2 победил!!!" << endl;
			win = true;
			restart();
		}
		if (pole[0] == x && pole[3] == x && pole[6] == x)
		{
			cout << "Пользователь 2  победил!!!!" << endl;
			win = true;
			restart();

		}
		if (pole[1] == x && pole[4] == x && pole[7] == x)
		{
			cout << "Пользователь 2 победил!!!!!" << endl;
			win = true;
			restart();
		}
		if (pole[2] == x && pole[1] == x && pole[8] == x)
		{
			cout << "Пользователь 2 победил!!!!!!" << endl;
			win = true;
			restart();
		}
		if (pole[0] == x && pole[4] == x && pole[8] == x)
		{
			cout << "Пользователь 2 победил!!!!!!!" << endl;
			win = true;
			restart();
		}
		if (pole[7] == x && pole[4] == x && pole[3] == x)
		{
			cout << "Пользователь 2 победил!!!!!!!" << endl;
			win = true;
			restart();
		}


	}


}
void checkgo()
{

	if (null_or_crectik == true || null_or_crectik1 == true)
	{
		if (pole[0] == x || pole[0] == o)
		{
			gocan[0] = false;
		}
		else
		{
			gocan[0] = true;
		}
		if (pole[1] == x || pole[1] == o)
		{
			gocan[1] = false;
		}
		else
		{
			gocan[1] = true;
		}
		if (pole[2] == x || pole[2] == o)
		{
			gocan[2] = false;
		}
		else
		{
			gocan[2] = true;
		}
		if (pole[3] == x || pole[3] == o)
		{
			gocan[3] = false;
		}
		else
		{
			gocan[3] = true;
		}
		if (pole[4] == x || pole[4] == o)
		{
			gocan[4] = false;
		}
		else
		{
			gocan[4] = true;
		}
		if (pole[5] == x || pole[5] == o)
		{
			gocan[5] = false;
		}
		else
		{
			gocan[5] = true;
		}
		if (pole[6] == x || pole[6] == o)
		{
			gocan[6] = false;
		}
		else
		{
			gocan[6] = true;
		}
		if (pole[7] == x || pole[7] == o)
		{
			gocan[7] = false;
		}
		else
		{
			gocan[7] = true;
		}
		if (pole[8] == x || pole[8] == o)
		{
			gocan[8] = false;
		}
		else
		{
			gocan[8] = true;
		}

	}
	if (null_or_crectik == false || null_or_crectik1 == false)
	{
		if (pole[0] == x || pole[0] == o)
		{
			gocan[0] = false;
		}
		else
		{
			gocan[0] = true;
		}
		if (pole[1] == x || pole[1] == o)
		{
			gocan[1] = false;
		}
		else
		{
			gocan[1] = true;
		}
		if (pole[2] == x || pole[2] == o)
		{
			gocan[2] = false;
		}
		else
		{
			gocan[2] = true;
		}
		if (pole[3] == x || pole[3] == o)
		{
			gocan[3] = false;
		}
		else
		{
			gocan[3] = true;
		}
		if (pole[4] == x || pole[4] == o)
		{
			gocan[4] = false;
		}
		else
		{
			gocan[4] = true;
		}
		if (pole[5] == x || pole[5] == o)
		{
			gocan[5] = false;
		}
		else
		{
			gocan[5] = true;
		}
		if (pole[6] == x || pole[6] == o)
		{
			gocan[6] = false;
		}
		else
		{
			gocan[6] = true;
		}
		if (pole[7] == x || pole[7] == o)
		{
			gocan[7] = false;
		}
		else
		{
			gocan[7] = true;
		}
		if (pole[8] == x || pole[8] == o)
		{
			gocan[8] = false;
		}
		else
		{
			gocan[8] = true;
		}
	}
	if (null_or_crectiksistem == false || null_or_crectiksistem == true)
	{


		if (pole[0] == x || pole[0] == o)
		{
			gocan[0] = false;
		}
		else
		{
			gocan[0] = true;
		}
		if (pole[1] == x || pole[1] == o)
		{
			gocan[1] = false;
		}
		else
		{
			gocan[1] = true;
		}
		if (pole[2] == x || pole[2] == o)
		{
			gocan[2] = false;
		}
		else
		{
			gocan[2] = true;
		}
		if (pole[3] == x || pole[3] == o)
		{
			gocan[3] = false;
		}
		else
		{
			gocan[3] = true;
		}
		if (pole[4] == x || pole[4] == o)
		{
			gocan[4] = false;
		}
		else
		{
			gocan[4] = true;
		}
		if (pole[5] == x || pole[5] == o)
		{
			gocan[5] = false;
		}
		else
		{
			gocan[5] = true;
		}
		if (pole[6] == x || pole[6] == o)
		{
			gocan[6] = false;
		}
		else
		{
			gocan[6] = true;
		}
		if (pole[7] == x || pole[7] == o)
		{
			gocan[7] = false;
		}
		else
		{
			gocan[7] = true;
		}
		if (pole[8] == x || pole[8] == o)
		{
			gocan[8] = false;
		}
		else
		{
			gocan[8] = true;
		}

	}

}
void gosistem()
{
	bool goAI = true;
	int number_of_moves = 0;
	number_of_moves = number_of_moves + 1;

	/*
	if (null_or_crectiksistem == 1 || null_or_crectiksistem == 0)
	{
		if (pole[0] == o|| pole[0] == x)
		{
			if (complexity1 == true || complexity2 == true || complexity3 == true)
			{
				if (complexity1 == true)
				{
					if (number_of_moves == 1)
					{
						if (gocan[1] == true)
						{
							resultmove = 2;
							goAI = false;
						}
					}
					if (number_of_moves == 2)
					{
						if (gocan[4] == false)
						{
							if (gocan[8] == true)
							{
								resultmove = 9;
								goAI = false;
							}
						}
						if (goAI == true)
						{
							if (gocan[2] == true)
							{
								resultmove = 3;
								goAI = false;
							}
							else
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (number_of_moves == 3)
					{
						if (gocan[5] == false)
						{
							if (gocan[4] == true)
							{
								resultmove = 4;
								goAI = false;
							}
						}
						if (goAI == true)
						{
							if (gocan[6] == false)
							{
								if (gocan[5] == true)
								{
									resultmove = 4;
									goAI = false;
								}
							}
							else
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (number_of_moves == 4)
					{
						if (goAI == true)
						{
							randsistem();
							goAI = false;
						}
					}
					if (number_of_moves == 5)
					{
						if (goAI == true)
						{
							randsistem();
							goAI = false;
						}
					}
					if (number_of_moves == 6)
					{
						if (goAI == true)
						{
							randsistem();
							goAI = false;
						}
					}
				}
				if (complexity2 == true)
				{
					if (go4ps == true)
					{
						resultmove = 4;
					}
					if (number_of_moves == 2)
					{
						if (go5ps == true)
						{
							resultmove = 5;
							goAI = false;
						}
						if (goAI == true)
						{
							if (go3ps == true)
							{
								resultmove = 3;
								goAI = false;
							}
							else
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (number_of_moves == 3)
					{
						if (go6ps == true)
						{
							resultmove = 6;
							goAI = false;
						}
						if (goAI == true)
						{
							if (go6ps == false)
							{
								if (go8ps == true)
								{
									resultmove = 8;
									goAI = false;
								}
							}
							else
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (number_of_moves == 4)
					{
						if (goAI == true)
						{
							if (go7ps == true)
							{
								resultmove = 7;
								goAI = false;
							}
							else
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (number_of_moves == 5)
					{
						if (goAI == true)
						{
							randsistem();
							goAI = false;
						}
					}
					if (number_of_moves == 6)
					{
						if (goAI == true)
						{
							randsistem();
							goAI = false;
						}
					}
				}
				if (complexity3 == true)
				{
					if (go5ps == true)
					{
						resultmove = 5;
					}
					if (number_of_moves == 2)
					{
						if (go2ps == false)
						{
							resultmove = 3;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go3ps == false)
						{
							resultmove = 2;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go4ps == false)
						{
							resultmove = 8;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go5ps == false)
						{
							resultmove = 9;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go6ps == false)
						{
							resultmove = 7;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go7ps == false)
						{
							resultmove = 4;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go8ps == false)
						{
							randsistem();
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go9ps == false)
						{
							randsistem();
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
					}
				}
			}
		}
		if (pole[1] == o || pole[1] == x)
		{
			if (complexity1 == true || complexity2 == true || complexity3 == true)
			{
				if (complexity1 == true)
				{
					if (number_of_moves == 1)
					{
						if (go1ps == true)
						{
							resultmove = 2;
							goAI = false;
						}
					}
					if (number_of_moves == 2)
					{
						if (go5ps == false)
						{
							if (go9ps == true)
							{
								resultmove = 2;
								goAI = false;
							}
						}
						if (goAI == true)
						{
							if (go3ps == true)
							{
								resultmove = 3;
								goAI = false;
							}
							else
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (number_of_moves == 3)
					{
						if (go6ps == false)
						{
							if (go4ps == true)
							{
								resultmove = 4;
								goAI = false;
							}
						}
						if (goAI == true)
						{
							if (go7ps == false)
							{
								if (go4ps == true)
								{
									resultmove = 4;
									goAI = false;
								}
							}
							else
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (number_of_moves == 4)
					{
						if (goAI == true)
						{
							randsistem();
							goAI = false;
						}
					}
					if (number_of_moves == 5)
					{
						if (goAI == true)
						{
							randsistem();
							goAI = false;
						}
					}
					if (number_of_moves == 6)
					{
						if (goAI == true)
						{
							randsistem();
							goAI = false;
						}
					}
				}
				if (complexity2 == true)
				{
					if (go4ps == true)
					{
						resultmove = 4;
					}
					if (number_of_moves == 2)
					{
						if (go5ps == true)
						{
							resultmove = 5;
							goAI = false;
						}
						if (goAI == true)
						{
							if (go3ps == true)
							{
								resultmove = 3;
								goAI = false;
							}
							else
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (number_of_moves == 3)
					{
						if (go6ps == true)
						{
							resultmove = 6;
							goAI = false;
						}
						if (goAI == true)
						{
							if (go6ps == false)
							{
								if (go8ps == true)
								{
									resultmove = 8;
									goAI = false;
								}
							}
							else
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (number_of_moves == 4)
					{
						if (goAI == true)
						{
							if (go7ps == true)
							{
								resultmove = 7;
								goAI = false;
							}
							else
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (number_of_moves == 5)
					{
						if (goAI == true)
						{
							randsistem();
							goAI = false;
						}
					}
					if (number_of_moves == 6)
					{
						if (goAI == true)
						{
							randsistem();
							goAI = false;
						}
					}
				}
				if (complexity3 == true)
				{
					if (go5ps == true)
					{
						resultmove = 5;
					}
					if (number_of_moves == 2)
					{
						if (go2ps == false)
						{
							resultmove = 3;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go3ps == false)
						{
							resultmove = 2;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go4ps == false)
						{
							resultmove = 8;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go5ps == false)
						{
							resultmove = 9;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go6ps == false)
						{
							resultmove = 7;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go7ps == false)
						{
							resultmove = 4;
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go8ps == false)
						{
							randsistem();
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
						if (go9ps == false)
						{
							randsistem();
							if (number_of_moves == 3)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
							if (number_of_moves == 4)
							{
								randsistem();
							}
						}
					}
				}
			}
		}
		if (pole[2] == o || pole[2] == x)
		{
			if (complexity1 == true || complexity2 == true || complexity3 == true)
			{
				if (complexity1 == true || complexity2 == true || complexity3 == true)
				{
					if (complexity1 == true)
					{
						if (go1ps == true)
						{
							resultmove = 2;
							goAI = false;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == false)
							{
								if (go9ps == true)
								{
									resultmove = 2;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == false)
							{
								if (go4ps == true)
								{
									resultmove = 4;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go7ps == false)
								{
									if (go4ps == true)
									{
										resultmove = 4;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity2 == true)
					{
						if (go4ps == true)
						{
							resultmove = 4;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == true)
							{
								resultmove = 5;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == true)
							{
								resultmove = 6;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go6ps == false)
								{
									if (go8ps == true)
									{
										resultmove = 8;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								if (go7ps == true)
								{
									resultmove = 7;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity3 == true)
					{
						if (go5ps == true)
						{
							resultmove = 5;
						}
						if (number_of_moves == 2)
						{
							if (go2ps == false)
							{
								resultmove = 3;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go3ps == false)
							{
								resultmove = 2;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go4ps == false)
							{
								resultmove = 8;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go5ps == false)
							{
								resultmove = 9;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go6ps == false)
							{
								resultmove = 7;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go7ps == false)
							{
								resultmove = 4;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go8ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go9ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
						}
					}
				}
			}
		}
		if (pole[3] == o || pole[3] == x)
		{
			if (complexity1 == true || complexity2 == true || complexity3 == true)
			{
				if (complexity1 == true || complexity2 == true || complexity3 == true)
				{
					if (complexity1 == true)
					{
						if (go1ps == true)
						{
							resultmove = 2;
							goAI = false;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == false)
							{
								if (go9ps == true)
								{
									resultmove = 2;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == false)
							{
								if (go4ps == true)
								{
									resultmove = 4;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go7ps == false)
								{
									if (go4ps == true)
									{
										resultmove = 4;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity2 == true)
					{
						if (go4ps == true)
						{
							resultmove = 4;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == true)
							{
								resultmove = 5;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == true)
							{
								resultmove = 6;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go6ps == false)
								{
									if (go8ps == true)
									{
										resultmove = 8;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								if (go7ps == true)
								{
									resultmove = 7;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity3 == true)
					{
						if (go5ps == true)
						{
							resultmove = 5;
						}
						if (number_of_moves == 2)
						{
							if (go2ps == false)
							{
								resultmove = 3;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go3ps == false)
							{
								resultmove = 2;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go4ps == false)
							{
								resultmove = 8;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go5ps == false)
							{
								resultmove = 9;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go6ps == false)
							{
								resultmove = 7;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go7ps == false)
							{
								resultmove = 4;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go8ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go9ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
						}
					}
				}
			}
		}
		if (pole[4] == o || pole[4] == x)
		{
			if (complexity1 == true || complexity2 == true || complexity3 == true)
			{
				if (complexity1 == true || complexity2 == true || complexity3 == true)
				{
					if (complexity1 == true)
					{
						if (go1ps == true)
						{
							resultmove = 2;
							goAI = false;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == false)
							{
								if (go9ps == true)
								{
									resultmove = 2;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == false)
							{
								if (go4ps == true)
								{
									resultmove = 4;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go7ps == false)
								{
									if (go4ps == true)
									{
										resultmove = 4;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity2 == true)
					{
						if (go4ps == true)
						{
							resultmove = 4;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == true)
							{
								resultmove = 5;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == true)
							{
								resultmove = 6;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go6ps == false)
								{
									if (go8ps == true)
									{
										resultmove = 8;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								if (go7ps == true)
								{
									resultmove = 7;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity3 == true)
					{
						if (go5ps == true)
						{
							resultmove = 5;
						}
						if (number_of_moves == 2)
						{
							if (go2ps == false)
							{
								resultmove = 3;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go3ps == false)
							{
								resultmove = 2;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go4ps == false)
							{
								resultmove = 8;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go5ps == false)
							{
								resultmove = 9;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go6ps == false)
							{
								resultmove = 7;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go7ps == false)
							{
								resultmove = 4;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go8ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go9ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
						}
					}
				}
			}
		}
		if (pole[5] == o || pole[5] == x)
		{
			if (complexity1 == true || complexity2 == true || complexity3 == true)
			{
				if (complexity1 == true || complexity2 == true || complexity3 == true)
				{
					if (complexity1 == true)
					{
						if (go1ps == true)
						{
							resultmove = 2;
							goAI = false;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == false)
							{
								if (go9ps == true)
								{
									resultmove = 2;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == false)
							{
								if (go4ps == true)
								{
									resultmove = 4;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go7ps == false)
								{
									if (go4ps == true)
									{
										resultmove = 4;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity2 == true)
					{
						if (go4ps == true)
						{
							resultmove = 4;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == true)
							{
								resultmove = 5;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == true)
							{
								resultmove = 6;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go6ps == false)
								{
									if (go8ps == true)
									{
										resultmove = 8;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								if (go7ps == true)
								{
									resultmove = 7;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity3 == true)
					{
						if (go5ps == true)
						{
							resultmove = 5;
						}
						if (number_of_moves == 2)
						{
							if (go2ps == false)
							{
								resultmove = 3;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go3ps == false)
							{
								resultmove = 2;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go4ps == false)
							{
								resultmove = 8;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go5ps == false)
							{
								resultmove = 9;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go6ps == false)
							{
								resultmove = 7;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go7ps == false)
							{
								resultmove = 4;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go8ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go9ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
						}
					}
				}
			}
		}
		if (pole[6] == o || pole[6] == x)
		{
			if (complexity1 == true || complexity2 == true || complexity3 == true)
			{
				if (complexity1 == true || complexity2 == true || complexity3 == true)
				{
					if (complexity1 == true)
					{
						if (go1ps == true)
						{
							resultmove = 2;
							goAI = false;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == false)
							{
								if (go9ps == true)
								{
									resultmove = 2;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == false)
							{
								if (go4ps == true)
								{
									resultmove = 4;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go7ps == false)
								{
									if (go4ps == true)
									{
										resultmove = 4;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity2 == true)
					{
						if (go4ps == true)
						{
							resultmove = 4;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == true)
							{
								resultmove = 5;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == true)
							{
								resultmove = 6;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go6ps == false)
								{
									if (go8ps == true)
									{
										resultmove = 8;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								if (go7ps == true)
								{
									resultmove = 7;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity3 == true)
					{
						if (go5ps == true)
						{
							resultmove = 5;
						}
						if (number_of_moves == 2)
						{
							if (go2ps == false)
							{
								resultmove = 3;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go3ps == false)
							{
								resultmove = 2;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go4ps == false)
							{
								resultmove = 8;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go5ps == false)
							{
								resultmove = 9;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go6ps == false)
							{
								resultmove = 7;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go7ps == false)
							{
								resultmove = 4;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go8ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go9ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
						}
					}
				}
			}
		}
		if (pole[7] == o || pole[7] == x)
		{
			if (complexity1 == true || complexity2 == true || complexity3 == true)
			{
				if (complexity1 == true || complexity2 == true || complexity3 == true)
				{
					if (complexity1 == true)
					{
						if (go1ps == true)
						{
							resultmove = 2;
							goAI = false;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == false)
							{
								if (go9ps == true)
								{
									resultmove = 2;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == false)
							{
								if (go4ps == true)
								{
									resultmove = 4;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go7ps == false)
								{
									if (go4ps == true)
									{
										resultmove = 4;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity2 == true)
					{
						if (go4ps == true)
						{
							resultmove = 4;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == true)
							{
								resultmove = 5;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == true)
							{
								resultmove = 6;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go6ps == false)
								{
									if (go8ps == true)
									{
										resultmove = 8;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								if (go7ps == true)
								{
									resultmove = 7;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity3 == true)
					{
						if (go5ps == true)
						{
							resultmove = 5;
						}
						if (number_of_moves == 2)
						{
							if (go2ps == false)
							{
								resultmove = 3;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go3ps == false)
							{
								resultmove = 2;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go4ps == false)
							{
								resultmove = 8;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go5ps == false)
							{
								resultmove = 9;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go6ps == false)
							{
								resultmove = 7;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go7ps == false)
							{
								resultmove = 4;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go8ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go9ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
						}
					}
				}
			}
		}
		if (pole[8] == o || pole[8] == x)
		{
			if (complexity1 == true || complexity2 == true || complexity3 == true)
			{
				if (complexity1 == true || complexity2 == true || complexity3 == true)
				{
					if (complexity1 == true)
					{
						if (go1ps == true)
						{
							resultmove = 2;
							goAI = false;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == false)
							{
								if (go9ps == true)
								{
									resultmove = 2;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == false)
							{
								if (go4ps == true)
								{
									resultmove = 4;
									goAI = false;
								}
							}
							if (goAI == true)
							{
								if (go7ps == false)
								{
									if (go4ps == true)
									{
										resultmove = 4;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity2 == true)
					{
						if (go4ps == true)
						{
							resultmove = 4;
						}
						if (number_of_moves == 2)
						{
							if (go5ps == true)
							{
								resultmove = 5;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go3ps == true)
								{
									resultmove = 3;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 3)
						{
							if (go6ps == true)
							{
								resultmove = 6;
								goAI = false;
							}
							if (goAI == true)
							{
								if (go6ps == false)
								{
									if (go8ps == true)
									{
										resultmove = 8;
										goAI = false;
									}
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 4)
						{
							if (goAI == true)
							{
								if (go7ps == true)
								{
									resultmove = 7;
									goAI = false;
								}
								else
								{
									randsistem();
									goAI = false;
								}
							}
						}
						if (number_of_moves == 5)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
						if (number_of_moves == 6)
						{
							if (goAI == true)
							{
								randsistem();
								goAI = false;
							}
						}
					}
					if (complexity3 == true)
					{
						if (go5ps == true)
						{
							resultmove = 5;
						}
						if (number_of_moves == 2)
						{
							if (go2ps == false)
							{
								resultmove = 3;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go3ps == false)
							{
								resultmove = 2;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go4ps == false)
							{
								resultmove = 8;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go5ps == false)
							{
								resultmove = 9;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go6ps == false)
							{
								resultmove = 7;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go7ps == false)
							{
								resultmove = 4;
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go8ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
							if (go9ps == false)
							{
								randsistem();
								if (number_of_moves == 3)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
								if (number_of_moves == 4)
								{
									randsistem();
								}
							}
						}
					}
				}
			}
		}
	}
	*/
}
void complexityfind()
{
	cout << "Выберите сложность" << endl;
	cout << "Сложность будет влиять на ии" << endl;
	cout << "1 это легко, 2 это любитель, 3 это эксперт" << endl;
	cin >> complexity;
	switch (complexity)
	{
	case 1:
	{
		cout << "Вы выбрали сложность новичек" << endl;
		complexity1 = true;
		play();
	}
	break;
	case 2:
	{
		cout << "Вы выбрали сложность любитель" << endl;
		complexity2 = true;
		play();
	}
	break;
	case 3:
	{

		cout << "Вы выбрали сложность эксперт" << endl;
		cout << "Это игра будет очень сложной . Вам нужно будет найти тактики кототорые ИИ не знает" << endl;
		cout << "ИИ будет  не давать победить вам всеми способами " << endl;
		complexity3 = true;
		play();
	}
	break;
	default:
	{
		cout << "Вы вели не допустимые значения" << endl;
		complexityfind();
	}
	break;
	}

}
void playsistem()
{

	if (win == false)
	{

		checkgo();
		checkplaer();
		randsistem();
		checkgo();
		check();
		cout << resultmove << endl;
		switch (resultmove)
		{
		case 1:
		{
			if (null_or_crectiksistem == true)
			{

				pole[0] = x;
				showpole();
			}
			else
			{
				pole[0] = o;
				showpole();
			}
			break;
		}
		case 2:
		{
			if (null_or_crectiksistem == true)
			{

				pole[1] = x;
				showpole();

			}
			else
			{
				pole[1] = o;
				showpole();
			}
			break;
		}
		case 3:
		{
			if (null_or_crectiksistem == true)
			{
				pole[2] = x;
				showpole();

			}
			else
			{
				pole[2] = o;
				showpole();
			}
			break;
		}
		case 4:
		{
			if (null_or_crectiksistem == true)
			{

				pole[3] = x;
				showpole();

			}
			else
			{
				pole[3] = o;
				showpole();
			}
			break;
		}
		case 5:
		{
			if (null_or_crectiksistem == true)
			{

				pole[4] = x;
				showpole();

			}
			else
			{
				pole[4] = o;
				showpole();
			}
			break;
		}
		case 6:
		{
			if (null_or_crectiksistem == true)
			{

				pole[5] = x;
				showpole();


			}
			else
			{
				pole[5] = o;
				showpole();
			}
			break;
		}

		case 7:
		{
			if (null_or_crectiksistem == true)
			{

				pole[6] = x;
				showpole();

			}
			else
			{
				pole[6] = o;
				showpole();
			}
			break;
		}
		case 8:
		{
			if (null_or_crectiksistem == true)
			{

				pole[7] = x;
				showpole();

			}
			else
			{
				pole[7] = o;
				showpole();
			}
			break;
		}
		case 9:
		{
			if (null_or_crectiksistem == true)
			{

				pole[8] = x;
				showpole();

			}
			else
			{
				pole[8] = o;
				showpole();
			}

			break;
		}
		default:
			cout << "вы вели не допустимые значения" << endl;
			break;
		}
	}
	if (win == false)
	{
		play();

	}


}
void play()
{
	checkgo();
	checkplaer();
	if (win == false)
	{

		if (choicemode == true)
		{
			cout << " Первый игрок ходит нажмите цифры от 1 до 9" << endl;
		}
		else
		{
			cout << "нажмите цифры от 1 до 9" << endl;
		}

		cin >> resultplaer;
		checkgo();
		switch (resultplaer)
		{
		case 1:
		{
			if (gocan[0] == true)
			{
				if (null_or_crectik == true)
				{
					pole[0] = x;
					showpole();
				}
				else
				{
					pole[0] = o;
					showpole();
				}
			}
			else
			{
				cout << "Ведите число другое число" << endl;
				play();
			}
			break;
		}
		case 2:
		{
			if (gocan[1] == true)
			{
				if (null_or_crectik == true)
				{
					pole[1] = x;
					showpole();
				}
				else
				{
					pole[1] = o;
					showpole();
				}
			}
			else
			{
				cout << "Ошибка" << endl;
				play();
			}
			break;
		}
		case 3:
		{
			if (gocan[2] == true)
			{
				if (null_or_crectik == true)
				{
					pole[2] = x;
					showpole();
				}
				else
				{
					pole[2] = o;
					showpole();
				}
			}
			else
			{
				cout << "Ошибка" << endl;
				play();
			}
			break;
		}
		case 4:
		{
			if (gocan[3] == true)
			{
				if (null_or_crectik == true)
				{
					pole[3] = x;
					showpole();
				}
				else
				{
					pole[3] = o;
					showpole();
				}
			}
			else
			{
				cout << "Ошибка" << endl;
				play();
			}
			break;
		}
		case 5:
		{
			if (gocan[4] == true)
			{
				if (null_or_crectik == true)
				{
					pole[4] = x;
					showpole();
				}
				else
				{
					pole[4] = o;
					showpole();
				}
			}
			else
			{
				cout << "Ошибка" << endl;
				play();
			}
			break;
		}
		case 6:
		{
			if (gocan[5] == true)
			{
				if (null_or_crectik == true)
				{
					pole[5] = x;
					showpole();
				}
				else
				{
					pole[5] = o;
					showpole();
				}
			}
			else
			{
				cout << "Ошибка" << endl;
				play();
			}
			break;
		}

		case 7:
		{
			if (gocan[6] == true)
			{
				if (null_or_crectik == true)
				{
					pole[6] = x;
					showpole();
				}
				else
				{
					pole[6] = o;
					showpole();
				}
			}
			else
			{
				cout << "Ошибка" << endl;
				play();
			}
			break;
		}
		case 8:
		{
			if (gocan[7] == true)
			{
				if (null_or_crectik == true)
				{
					pole[7] = x;
					showpole();
				}
				else
				{
					pole[7] = o;
					showpole();
				}
			}
			else
			{
				cout << "Ошибка" << endl;
				play();
			}
			break;
		}
		case 9:
		{
			if (gocan[8] == true)
			{
				if (null_or_crectik == true)
				{
					pole[8] = x;
					showpole();
				}
				else
				{
					pole[8] = o;
					showpole();
				}
			}
			else
			{
				cout << "Ошибка" << endl;
				play();
			}

			break;
		}
		default:
			cout << "вы вели не допустимые значения" << endl;
			play();
			break;
		}
	}


	if (win == false)
	{
		if (choicemode == true)
		{
			play1();
		}
		if (choicemode == false)
		{
			playsistem();
		}
	}



}
void play1()
{
	checkgo();
	checkplaer1();
	cout << " Второй игрок ходит " << endl;
	cout << "нажмите цифры от 1 до 9" << endl;
	cin >> resultplaer1;
	checkgo();
	switch (resultplaer1)
	{
	case 1:
	{
		if (gocan[0] == true)
		{
			if (null_or_crectik1 == true)
			{
				pole[0] = x;
				showpole();
			}
			else
			{
				pole[0] = o;
				showpole();
			}
		}
		else
		{
			cout << "Ведите число другое число" << endl;
			play();
		}
		break;
	}
	case 2:
	{
		if (gocan[1] == true)
		{
			if (null_or_crectik1 == true)
			{
				pole[1] = x;
				showpole();
			}
			else
			{
				pole[1] = o;
				showpole();
			}
		}
		else
		{
			cout << "Ошибка" << endl;
			play();
		}
		break;
	}
	case 3:
	{
		if (gocan[2] == true)
		{
			if (null_or_crectik1 == true)
			{
				pole[2] = x;
				showpole();
			}
			else
			{
				pole[2] = o;
				showpole();
			}
		}
		else
		{
			cout << "Ошибка" << endl;
			play();
		}
		break;
	}
	case 4:
	{
		if (gocan[3] == true)
		{
			if (null_or_crectik1 == true)
			{
				pole[3] = x;
				showpole();
			}
			else
			{
				pole[3] = o;
				showpole();
			}
		}
		else
		{
			cout << "Ошибка" << endl;
			play();
		}
		break;
	}
	case 5:
	{
		if (gocan[4] == true)
		{
			if (null_or_crectik1 == true)
			{
				pole[4] = x;
				showpole();
			}
			else
			{
				pole[4] = o;
				showpole();
			}
		}
		else
		{
			cout << "Ошибка" << endl;
			play();
		}
		break;
	}
	case 6:
	{
		if (gocan[5] == true)
		{
			if (null_or_crectik1 == true)
			{
				pole[5] = x;
				showpole();
			}
			else
			{
				pole[5] = o;
				showpole();
			}
		}
		else
		{
			cout << "Ошибка" << endl;
			play();
		}
		break;
	}

	case 7:
	{
		if (gocan[6] == true)
		{
			if (null_or_crectik1 == true)
			{
				pole[6] = x;
				showpole();
			}
			else
			{
				pole[6] = o;
				showpole();
			}
		}
		else
		{
			cout << "Ошибка" << endl;
			play();
		}
		break;
	}
	case 8:
	{
		if (gocan[7] == true)
		{
			if (null_or_crectik1 == true)
			{
				pole[7] = x;
				showpole();
			}
			else
			{
				pole[7] = o;
				showpole();
			}
		}
		else
		{
			cout << "Ошибка" << endl;
			play();
		}
		break;
	}
	case 9:
	{
		if (gocan[8] == true)
		{
			if (null_or_crectik1 == true)
			{
				pole[8] = x;
				showpole();
			}
			else
			{
				pole[8] = o;
				showpole();
			}
		}
		else
		{
			cout << "Ошибка" << endl;
			play();
		}

		break;
	}
	default:
		cout << "вы вели не допустимые значения" << endl;
		play();
		break;
	}

	if (win == false)
	{
		if (choicemode == true)
		{
			play();
		}
		if (choicemode == false)
		{
			playsistem();
		}
	}



}
void getgame()
{
	cout << "| - 7 - 8 - 9|" << endl;
	cout << "| - 4 - 5 - 6|" << endl;
	cout << "| - 1 - 2 - 3|" << endl;
}

for (int i = 0; i < 9; i++)
{
	pole[i] = "-";
}
for (int i = 0; i < 9; i++)
{
	gocan[i] = true;
}
void gamplay0()
{
	cout << "Выбирите за кого будете играть" << endl;
	cout << "1 это крестик, 0 это нолик " << endl;
	cin >> player;
	switch (player)
	{
	case 0:
	{
		null_or_crectik = false;
		null_or_crectiksistem = true;
		cout << "Вы выбрали нолик" << endl;
		break;
	}

	case 1:
	{
		null_or_crectik = true;
		null_or_crectiksistem = false;

		cout << "Вы выбрали крестик" << endl;
		break;
	}
	default:
	{
		cout << "вы вели не допустимые значения" << endl;
		gamplay0();
		break;
	}

	}
	if (null_or_crectik == true)
	{
		play();
	}
	else
	{
		playsistem();
	}
}
void gamplay1()
{
	cout << "Выбирите за кого будете играть" << endl;
	cout << "1 это крестик, 0 это нолик " << endl;
	cin >> player1;
	switch (player1)
	{
	case 0:
	{
		null_or_crectik = false;
		null_or_crectik1 = true;

		cout << "Вы выбрали нолик" << endl;
		cout << "У вашего противника крестик" << endl;
		break;
	}

	case 1:
	{
		null_or_crectik = true;
		null_or_crectik1 = false;

		cout << "Вы выбрали крестик" << endl;
		cout << "У вашего противника нолик" << endl;
		break;
	}
	default:
	{
		cout << "вы вели не допустимые значения" << endl;
		gamplay1();
		break;
	}

	}
	if (null_or_crectik == true)
	{
		play();
	}
	else
	{
		play1();
	}

}
int main()
{
<<<<<<< HEAD
	

=======
>>>>>>> 32fd49b (0.4.1)
	int i, stime;
	long ltime;

	ltime = time(NULL);
	stime = (unsigned int)ltime / 2;
	srand(stime);

	setlocale(LC_ALL, "ru");
	cout << "Здравствуйте пользователь " << endl;
	getgame();
	choice();
	if (choicemode == false)
	{
		complexityfind();
	}

}	}
