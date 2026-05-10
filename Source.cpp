#include<iostream>
#include<string>
#include<windows.h>
#include<iomanip>




using namespace std;
class  board;


bool validmoveblackking(int dr, int dc, int arr[][8], board& obj);
bool validmovewhiteking(int dr, int dc, int arr[][8], board& obj);


class piece
{
protected:
	string name;
public:
	piece(string nam)
	{
		name = nam;
	}

	piece()
	{

	}
};

class rook :public piece
{

public:

	rook(string name) :piece(name)
	{

	}

	rook()
	{

	}

	bool whitemove(int cr, int cc, int dr, int dc, int arr[][8], int op)
	{
		int temp = 0;
		if (cc == dc)
		{
			if (cr > dr)
			{
				for (int i = cr - 1;i > dr;i--)
				{
					if (arr[i][cc] != 0)
					{
						temp = 1;
					}
				}
				if (temp == 0 && arr[dr][dc] == 0)
				{

					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 10;
						cout << "rook moved !";

					}

					if (op == 0)
					{

						return true;
					}
				}
				else if (temp == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
				{

					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 10;
						cout << "rook moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}


				else
				{
					if (op == 1)
					{
						cout << "invalid move ";

						return false;

					}

					if (op == 0)
					{
						return false;
					}
				}
			}
			else if (cr < dr)
			{
				for (int i = cr + 1;i < dr;i++)
				{
					if (arr[i][cc] != 0)
					{
						temp = 1;
					}
				}
				if (temp == 0 && arr[dr][dc] == 0)
				{

					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 10;
						cout << "rook moved !";

						return true;

					}

					if (op == 0)
					{
						return true;
					}
				}
				else if (temp == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
				{

					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 10;
						cout << "rook moved !";

						return true;

					}

					if (op == 0)
					{
						return true;
					}
				}

				else
				{

					if (op == 1)
					{
						cout << "invalid move";

						return false;

					}

					if (op == 0)
					{
						return false;
					}
				}
			}
		}
		else if (cr == dr)
		{
			int temp = 0;
			if (cc < dc)
			{
				for (int i = cc + 1;i < dc;i++)
				{
					if (arr[cr][i] != 0)
					{
						temp = 1;
					}
				}

				if (temp == 0 && arr[dr][dc] == 0)
				{

					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 10;
						cout << "rook moved !";

						return true;

					}

					if (op == 0)
					{
						return true;
					}
				}


				else if (temp == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
				{

					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 10;
						cout << "rook moved !";

						return true;

					}

					if (op == 0)
					{
						return true;
					}
				}


				else
				{
					if (op == 1)
					{
						cout << "invalid move";

						return false;
					}

					if (op == 0)
					{
						return false;
					}
				}
			}
			else if (cc > dc)
			{
				for (int i = cc - 1;i > dc;i--)
				{
					if (arr[cr][i] != 0)
					{
						temp = 1;

					}
				}

				if (temp == 0 && arr[dr][dc] == 0)
				{

					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 10;
						cout << "rook moved !";

						return true;

					}

					if (op == 0)
					{
						return true;
					}
				}
				else if (temp == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
				{

					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 10;
						cout << "rook moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else
				{

					if (op == 1)
					{
						cout << "invalid move";

						return false;
					}

					if (op == 0)
					{
						return false;
					}
				}
			}
		}



		return false;


	}



	bool blackmove(int cr, int cc, int dr, int dc, int arr[][8], int op)
	{
		int temp = 0;
		if (cc == dc)
		{
			if (cr > dr)
			{
				for (int i = cr - 1;i > dr;i--)
				{
					if (arr[i][cc] != 0)
					{
						temp = 1;
					}
				}
				if (temp == 0 && arr[dr][dc] == 0)
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 1;
						cout << "rook moved !";

						return true;
					}
					if (op == 0)
					{
						return true;
					}
				}
				else if (temp == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 1;
						cout << "rook moved !";


						return true;
					}
					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move ";

						return false;
					}

					if (op == 0)
					{
						return false;
					}
				}
			}
			else if (cr < dr)
			{
				for (int i = cr + 1;i < dr;i++)
				{
					if (arr[i][cc] != 0)
					{
						temp = 1;
					}
				}
				if (temp == 0 && arr[dr][dc] == 0)
				{

					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 1;
						cout << "rook moved !";

						return true;

					}

					if (op == 0)
					{
						return true;
					}
				}
				else if (temp == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
				{

					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 1;
						cout << "rook moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move";

						return false;
					}

					if (op == 0)
					{
						return false;
					}
				}
			}
		}
		else if (cr == dr)
		{
			int temp = 0;
			if (cc < dc)
			{
				for (int i = cc + 1;i < dc;i++)
				{
					if (arr[cr][i] != 0)
					{
						temp = 1;
					}
				}

				if (temp == 0 && arr[dr][dc] == 0)
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 1;
						cout << "rook moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move";

						return false;
					}
					if (op == 0)
					{
						return false;
					}
				}
			}
			else if (cc > dc)
			{
				for (int i = cc - 1;i > dc;i--)
				{
					if (arr[cr][i] != 0)
					{
						temp = 1;
					}
				}

				if (temp == 0 && arr[dr][dc] == 0)
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 1;

						cout << "rook moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else if (temp == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 1;
						cout << "rook moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move";

						return false;
					}
					if (op == 0)
					{
						return false;
					}
				}
			}
		}



		return false;
	}


};


class knight :public piece
{
public:
	knight(string name) :piece(name)
	{

	}

	knight()
	{

	}

	bool blackmove(int cr, int cc, int dr, int dc, int arr[][8], int op)
	{

		if (dr == cr + 1 && dc == cc + 2 && arr[dr][dc] != 1 && arr[dr][dc] != 2 && arr[dr][dc] != 3 && arr[dr][dc] != 4 && arr[dr][dc] != 5 && arr[dr][dc] != 6)
		{
			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 2;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr - 1 && dc == cc + 2 && arr[dr][dc] != 1 && arr[dr][dc] != 2 && arr[dr][dc] != 3 && arr[dr][dc] != 4 && arr[dr][dc] != 5 && arr[dr][dc] != 6)
		{
			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 2;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr + 1 && dc == cc - 2 && arr[dr][dc] != 1 && arr[dr][dc] != 2 && arr[dr][dc] != 3 && arr[dr][dc] != 4 && arr[dr][dc] != 5 && arr[dr][dc] != 6)
		{
			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 2;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr - 1 && dc == cc - 2 && arr[dr][dc] != 1 && arr[dr][dc] != 2 && arr[dr][dc] != 3 && arr[dr][dc] != 4 && arr[dr][dc] != 5 && arr[dr][dc] != 6)
		{

			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 2;

				return true;
			}
			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr + 2 && dc == cc + 1 && arr[dr][dc] != 1 && arr[dr][dc] != 2 && arr[dr][dc] != 3 && arr[dr][dc] != 4 && arr[dr][dc] != 5 && arr[dr][dc] != 6)
		{
			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 2;


				return true;

			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr + 2 && dc == cc - 1 && arr[dr][dc] != 1 && arr[dr][dc] != 2 && arr[dr][dc] != 3 && arr[dr][dc] != 4 && arr[dr][dc] != 5 && arr[dr][dc] != 6)
		{

			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 2;

				return true;

			}

			if (op == 0)
			{
				return true;
			}
		}
		else if (dr == cr - 2 && dc == cc + 1 && arr[dr][dc] != 1 && arr[dr][dc] != 2 && arr[dr][dc] != 3 && arr[dr][dc] != 4 && arr[dr][dc] != 5 && arr[dr][dc] != 6)
		{

			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 2;


				return true;

			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr - 2 && dc == cc - 1 && arr[dr][dc] != 1 && arr[dr][dc] != 2 && arr[dr][dc] != 3 && arr[dr][dc] != 4 && arr[dr][dc] != 5 && arr[dr][dc] != 6)
		{

			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 2;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}

		else
		{

			if (op == 1)
			{
				cout << "invalid move !";

				return false;

			}

			if (op == 0)
			{
				return false;
			}
		}


		return false;

	}


	bool whitemove(int cr, int cc, int dr, int dc, int arr[][8], int op)
	{

		if (dr == cr + 1 && dc == cc + 2 && arr[dr][dc] != 10 && arr[dr][dc] != 20 && arr[dr][dc] != 30 && arr[dr][dc] != 40 && arr[dr][dc] != 50 && arr[dr][dc] != 60)
		{

			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 20;

				return true;

			}
			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr - 1 && dc == cc + 2 && arr[dr][dc] != 10 && arr[dr][dc] != 20 && arr[dr][dc] != 30 && arr[dr][dc] != 40 && arr[dr][dc] != 50 && arr[dr][dc] != 60)
		{
			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 20;

				return true;

			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr + 1 && dc == cc - 2 && arr[dr][dc] != 10 && arr[dr][dc] != 20 && arr[dr][dc] != 30 && arr[dr][dc] != 40 && arr[dr][dc] != 50 && arr[dr][dc] != 60)
		{
			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 20;

				return true;

			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr - 1 && dc == cc - 2 && arr[dr][dc] != 10 && arr[dr][dc] != 20 && arr[dr][dc] != 30 && arr[dr][dc] != 40 && arr[dr][dc] != 50 && arr[dr][dc] != 60)
		{

			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 20;

				return true;

			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr + 2 && dc == cc + 1 && arr[dr][dc] != 10 && arr[dr][dc] != 20 && arr[dr][dc] != 30 && arr[dr][dc] != 40 && arr[dr][dc] != 50 && arr[dr][dc] != 60)
		{

			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 20;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr + 2 && dc == cc - 1 && arr[dr][dc] != 10 && arr[dr][dc] != 20 && arr[dr][dc] != 30 && arr[dr][dc] != 40 && arr[dr][dc] != 50 && arr[dr][dc] != 60)
		{

			if (op == 1)

			{


				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 20;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}
		else if (dr == cr - 2 && dc == cc + 1 && arr[dr][dc] != 10 && arr[dr][dc] != 20 && arr[dr][dc] != 30 && arr[dr][dc] != 40 && arr[dr][dc] != 50 && arr[dr][dc] != 60)
		{

			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 20;

				return true;

			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == cr - 2 && dc == cc - 1 && arr[dr][dc] != 10 && arr[dr][dc] != 20 && arr[dr][dc] != 30 && arr[dr][dc] != 40 && arr[dr][dc] != 50 && arr[dr][dc] != 60)
		{

			if (op == 1)
			{
				cout << "knight moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 20;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}

		else
		{
			if (op == 1)
			{
				cout << "invalid move !";

				return false;
			}

			if (op == 0)
			{
				return false;
			}
		}



		return false;
	}
};


class bishop :public piece
{


public:


	bishop()
	{

	}
	bishop(string name) :piece(name)
	{

	}

	bool whitemove(int cr, int cc, int dr, int dc, int arr[][8], int op)
	{

		int temp;
		int temp1 = 0;
		temp = cc - 1;
		int temp2 = cc + 1;
		int temp3 = cc + 1;
		int temp4 = cc - 1;
		if ((cr - 1 == dr && cc - 1 == dc) || ((cr - 2 == dr) && (cc - 2 == dc)) || ((cr - 3 == dr) && (cc - 3 == dc)) || ((cr - 4 == dr) && (cc - 4 == dc)) || ((cr - 5 == dr) && (cc - 5 == dc)) || ((cr - 6 == dr) && (cc - 6 == dc)) || ((cr - 7 == dr) && (cc - 7 == dc)))
		{

			for (int i = cr - 1;i > dr;i--)
			{
				if (arr[i][temp] != 0)
				{
					temp1 = 1;
				}

				temp--;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{

				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 30;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
			{

				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 30;

					return true;

				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}


		}

		else if ((cr - 1 == dr && cc + 1 == dc) || ((cr - 2 == dr) && (cc + 2 == dc)) || ((cr - 3 == dr) && (cc + 3 == dc)) || ((cr - 4 == dr) && (cc + 4 == dc)) || ((cr - 5 == dr) && (cc + 5 == dc)) || ((cr - 6 == dr) && (cc + 6 == dc)) || ((cr - 7 == dr) && (cc + 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr - 1;i > dr;i--)
			{
				if (arr[i][temp2] != 0)
				{
					temp1 = 1;
				}

				temp2++;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{
				if (op == 1)
				{

					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 30;

					return true;

				}
				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
			{

				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 30;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}



		}


		else if ((cr + 1 == dr && cc + 1 == dc) || ((cr + 2 == dr) && (cc + 2 == dc)) || ((cr + 3 == dr) && (cc + 3 == dc)) || ((cr + 4 == dr) && (cc + 4 == dc)) || ((cr + 5 == dr) && (cc + 5 == dc)) || ((cr + 6 == dr) && (cc + 6 == dc)) || ((cr + 7 == dr) && (cc + 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr + 1;i < dr;i++)
			{
				if (arr[i][temp3] != 0)
				{
					temp1 = 1;
				}

				temp3++;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{
				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 30;

					return true;

				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
			{

				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 30;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}



		}

		else if ((cr + 1 == dr && cc - 1 == dc) || ((cr + 2 == dr) && (cc - 2 == dc)) || ((cr + 3 == dr) && (cc - 3 == dc)) || ((cr + 4 == dr) && (cc - 4 == dc)) || ((cr + 5 == dr) && (cc - 5 == dc)) || ((cr + 6 == dr) && (cc - 6 == dc)) || ((cr + 7 == dr) && (cc - 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr + 1;i < dr;i++)
			{
				if (arr[i][temp4] != 0)
				{
					temp1 = 1;
				}

				temp4--;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{

				if (op == 1)
				{

					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 30;

					return true;

				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
			{

				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 30;

					return true;

				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{

				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}





		}

		return false;
	}


	bool blackmove(int cr, int cc, int dr, int dc, int arr[][8], int op)
	{

		int temp;
		int temp1 = 0;
		temp = cc - 1;
		int temp2 = cc + 1;
		int temp3 = cc + 1;
		int temp4 = cc - 1;
		if ((cr - 1 == dr && cc - 1 == dc) || ((cr - 2 == dr) && (cc - 2 == dc)) || ((cr - 3 == dr) && (cc - 3 == dc)) || ((cr - 4 == dr) && (cc - 4 == dc)) || ((cr - 5 == dr) && (cc - 5 == dc)) || ((cr - 6 == dr) && (cc - 6 == dc)) || ((cr - 7 == dr) && (cc - 7 == dc)))
		{

			for (int i = cr - 1;i > dr;i--)
			{
				if (arr[i][temp] != 0)
				{
					temp1 = 1;
				}

				temp--;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{

				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 3;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
			{

				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 3;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;

				}

				if (op == 0)
				{
					return false;
				}
			}


		}

		else if ((cr - 1 == dr && cc + 1 == dc) || ((cr - 2 == dr) && (cc + 2 == dc)) || ((cr - 3 == dr) && (cc + 3 == dc)) || ((cr - 4 == dr) && (cc + 4 == dc)) || ((cr - 5 == dr) && (cc + 5 == dc)) || ((cr - 6 == dr) && (cc + 6 == dc)) || ((cr - 7 == dr) && (cc + 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr - 1;i > dr;i--)
			{
				if (arr[i][temp2] != 0)
				{
					temp1 = 1;
				}

				temp2++;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{
				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 3;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
			{

				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 3;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}



		}


		else if ((cr + 1 == dr && cc + 1 == dc) || ((cr + 2 == dr) && (cc + 2 == dc)) || ((cr + 3 == dr) && (cc + 3 == dc)) || ((cr + 4 == dr) && (cc + 4 == dc)) || ((cr + 5 == dr) && (cc + 5 == dc)) || ((cr + 6 == dr) && (cc + 6 == dc)) || ((cr + 7 == dr) && (cc + 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr + 1;i < dr;i++)
			{
				if (arr[i][temp3] != 0)
				{
					temp1 = 1;
				}

				temp3++;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{

				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 3;

					return true;
				}
				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
			{

				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 3;

					return true;
				}
				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}



		}

		else if ((cr + 1 == dr && cc - 1 == dc) || ((cr + 2 == dr) && (cc - 2 == dc)) || ((cr + 3 == dr) && (cc - 3 == dc)) || ((cr + 4 == dr) && (cc - 4 == dc)) || ((cr + 5 == dr) && (cc - 5 == dc)) || ((cr + 6 == dr) && (cc - 6 == dc)) || ((cr + 7 == dr) && (cc - 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr + 1;i < dr;i++)
			{
				if (arr[i][temp4] != 0)
				{
					temp1 = 1;
				}

				temp4--;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{
				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 3;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
			{

				if (op == 1)
				{
					cout << "bishop moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 3;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}





		}

		return false;
	}



};


class queen :public piece
{
public:
	queen()
	{

	}
	queen(string name) :piece(name)
	{

	}
	bool whitemove(int cr, int cc, int dr, int dc, int arr[][8], int op)
	{
		int temp;
		int temp1 = 0;
		temp = cc - 1;
		int temp2 = cc + 1;
		int temp3 = cc + 1;
		int temp4 = cc - 1;
		int temp98 = 0;
		if (cc == dc)
		{
			if (cr > dr)
			{
				for (int i = cr - 1;i > dr;i--)
				{
					if (arr[i][cc] != 0)
					{
						temp98 = 1;
					}
				}
				if (temp98 == 0)
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 40;
						cout << "queen moved  !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else if (temp98 == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 40;
						cout << " queen moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move ";

						return false;
					}

					if (op == 0)
					{
						return false;
					}
				}
			}
			else if (cr < dr)
			{
				for (int i = cr + 1;i < dr;i++)
				{
					if (arr[i][cc] != 0)
					{
						temp98 = 1;
					}
				}
				if (temp98 == 0)
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 40;
						cout << "queen  moved !";

						return true;
					}
					if (op == 0)
					{
						return true;
					}
				}
				else if (temp98 == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 40;
						cout << "queen moved !";

						return true;
					}
					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move";

						return false;
					}

					if (op == 0)
					{
						return false;
					}
				}
			}
		}
		else if (cr == dr)
		{
			int temp = 0;
			if (cc < dc)
			{
				for (int i = cc + 1;i < dc;i++)
				{
					if (arr[cr][i] != 0)
					{
						temp98 = 1;
					}
				}

				if (temp98 == 0)
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 40;
						cout << "queen moved !";

						return true;
					}
					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move";


						return false;
					}
					if (op == 0)
					{
						return false;
					}
				}
			}
			else if (cc > dc)
			{
				for (int i = cc - 1;i > dc;i--)
				{
					if (arr[cr][i] != 0)
					{
						temp98 = 1;
					}
				}

				if (temp98 == 0 && arr[dr][dc] == 0)
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 40;

						cout << "queen moved !";

						return true;
					}
					if (op == 0)
					{
						return true;
					}
				}
				else if (temp98 == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 40;
						cout << "queen moved !";

						return true;
					}
					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move";

						return false;
					}

					if (op == 0)
					{
						return false;
					}
				}
			}
		}


		else if ((cr - 1 == dr && cc - 1 == dc) || ((cr - 2 == dr) && (cc - 2 == dc)) || ((cr - 3 == dr) && (cc - 3 == dc)) || ((cr - 4 == dr) && (cc - 4 == dc)) || ((cr - 5 == dr) && (cc - 5 == dc)) || ((cr - 6 == dr) && (cc - 6 == dc)) || ((cr - 7 == dr) && (cc - 7 == dc)))
		{

			for (int i = cr - 1;i > dr;i--)
			{
				if (arr[i][temp] != 0)
				{
					temp1 = 1;
				}

				temp--;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{
				if (op == 1)
				{


					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 40;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 40;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}
				if (op == 0)
				{
					return false;
				}
			}


		}

		else if ((cr - 1 == dr && cc + 1 == dc) || ((cr - 2 == dr) && (cc + 2 == dc)) || ((cr - 3 == dr) && (cc + 3 == dc)) || ((cr - 4 == dr) && (cc + 4 == dc)) || ((cr - 5 == dr) && (cc + 5 == dc)) || ((cr - 6 == dr) && (cc + 6 == dc)) || ((cr - 7 == dr) && (cc + 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr - 1;i > dr;i--)
			{
				if (arr[i][temp2] != 0)
				{
					temp1 = 1;
				}

				temp2++;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 40;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 40;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}



		}


		else if ((cr + 1 == dr && cc + 1 == dc) || ((cr + 2 == dr) && (cc + 2 == dc)) || ((cr + 3 == dr) && (cc + 3 == dc)) || ((cr + 4 == dr) && (cc + 4 == dc)) || ((cr + 5 == dr) && (cc + 5 == dc)) || ((cr + 6 == dr) && (cc + 6 == dc)) || ((cr + 7 == dr) && (cc + 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr + 1;i < dr;i++)
			{
				if (arr[i][temp3] != 0)
				{
					temp1 = 1;
				}

				temp3++;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{
				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 40;

					return true;
				}
				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 40;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}



		}

		else if ((cr + 1 == dr && cc - 1 == dc) || ((cr + 2 == dr) && (cc - 2 == dc)) || ((cr + 3 == dr) && (cc - 3 == dc)) || ((cr + 4 == dr) && (cc - 4 == dc)) || ((cr + 5 == dr) && (cc - 5 == dc)) || ((cr + 6 == dr) && (cc - 6 == dc)) || ((cr + 7 == dr) && (cc - 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr + 1;i < dr;i++)
			{
				if (arr[i][temp4] != 0)
				{
					temp1 = 1;
				}

				temp4--;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 40;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 40;


					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";


					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}





		}

		return false;

	}

	bool blackmove(int cr, int cc, int dr, int dc, int arr[][8], int op)
	{
		int temp;
		int temp1 = 0;
		temp = cc - 1;
		int temp2 = cc + 1;
		int temp3 = cc + 1;
		int temp4 = cc - 1;
		int temp98 = 0;
		if (cc == dc)
		{
			if (cr > dr)
			{
				for (int i = cr - 1;i > dr;i--)
				{
					if (arr[i][cc] != 0)
					{
						temp98 = 1;
					}
				}
				if (temp98 == 0)
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 4;
						cout << "queen moved  !";

						return true;
					}
					if (op == 0)
					{
						return true;
					}
				}
				else if (temp98 == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 1;
						cout << " queen moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move ";

						return false;
					}
					if (op == 0)
					{
						return false;
					}
				}
			}
			else if (cr < dr)
			{
				for (int i = cr + 1;i < dr;i++)
				{
					if (arr[i][cc] != 0)
					{
						temp98 = 1;
					}
				}
				if (temp98 == 0)
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 4;
						cout << "queen  moved !";


						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else if (temp98 == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 4;
						cout << "queen moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move";

						return false;
					}
					if (op == 0)
					{
						return false;
					}
				}
			}
		}
		else if (cr == dr)
		{
			int temp98 = 0;
			if (cc < dc)
			{
				for (int i = cc + 1;i < dc;i++)
				{
					if (arr[cr][i] != 0)
					{
						temp98 = 1;
					}
				}

				if (temp98 == 0)
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 4;
						cout << "queen moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move";

						return false;
					}

					if (op == 0)
					{
						return false;
					}
				}
			}
			else if (cc > dc)
			{
				for (int i = cc - 1;i > dc;i--)
				{
					if (arr[cr][i] != 0)
					{
						temp98 = 1;
					}
				}

				if (temp98 == 0 && arr[dr][dc] == 0)
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 4;

						cout << "queen moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else if (temp98 == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
				{
					if (op == 1)
					{
						arr[cr][cc] = 0;
						arr[dr][dc] = 4;
						cout << "queen moved !";

						return true;
					}

					if (op == 0)
					{
						return true;
					}
				}
				else
				{
					if (op == 1)
					{
						cout << "invalid move";

						return false;
					}

					if (op == 0)
					{
						return false;
					}
				}
			}
		}


		else if ((cr - 1 == dr && cc - 1 == dc) || ((cr - 2 == dr) && (cc - 2 == dc)) || ((cr - 3 == dr) && (cc - 3 == dc)) || ((cr - 4 == dr) && (cc - 4 == dc)) || ((cr - 5 == dr) && (cc - 5 == dc)) || ((cr - 6 == dr) && (cc - 6 == dc)) || ((cr - 7 == dr) && (cc - 7 == dc)))
		{

			for (int i = cr - 1;i > dr;i--)
			{
				if (arr[i][temp] != 0)
				{
					temp1 = 1;
				}

				temp--;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 4;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 4;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}


		}

		else if ((cr - 1 == dr && cc + 1 == dc) || ((cr - 2 == dr) && (cc + 2 == dc)) || ((cr - 3 == dr) && (cc + 3 == dc)) || ((cr - 4 == dr) && (cc + 4 == dc)) || ((cr - 5 == dr) && (cc + 5 == dc)) || ((cr - 6 == dr) && (cc + 6 == dc)) || ((cr - 7 == dr) && (cc + 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr - 1;i > dr;i--)
			{
				if (arr[i][temp2] != 0)
				{
					temp1 = 1;
				}

				temp2++;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 4;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 4;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}



		}


		else if ((cr + 1 == dr && cc + 1 == dc) || ((cr + 2 == dr) && (cc + 2 == dc)) || ((cr + 3 == dr) && (cc + 3 == dc)) || ((cr + 4 == dr) && (cc + 4 == dc)) || ((cr + 5 == dr) && (cc + 5 == dc)) || ((cr + 6 == dr) && (cc + 6 == dc)) || ((cr + 7 == dr) && (cc + 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr + 1;i < dr;i++)
			{
				if (arr[i][temp3] != 0)
				{
					temp1 = 1;
				}

				temp3++;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 4;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
			{

				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 4;


					return true;
				}

				if (op == 0)
				{
					return true;
				}



			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}



		}

		else if ((cr + 1 == dr && cc - 1 == dc) || ((cr + 2 == dr) && (cc - 2 == dc)) || ((cr + 3 == dr) && (cc - 3 == dc)) || ((cr + 4 == dr) && (cc - 4 == dc)) || ((cr + 5 == dr) && (cc - 5 == dc)) || ((cr + 6 == dr) && (cc - 6 == dc)) || ((cr + 7 == dr) && (cc - 7 == dc)))
		{
			temp1 = 0;
			for (int i = cr + 1;i < dr;i++)
			{
				if (arr[i][temp4] != 0)
				{
					temp1 = 1;
				}

				temp4--;
			}

			if (temp1 == 0 && arr[dr][dc] == 0)
			{
				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 4;

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else if (temp1 == 0 && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
			{
				if (op == 1)
				{
					cout << "queen moved !";
					arr[cr][cc] = 0;
					arr[dr][dc] = 4;


					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}

			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}





		}

		return false;

	}
};



class king :public piece
{
public:
	king()
	{

	}
	king(string name) :piece(name)
	{

	}

	bool blackmove(int cr, int cc, int dr, int dc, int arr[][8], int op, board& o)
	{


		if (((cr == dr - 1) && (cc == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60) && (validmoveblackking(dr, dc, arr, o) == 1))
		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 5;

				return true;
			}
			if (op == 0)
			{
				return true;
			}


		}

		else if (((cr == dr + 1) && (cc == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60) && (validmoveblackking(dr, dc, arr, o) == 1))
		{



			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 5;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (((cr == dr - 1) && (cc + 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60) && (validmoveblackking(dr, dc, arr, o) == 1))
		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 5;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}



		else if (((cr == dr) && (cc - 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60) && (validmoveblackking(dr, dc, arr, o) == 1))
		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 5;

				return true;
			}

			if (op == 0)
			{
				return true;
			}

		}


		else if (((cr + 1 == dr) && (cc + 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60) && (validmoveblackking(dr, dc, arr, o) == 1))
		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 5;

				return true;
			}

			if (op == 0)
			{
				return true;
			}

		}



		else if (((cr - 1 == dr) && (cc + 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60) && (validmoveblackking(dr, dc, arr, o) == 1))
		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 5;

				return true;
			}

			if (op == 0)
			{
				return true;
			}


		}


		else if (((cr + 1 == dr) && (cc - 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60) && (validmoveblackking(dr, dc, arr, o) == 1))
		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 5;

				return true;
			}

			if (op == 0)
			{
				return true;
			}

		}



		else if (((cr - 1 == dr) && (cc - 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60) && (validmoveblackking(dr, dc, arr, o) == 1))
		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 5;

				return true;
			}

			if (op == 0)
			{
				return true;
			}


		}
		else if (((cr == dr) && (cc + 1 == dc)) &&
			(arr[dr][dc] == 0 || arr[dr][dc] == 10 || arr[dr][dc] == 20 ||
				arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60) &&
			(validmoveblackking(dr, dc, arr, o) == 1))
		{
			if (op == 1) { arr[cr][cc] = 0; arr[dr][dc] = 5; return true; }
			if (op == 0) { return true; }
		}

		else
		{

			if (op == 1)
			{

				cout << "invalid move !";
				return false;
			}

			if (op == 0)
			{
				return false;
			}

		}




		return false;


	}





	bool whitemove(int cr, int cc, int dr, int dc, int arr[][8], int op, board& o)
	{


		if (((cr == dr + 1) && (cc == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6) && (validmovewhiteking(dr, dc, arr, o) == 1))
		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 50;

				return true;
			}

			if (op == 0)
			{
				return true;
			}

		}



		else if (((cr == dr - 1) && (cc == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6) && (validmovewhiteking(dr, dc, arr, o) == 1))
		{


			if (op == 1)
			{

				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 50;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (((cr == dr) && (cc + 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6) && (validmovewhiteking(dr, dc, arr, o) == 1))

		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 50;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}



		else if (((cr == dr) && (cc - 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6) && (validmovewhiteking(dr, dc, arr, o) == 1))

		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 50;

				return true;
			}

			if (op == 0)
			{
				return true;
			}

		}


		else if (((cr + 1 == dr) && (cc + 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6) && (validmovewhiteking(dr, dc, arr, o) == 1))


		{
			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 50;

				return true;
			}

			if (op == 0)
			{
				return true;
			}

		}



		else if (((cr - 1 == dr) && (cc + 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6) && (validmovewhiteking(dr, dc, arr, o) == 1))

		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 50;

				return true;
			}

			if (op == 0)
			{
				return true;
			}


		}


		else if (((cr + 1 == dr) && (cc - 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6) && (validmovewhiteking(dr, dc, arr, o) == 1))

		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 50;

				return true;
			}

			if (op == 0)
			{
				return true;
			}

		}



		else if (((cr - 1 == dr) && (cc - 1 == dc)) && (arr[dr][dc] == 0 || arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6) && (validmovewhiteking(dr, dc, arr, o) == 1))

		{

			if (op == 1)
			{
				cout << "king moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 50;
				return true;
			}

			if (op == 0)
			{
				return true;
			}

		}

		else
		{
			if (op == 1)
			{

				cout << "invalid move !";

				return false;
			}

			if (op == 0)
			{
				return false;
			}

		}


		return false;



	}


};


class pawn :public piece
{

public:

	pawn()
	{

	}
	pawn(string name) :piece(name)
	{

	}


	bool whitemove(int cr, int cc, int dr, int dc, int arr[][8], int op)
	{
		if (cr == 6 && (dr == 5 || dr == 4) && (cc == dc) && arr[dr][dc] == 0)
		{
			if (dr == 4 && arr[cr - 1][cc] == 0)
			{

				if (op == 1)
				{
					arr[cr][cc] = 0;
					arr[dr][dc] = 60;

					cout << "pawn moved!";

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}
			else if (dr == 5)
			{
				if (op == 1)
				{
					arr[cr][cc] = 0;
					arr[dr][dc] = 60;
					cout << "pawn moved !";

					return true;
				}

				if (op == 0)
				{
					return true;
				}

			}
			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}
		}

		else if (dr == (cr - 1) && (cc == dc) && arr[dr][dc] == 0)
		{
			if (op == 1)
			{
				arr[cr][cc] = 0;
				arr[dr][dc] = 60;
				cout << "pawn moved !";

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == (cr - 1) && (cc == dc + 1) || (cc == dc - 1) && (arr[dr][dc] == 1 || arr[dr][dc] == 2 || arr[dr][dc] == 3 || arr[dr][dc] == 4 || arr[dr][dc] == 5 || arr[dr][dc] == 6))
		{
			if (op == 1)
			{
				cout << "pawn moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 60;

				return true;
			}

			if (op == 0)
			{

				return true;
			}
		}


		else
		{
			if (op == 1)
			{
				cout << "invalid move !";

				return false;
			}
			if (op == 0)
			{
				return false;
			}
		}

		return false;

	}


	bool blackmove(int cr, int cc, int dr, int dc, int arr[][8], int op)
	{
		if (cr == 1 && (dr == 2 || dr == 3) && (cc == dc) && arr[dr][dc] == 0)
		{
			if (dr == 3 && arr[cr + 1][cc] == 0)
			{

				if (op == 1)
				{
					arr[cr][cc] = 0;
					arr[dr][dc] = 6;

					cout << "pawn moved!";

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}
			else if (dr == 2)
			{
				if (op == 1)
				{
					arr[cr][cc] = 0;
					arr[dr][dc] = 6;

					cout << "pawn moved !";

					return true;
				}

				if (op == 0)
				{
					return true;
				}
			}
			else
			{
				if (op == 1)
				{
					cout << "invalid move !";

					return false;
				}

				if (op == 0)
				{
					return false;
				}
			}
		}

		else if (dr == (cr + 1) && (cc == dc) && arr[dr][dc] == 0)
		{
			if (op == 1)
			{
				arr[cr][cc] = 0;
				arr[dr][dc] = 6;
				cout << "pawn moved !";

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}

		else if (dr == (cr + 1) && (cc == dc + 1) || (cc == dc - 1) && (arr[dr][dc] == 10 || arr[dr][dc] == 20 || arr[dr][dc] == 30 || arr[dr][dc] == 40 || arr[dr][dc] == 50 || arr[dr][dc] == 60))
		{

			if (op == 1)
			{
				cout << "pawn moved !";
				arr[cr][cc] = 0;
				arr[dr][dc] = 6;

				return true;
			}

			if (op == 0)
			{
				return true;
			}
		}


		else
		{
			if (op == 1)
			{
				cout << "invalid move !";

				return false;
			}

			if (op == 0)
			{
				return false;
			}
		}

		return false;

	}
};



class board
{
public:
	rook obj;
	knight objj;
	bishop o1;
	queen o;
	king object;
	pawn objects;
public:
	board()
	{

	}

};



bool validmoveblackking(int dr, int dc, int arr[][8], board& obj)
{
	int  temp = 0;
	int kingr;
	int kingc;
	int save = arr[dr][dc];
	for (int i = 0;i < 8;i++)
	{

		for (int j = 0;j < 8;j++)
		{

			if (arr[i][j] == 5)
			{
				arr[i][j] = 0;
				kingr = i;
				kingc = j;

			}
		}
	}

	arr[dr][dc] = 0;
	for (int i = 0;i < 8;i++)
	{

		for (int j = 0;j < 8;j++)
		{
			if (arr[i][j] == 10)
			{
				temp += obj.obj.whitemove(i, j, dr, dc, arr, 0);
			}
			if (arr[i][j] == 20)
			{
				temp += obj.objj.whitemove(i, j, dr, dc, arr, 0);
			}
			if (arr[i][j] == 30)
			{
				temp += obj.o1.whitemove(i, j, dr, dc, arr, 0);
			}
			if (arr[i][j] == 40)
			{
				temp += obj.o.whitemove(i, j, dr, dc, arr, 0);
			}

			if (arr[i][j] == 60)
			{
				temp += obj.objects.whitemove(i, j, dr, dc, arr, 0);
			}

		}



	}
	arr[dr][dc] = save;
	arr[kingr][kingc] = 5;


	if (temp == 0)
	{
		return true;
	}

	else
	{
		return false;
	}


}





bool validmovewhiteking(int dr, int dc, int arr[][8], board& obj)
{
	int  temp = 0;
	int kingr;
	int kingc;
	int save = arr[dr][dc];
	arr[dr][dc] = 0;
	for (int i = 0;i < 8;i++)
	{

		for (int j = 0;j < 8;j++)
		{
			if (arr[i][j] == 50)
			{
				arr[i][j] = 0;

				kingr = i;
				kingc = j;

			}
		}
	}
	for (int i = 0;i < 8;i++)
	{
		for (int j = 0;j < 8;j++)
		{
			if (arr[i][j] == 1)
			{
				temp += obj.obj.blackmove(i, j, dr, dc, arr, 0);
			}
			if (arr[i][j] == 2)
			{
				temp += obj.objj.blackmove(i, j, dr, dc, arr, 0);
			}
			if (arr[i][j] == 3)
			{
				temp += obj.o1.blackmove(i, j, dr, dc, arr, 0);
			}
			if (arr[i][j] == 4)
			{
				temp += obj.o.blackmove(i, j, dr, dc, arr, 0);
			}

			if (arr[i][j] == 6)
			{
				temp += obj.objects.blackmove(i, j, dr, dc, arr, 0);
			}

		}





	}

	cout << temp;
	arr[dr][dc] = save;
	arr[kingr][kingc] = 50;
	if (temp == 0)
	{
		return true;
	}

	else
	{
		return false;
	}


}




bool checkmateblack(int arr[][8], board& obj)
{

	int kingrow;
	int kingcol;

	for (int i = 0;i < 8;i++)
	{
		for (int j = 0;j < 8;j++)
		{

			if (arr[i][j] == 5)
			{
				kingrow = i;
				kingcol = j;
			}


		}
	}

	bool arrr[8];


	for (int i = 0;i < 8;i++)
	{
		arrr[i] = 0;
	}


	if (kingcol + 1 >= 0 && kingcol + 1 <= 7)
	{
		arrr[0] = obj.object.blackmove(kingrow, kingcol, kingrow, kingcol + 1, arr, 0, obj);
	}
	if (kingcol - 1 >= 0 && kingcol - 1 <= 7)
	{
		arrr[1] = obj.object.blackmove(kingrow, kingcol, kingrow, kingcol - 1, arr, 0, obj);
	}
	if (kingrow + 1 >= 0 && kingrow + 1 <= 7)
	{
		arrr[2] = obj.object.blackmove(kingrow, kingcol, kingrow + 1, kingcol, arr, 0, obj);
	}

	if (kingrow - 1 >= 0 && kingrow - 1 <= 7)
	{
		arrr[3] = obj.object.blackmove(kingrow, kingcol, kingrow - 1, kingcol, arr, 0, obj);
	}

	if ((kingcol + 1 >= 0 && kingcol + 1 <= 7) && (kingrow + 1 >= 0 && kingrow + 1 <= 7))
	{
		arrr[4] = obj.object.blackmove(kingrow, kingcol, kingrow + 1, kingcol + 1, arr, 0, obj);
	}

	if ((kingcol - 1 >= 0 && kingcol - 1 <= 7) && (kingrow + 1 >= 0 && kingrow + 1 <= 7))
	{
		arrr[5] = obj.object.blackmove(kingrow, kingcol, kingrow + 1, kingcol - 1, arr, 0, obj);
	}

	if ((kingcol + 1 >= 0 && kingcol + 1 <= 7) && (kingrow - 1 >= 0 && kingrow - 1 <= 7))
	{
		arrr[6] = obj.object.blackmove(kingrow, kingcol, kingrow - 1, kingcol + 1, arr, 0, obj);
	}

	if ((kingcol - 1 >= 0 && kingcol - 1 <= 7) && (kingrow - 1 >= 0 && kingrow - 1 <= 7))
	{
		arrr[7] = obj.object.blackmove(kingrow, kingcol, kingrow - 1, kingcol - 1, arr, 0, obj);
	}


	int sum = 0;
	for (int i = 0;i < 8;i++)
	{
		sum += arrr[i];
	}

	int sum1 = 0;
	int temp = 0;
	bool temporary;
	int temp1 = 0;
	int temp2 = 0;
	int temp3 = 0;
	int temp4 = 0;
	int temp5 = 0;
	int temp6 = 0;
	for (int i = 0;i < 8;i++)
	{

		for (int j = 0;j < 8;j++)
		{

			if (arr[i][j] == 10)
			{
				temp1 = 0;
				temporary = obj.obj.whitemove(i, j, kingrow, kingcol, arr, 0);



				if (temporary == 1)
				{

					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 1)
							{
								temp1 += obj.obj.blackmove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 2)
							{

								temp1 += obj.objj.blackmove(k, l, i, j, arr, 0);

							}


							else if (arr[k][l] == 3)
							{

								temp1 += obj.o1.blackmove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 4)
							{
								temp1 += obj.o.blackmove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 5)
							{

								temp1 += obj.object.blackmove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 6)
							{

								temp1 += obj.objects.blackmove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp1;

					if (temp1 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}
				}


			}



			else if (arr[i][j] == 20)
			{

				temp2 = 0;
				temporary = obj.objj.whitemove(i, j, kingrow, kingcol, arr, 0);



				if (temporary == 1)
				{
					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 1)
							{
								temp2 += obj.obj.blackmove(k, l, i, j, arr, 0);
							}

							else if (arr[k][l] == 2)
							{

								temp2 += obj.objj.blackmove(k, l, i, j, arr, 0);
							}


							else if (arr[k][l] == 3)
							{

								temp2 += obj.o1.blackmove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 4)
							{
								temp2 += obj.o.blackmove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 5)
							{

								temp2 += obj.object.blackmove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 6)
							{

								temp2 += obj.objects.blackmove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp2;

					if (temp2 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}
				}

			}

			else if (arr[i][j] == 30)
			{
				temp3 = 0;
				temporary = obj.o1.whitemove(i, j, kingrow, kingcol, arr, 0);




				if (temporary == 1)
				{
					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 1)
							{
								temp3 += obj.obj.blackmove(k, l, i, j, arr, 0);
							}

							else if (arr[k][l] == 2)
							{

								temp3 += obj.objj.blackmove(k, l, i, j, arr, 0);
							}


							else if (arr[k][l] == 3)
							{

								temp3 += obj.o1.blackmove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 4)
							{
								temp3 += obj.o.blackmove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 5)
							{

								temp3 += obj.object.blackmove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 6)
							{

								temp3 += obj.objects.blackmove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp3;

					if (temp3 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}
				}


			}

			else if (arr[i][j] == 40)
			{
				temp4 = 0;
				temporary = obj.o.whitemove(i, j, kingrow, kingcol, arr, 0);




				if (temporary == 1)
				{
					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 1)
							{
								temp4 += obj.obj.blackmove(k, l, i, j, arr, 0);
							}

							else if (arr[k][l] == 2)
							{

								temp4 += obj.objj.blackmove(k, l, i, j, arr, 0);
							}


							else if (arr[k][l] == 3)
							{

								temp4 += obj.o1.blackmove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 4)
							{
								temp4 += obj.o.blackmove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 5)
							{

								temp4 += obj.object.blackmove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 6)
							{

								temp4 += obj.objects.blackmove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp4;

					if (temp4 - 1 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}
				}




			}

			else if (arr[i][j] == 50)
			{
				temp5 = 0;
				temporary = obj.object.whitemove(i, j, kingrow, kingcol, arr, 0, obj);



				if (temporary == 1)
				{
					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 1)
							{
								temp5 += obj.obj.blackmove(k, l, i, j, arr, 0);
							}

							else if (arr[k][l] == 2)
							{

								temp5 += obj.objj.blackmove(k, l, i, j, arr, 0);
							}


							else if (arr[k][l] == 3)
							{

								temp5 += obj.o1.blackmove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 4)
							{
								temp5 += obj.o.blackmove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 5)
							{

								temp5 += obj.object.blackmove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 6)
							{

								temp5 += obj.objects.blackmove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp5;

					if (temp5 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}
				}




			}



			else if (arr[i][j] == 60)
			{
				temp6 = 0;
				temporary = obj.objects.whitemove(i, j, kingrow, kingcol, arr, 0);


				if (temporary == 1)
				{
					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 1)
							{
								temp6 += obj.obj.blackmove(k, l, i, j, arr, 0);
							}

							else if (arr[k][l] == 2)
							{

								temp6 += obj.objj.blackmove(k, l, i, j, arr, 0);
							}


							else if (arr[k][l] == 3)
							{

								temp6 += obj.o1.blackmove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 4)
							{
								temp6 += obj.o.blackmove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 5)
							{

								temp6 += obj.object.blackmove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 6)
							{

								temp6 += obj.objects.blackmove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp6;

					if (temp6 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}

				}




			}

		}

	}








	return false;

}



bool checkmatewhite(int arr[][8], board& obj)
{

	int kingrow;
	int kingcol;

	for (int i = 0;i < 8;i++)
	{
		for (int j = 0;j < 8;j++)
		{

			if (arr[i][j] == 50)
			{
				kingrow = i;
				kingcol = j;
			}


		}
	}

	bool arrr[8];


	for (int i = 0;i < 8;i++)
	{
		arrr[i] = 0;
	}


	if (kingcol + 1 >= 0 && kingcol + 1 <= 7)
	{
		arrr[0] = obj.object.whitemove(kingrow, kingcol, kingrow, kingcol + 1, arr, 0, obj);
	}
	if (kingcol - 1 >= 0 && kingcol - 1 <= 7)
	{
		arrr[1] = obj.object.whitemove(kingrow, kingcol, kingrow, kingcol - 1, arr, 0, obj);
	}
	if (kingrow + 1 >= 0 && kingrow + 1 <= 7)
	{
		arrr[2] = obj.object.whitemove(kingrow, kingcol, kingrow + 1, kingcol, arr, 0, obj);
	}

	if (kingrow - 1 >= 0 && kingrow - 1 <= 7)
	{
		arrr[3] = obj.object.whitemove(kingrow, kingcol, kingrow - 1, kingcol, arr, 0, obj);
	}

	if ((kingcol + 1 >= 0 && kingcol + 1 <= 7) && (kingrow + 1 >= 0 && kingrow + 1 <= 7))
	{
		arrr[4] = obj.object.whitemove(kingrow, kingcol, kingrow + 1, kingcol + 1, arr, 0, obj);
	}

	if ((kingcol - 1 >= 0 && kingcol - 1 <= 7) && (kingrow + 1 >= 0 && kingrow + 1 <= 7))
	{
		arrr[5] = obj.object.whitemove(kingrow, kingcol, kingrow + 1, kingcol - 1, arr, 0, obj);
	}

	if ((kingcol + 1 >= 0 && kingcol + 1 <= 7) && (kingrow - 1 >= 0 && kingrow - 1 <= 7))
	{
		arrr[6] = obj.object.whitemove(kingrow, kingcol, kingrow - 1, kingcol + 1, arr, 0, obj);
	}

	if ((kingcol - 1 >= 0 && kingcol - 1 <= 7) && (kingrow - 1 >= 0 && kingrow - 1 <= 7))
	{
		arrr[7] = obj.object.whitemove(kingrow, kingcol, kingrow - 1, kingcol - 1, arr, 0, obj);
	}


	int sum = 0;
	for (int i = 0;i < 8;i++)
	{
		sum += arrr[i];
	}

	int sum1 = 0;
	int temp = 0;
	bool temporary;
	int temp1 = 0;
	int temp2 = 0;
	int temp3 = 0;
	int temp4 = 0;
	int temp5 = 0;
	int temp6 = 0;
	for (int i = 0;i < 8;i++)
	{

		for (int j = 0;j < 8;j++)
		{

			if (arr[i][j] == 10)
			{
				temp1 = 0;
				temporary = obj.obj.blackmove(i, j, kingrow, kingcol, arr, 0);



				if (temporary == 1)
				{

					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 1)
							{
								temp1 += obj.obj.whitemove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 20)
							{

								temp1 += obj.objj.whitemove(k, l, i, j, arr, 0);

							}


							else if (arr[k][l] == 30)
							{

								temp1 += obj.o1.whitemove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 40)
							{
								temp1 += obj.o.whitemove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 50)
							{

								temp1 += obj.object.whitemove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 60)
							{

								temp1 += obj.objects.whitemove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp1;
					cout << sum << " " << temp1 << endl;
					if (temp1 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}
				}


			}



			else if (arr[i][j] == 2)
			{

				temp2 = 0;
				temporary = obj.objj.blackmove(i, j, kingrow, kingcol, arr, 0);



				if (temporary == 1)
				{
					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 10)
							{
								temp2 += obj.obj.whitemove(k, l, i, j, arr, 0);
							}

							else if (arr[k][l] == 20)
							{

								temp2 += obj.objj.whitemove(k, l, i, j, arr, 0);
							}


							else if (arr[k][l] == 30)
							{

								temp2 += obj.o1.whitemove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 40)
							{
								temp2 += obj.o.whitemove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 50)
							{

								temp2 += obj.object.whitemove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 60)
							{

								temp2 += obj.objects.whitemove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp2;
					cout << sum << " " << temp2 << endl;
					if (temp2 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}
				}

			}

			else if (arr[i][j] == 3)
			{
				temp3 = 0;
				temporary = obj.o1.blackmove(i, j, kingrow, kingcol, arr, 0);




				if (temporary == 1)
				{
					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 10)
							{
								temp3 += obj.obj.whitemove(k, l, i, j, arr, 0);
							}

							else if (arr[k][l] == 20)
							{

								temp3 += obj.objj.whitemove(k, l, i, j, arr, 0);
							}


							else if (arr[k][l] == 30)
							{

								temp3 += obj.o1.whitemove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 40)
							{
								temp3 += obj.o.whitemove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 50)
							{

								temp3 += obj.object.whitemove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 60)
							{

								temp3 += obj.objects.whitemove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp3;

					if (temp3 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}
				}


			}

			else if (arr[i][j] == 4)
			{
				temp4 = 0;
				temporary = obj.o.blackmove(i, j, kingrow, kingcol, arr, 0);




				if (temporary == 1)
				{
					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 10)
							{
								temp4 += obj.obj.whitemove(k, l, i, j, arr, 0);
							}

							else if (arr[k][l] == 20)
							{

								temp4 += obj.objj.whitemove(k, l, i, j, arr, 0);
							}


							else if (arr[k][l] == 30)
							{

								temp4 += obj.o1.whitemove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 40)
							{
								temp4 += obj.o.whitemove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 50)
							{

								temp4 += obj.object.whitemove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 60)
							{

								temp4 += obj.objects.whitemove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp4;
					cout << sum << " " << temp4 << endl;
					if (temp4 - 1 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}
				}




			}

			else if (arr[i][j] == 5)
			{
				temp5 = 0;
				temporary = obj.object.blackmove(i, j, kingrow, kingcol, arr, 0, obj);



				if (temporary == 1)
				{
					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 10)
							{
								temp5 += obj.obj.whitemove(k, l, i, j, arr, 0);
							}

							else if (arr[k][l] == 20)
							{

								temp5 += obj.objj.whitemove(k, l, i, j, arr, 0);
							}


							else if (arr[k][l] == 30)
							{

								temp5 += obj.o1.whitemove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 40)
							{
								temp5 += obj.o.whitemove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 50)
							{

								temp5 += obj.object.whitemove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 60)
							{

								temp5 += obj.objects.whitemove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp5;

					if (temp5 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}
				}




			}



			else if (arr[i][j] == 6)
			{
				temp6 = 0;
				temporary = obj.objects.blackmove(i, j, kingrow, kingcol, arr, 0);


				if (temporary == 1)
				{
					for (int k = 0;k < 8;k++)
					{
						for (int l = 0;l < 8;l++)
						{
							if (arr[k][l] == 10)
							{
								temp6 += obj.obj.whitemove(k, l, i, j, arr, 0);
							}

							else if (arr[k][l] == 20)
							{

								temp6 += obj.objj.whitemove(k, l, i, j, arr, 0);
							}


							else if (arr[k][l] == 30)
							{

								temp6 += obj.o1.whitemove(k, l, i, j, arr, 0);

							}

							else if (arr[k][l] == 40)
							{
								temp6 += obj.o.whitemove(k, l, i, j, arr, 0);


							}

							else if (arr[k][l] == 50)
							{

								temp6 += obj.object.whitemove(k, l, i, j, arr, 0, obj);
							}


							else if (arr[k][l] == 60)
							{

								temp6 += obj.objects.whitemove(k, l, i, j, arr, 0);
							}

						}
					}

					sum1 += temp6;

					if (temp6 == 0 && temporary == 1)
					{
						if (sum == 0)
						{
							return true;
						}
					}

				}




			}

		}

	}








	return false;

}


//MAIN MENU 

int mainmenu()
{
	cin.exceptions(ios::failbit);
	system("color 70");
	cout << endl << endl << endl << endl;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, (15 << 4) | 15);
	SetConsoleTextAttribute(hConsole, (7 << 4) | 8);
	cout << "                          ";
	SetConsoleTextAttribute(hConsole, (7 << 4) | 1);
	cout << "==============================";
	SetConsoleTextAttribute(hConsole, (7 << 4) | 8);
	cout << endl;

	cout << "                          ";
	for (int i = 0;i < 8;i++)
	{
		SetConsoleTextAttribute(hConsole, (7 << 4) | 4);
		cout << "||";
		if (i == 4)
		{
			SetConsoleTextAttribute(hConsole, (15 << 4) | 0);
			cout << "   ⚔️ THE ROYAL BATTLE    ";
		}
		if (i == 5)
		{
			SetConsoleTextAttribute(hConsole, (15 << 4) | 0);
			cout << "          CHESS ⚔️        ";
		}
		if (i == 7)
		{
			SetConsoleTextAttribute(hConsole, (4 << 4) | 15);
			cout << "\"THE CHESS BATTLE GROUNDS\"";
		}
		if (i == 2)
		{
			SetConsoleTextAttribute(hConsole, (7 << 4) | 8);
			cout << "  ";
			SetConsoleTextAttribute(hConsole, (0 << 4) | 7);

			cout << "✨✨✨WELCOME TO✨✨✨";
			SetConsoleTextAttribute(hConsole, (7 << 4) | 8);
			cout << "  ";
		}
		if (i != 4 && i != 5 && i != 7 && i != 2)
		{
			SetConsoleTextAttribute(hConsole, (7 << 4) | 8);
			cout << "                          ";
		}
		SetConsoleTextAttribute(hConsole, (7 << 4) | 4);
		cout << "||";
		cout << endl;

		cout << "                          ";
	}
	SetConsoleTextAttribute(hConsole, (7 << 4) | 8);


	cout << "";

	SetConsoleTextAttribute(hConsole, (7 << 4) | 1);
	cout << "==============================";




	cout << endl << endl;
	cout << "                                      ";
	SetConsoleTextAttribute(hConsole, (7 << 4) | 0);
	cout << "MAIN MENU";
	cout << endl << endl << endl << endl;


	cout << "       1 - START GAME " << endl;
	cout << "       2 - EXIT GAME " << endl;



	int choice;

	while (true)
	{
		try
		{
			cout << "ENTER YOUR CHOICE :";
			cin >> choice;
			while (choice != 1 && choice != 2)
			{
				cout << "ENTER THE VALID CHOICE :";
				cin >> choice;
			}

			if (choice == 1 || choice == 2)
			{
				break;
			}


		}


		catch (exception& e)
		{
			cout << "INVALID INPUT !" << endl;
			cin.clear();
			cin.ignore(1000, '\n');

		}
	}



	return choice;
}


void checker(int arr[][8], int i, int j)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (arr[i][j] == 1 || arr[i][j] == 2 || arr[i][j] == 3 || arr[i][j] == 4 || arr[i][j] == 5 || arr[i][j] == 6)
	{
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		GetConsoleScreenBufferInfo(hConsole, &csbi);

		int currentColor = csbi.wAttributes;

		int bg = currentColor & 0xF0;
		SetConsoleTextAttribute(hConsole, bg | 8);

	}
	else if (arr[i][j] == 10 || arr[i][j] == 20 || arr[i][j] == 30 || arr[i][j] == 40 || arr[i][j] == 50 || arr[i][j] == 60)
	{
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		GetConsoleScreenBufferInfo(hConsole, &csbi);

		int currentColor = csbi.wAttributes;

		int bg = currentColor & 0xF0;
		SetConsoleTextAttribute(hConsole, bg | 15);

	}

	if (arr[i][j] == 10)
	{

		cout << "♖";
	}


	else if (arr[i][j] == 20)
	{
		cout << "♘";
	}


	else if (arr[i][j] == 30)
	{
		cout << "♗";
	}

	else if (arr[i][j] == 40)
	{
		cout << "♕";
	}


	else if (arr[i][j] == 50)
	{
		cout << "♔";
	}


	else if (arr[i][j] == 1)
	{
		cout << "♜";
	}

	else if (arr[i][j] == 2)
	{
		cout << "♞";

	}

	else if (arr[i][j] == 3)
	{
		cout << "♝";

	}

	else if (arr[i][j] == 4)
	{
		cout << "♛";

	}

	else if (arr[i][j] == 5)
	{

		cout << "♚";
	}

	else if (arr[i][j] == 6)
	{

		cout << "♟";

	}

	else if (arr[i][j] == 60)
	{
		cout << "♙";
	}


	else
	{
		cout << " ";
	}


}




// display function  
void setupdisplay(int arr[][8], string player1, string player2)
{

	cout << endl << endl << endl << endl << endl << endl << endl;
	system("color F0");
	cout << "                                        " << "|👤|player 1: " << player1 << endl << endl;
	char chrac = 96;
	cout << "                                   ";
	for (int i = 0;i < 8;i++)
	{
		chrac = chrac + 1;
		cout << chrac << "   ";
	}
	cout << endl;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


	SetConsoleTextAttribute(hConsole, (15 << 4) | 0);

	cout << "                                ";
	for (int i = 0;i < 8;i++)
	{
		cout << 8 - i << " ";
		SetConsoleOutputCP(CP_UTF8);



		if (i % 2 != 0)
		{
			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (15 << 4) | 15);
			cout << endl << "                                  ";

			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "  ";
			checker(arr, i, 0);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "  ";
			checker(arr, i, 1);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "  ";
			checker(arr, i, 2);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "  ";
			checker(arr, i, 3);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "  ";
			checker(arr, i, 4);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "  ";
			checker(arr, i, 5);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "  ";
			checker(arr, i, 6);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "  ";
			checker(arr, i, 7);
			cout << " ";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "    ";

			SetConsoleTextAttribute(hConsole, (15 << 4) | 15);
			cout << endl << "                                  ";

			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "  ";
			checker(arr, i, 0);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "  ";
			checker(arr, i, 1);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "  ";
			checker(arr, i, 2);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "  ";
			checker(arr, i, 3);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "  ";
			checker(arr, i, 4);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "  ";
			checker(arr, i, 5);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (7 << 4) | 15);
			cout << "  ";
			checker(arr, i, 6);
			cout << " ";
			SetConsoleTextAttribute(hConsole, (0 << 4) | 1);
			cout << "  ";
			checker(arr, i, 7);
			cout << " ";

		}



		SetConsoleTextAttribute(hConsole, (15 << 4) | 0);
		cout << " ";
		cout << 8 - i;

		cout << endl << "                                ";

	}
	cout << "   ";
	chrac = 96;
	for (int i = 0;i < 8;i++)
	{
		chrac = chrac + 1;
		cout << chrac << "   ";
	}
	cout << endl << endl;
	cout << "                                         " << "|👤|player2: " << player2 << endl << endl;
}



bool iswhite(int arr[][8])
{
	int temp = 0;

	for (int i = 0;i < 8;i++)
	{

		for (int j = 0;j < 8;j++)
		{
			if (arr[i][j] == 50)
			{
				temp = 1;
			}
		}
	}


	if (temp == 0)
	{
		return false;
	}

	else
	{
		return true;
	}

}


bool isblack(int arr[][8])
{
	int temp = 0;

	for (int i = 0;i < 8;i++)
	{

		for (int j = 0;j < 8;j++)
		{
			if (arr[i][j] == 5)
			{
				temp = 1;
			}
		}
	}


	if (temp == 0)
	{
		return false;
	}

	else
	{
		return true;
	}

}


void gameplay(int arr[][8], string player1, string player2)
{

	bool temp = 0;
	int checker = 0;
	int check = 0;
	bool temp1 = 0;
	int checker1 = 0;
	int check1 = 0;

	int currentrow;
	int currentcol;
	int desirerow;
	int desirecol;

	int choice;
	board obj;
	string des;
	string mov;

	bool iscontinue = true;

	while (iscontinue)
	{


		cout << "  \a whites turn :";

		cout << "enter the position of piece to move :";

		cin >> mov;

		cout << "enter the desired position :";

		cin >> des;



		while ((mov[0] < 'a' || mov[0]>'h') || (mov[1] < '1' || mov[1]>'8'))
		{

			cout << "out of range current position enter the valid :";
			cin >> mov;

		}


		while ((des[0] < 'a' || des[0]>'h') || (des[1] < '1' || des[1]>'8'))
		{

			cout << "out of range desired  position enter the valid :";
			cin >> des;

		}

		bool checker = true;
		while (checker)
		{


			currentrow = 8 - (mov[1] - '0');
			desirerow = 8 - (des[1] - '0');

			if (mov[0] == 'a')
			{
				currentcol = 0;
			}
			else if (mov[0] == 'b')
			{
				currentcol = 1;
			}
			else if (mov[0] == 'c')
			{
				currentcol = 2;
			}
			else if (mov[0] == 'd')
			{
				currentcol = 3;
			}
			else if (mov[0] == 'e')
			{
				currentcol = 4;
			}
			else if (mov[0] == 'f')
			{
				currentcol = 5;
			}
			else if (mov[0] == 'g')
			{
				currentcol = 6;
			}
			else if (mov[0] == 'h')
			{
				currentcol = 7;
			}




			if (des[0] == 'a')
			{
				desirecol = 0;
			}
			else if (des[0] == 'b')
			{
				desirecol = 1;
			}
			else if (des[0] == 'c')
			{
				desirecol = 2;
			}
			else if (des[0] == 'd')
			{
				desirecol = 3;
			}
			else if (des[0] == 'e')
			{
				desirecol = 4;
			}
			else if (des[0] == 'f')
			{
				desirecol = 5;
			}
			else if (des[0] == 'g')
			{
				desirecol = 6;
			}
			else if (des[0] == 'h')
			{
				desirecol = 7;
			}


			if (arr[currentrow][currentcol] != 10 && arr[currentrow][currentcol] != 20 && arr[currentrow][currentcol] != 30 && arr[currentrow][currentcol] != 40 && arr[currentrow][currentcol] != 50 && arr[currentrow][currentcol] != 60)
			{




				cout << "enter the valid current  position :";
				cin >> mov;

				cout << "enter the valid desire position :";
				cin >> des;



			}


			else
			{
				checker = false;
			}

		}

		if (arr[currentrow][currentcol] == 10)
		{
			obj.obj.whitemove(currentrow, currentcol, desirerow, desirecol, arr, 1);
		}
		else if (arr[currentrow][currentcol] == 20)
		{

			obj.objj.whitemove(currentrow, currentcol, desirerow, desirecol, arr, 1);

		}

		else if (arr[currentrow][currentcol] == 30)
		{

			obj.o1.whitemove(currentrow, currentcol, desirerow, desirecol, arr, 1);
		}


		else if (arr[currentrow][currentcol] == 40)
		{
			obj.o.whitemove(currentrow, currentcol, desirerow, desirecol, arr, 1);
		}


		else if (arr[currentrow][currentcol] == 50)
		{

			obj.object.whitemove(currentrow, currentcol, desirerow, desirecol, arr, 1, obj);

		}

		else if (arr[currentrow][currentcol] == 60)
		{
			obj.objects.whitemove(currentrow, currentcol, desirerow, desirecol, arr, 1);
		}

		for (int i = 0;i < 8;i++)
		{
			if (arr[0][i] == 60)
			{
				cout << "pawn reached last row !" << endl;
				cout << "what you want to promote it " << endl << endl;

				cout << "1- rook" << endl;
				cout << "2- bishop" << endl;
				cout << "3- knight" << endl;
				cout << "4 queen" << endl;

				cin >> choice;

				if (choice == 1)
				{
					arr[0][i] = 10;
				}

				else if (choice == 2)
				{
					arr[0][i] = 30;
				}

				else if (choice == 3)
				{
					arr[0][i] = 20;
				}

				else if (choice == 4)
				{
					arr[0][i] = 40;
				}

				else
				{
					cout << "invalid choice!";
				}
			}
		}
		system("pause");
		system("cls");


		setupdisplay(arr, player1, player2);


		bool res = isblack(arr);
		bool res1 = iswhite(arr);


		if (res == 0)
		{

			cout << "player white winssssssssssss!!!!";
			break;
		}

		else if (res1 == 0)
		{

			cout << "player black winnsss !";

			break;
		}

		bool result = checkmateblack(arr, obj);

		if (result == 1)
		{
			cout << "white wins !!!!!!!!!!!!!";

			break;
		}


		setupdisplay(arr, player1, player2);






		cout << "  \a blacks turn :";

		cout << "enter the position of piece to move :";

		cin >> mov;

		cout << "enter the desired podition :";

		cin >> des;


		while ((mov[0] < 'a' || mov[0]>'h') || (mov[1] < '1' || mov[1]>'8'))
		{

			cout << "out of range current position enter the valid :";
			cin >> mov;

		}


		while ((des[0] < 'a' || des[0]>'h') || (des[1] < '1' || des[1]>'8'))
		{

			cout << "out of range desired  position enter the valid :";
			cin >> des;

		}



		while (true)
		{

			currentrow = 8 - (mov[1] - '0');
			desirerow = 8 - (des[1] - '0');

			if (mov[0] == 'a')
			{
				currentcol = 0;
			}
			else if (mov[0] == 'b')
			{
				currentcol = 1;
			}
			else if (mov[0] == 'c')
			{
				currentcol = 2;
			}
			else if (mov[0] == 'd')
			{
				currentcol = 3;
			}
			else if (mov[0] == 'e')
			{
				currentcol = 4;
			}
			else if (mov[0] == 'f')
			{
				currentcol = 5;
			}
			else if (mov[0] == 'g')
			{
				currentcol = 6;
			}
			else if (mov[0] == 'h')
			{
				currentcol = 7;
			}




			if (des[0] == 'a')
			{
				desirecol = 0;
			}
			else if (des[0] == 'b')
			{
				desirecol = 1;
			}
			else if (des[0] == 'c')
			{
				desirecol = 2;
			}
			else if (des[0] == 'd')
			{
				desirecol = 3;
			}
			else if (des[0] == 'e')
			{
				desirecol = 4;
			}
			else if (des[0] == 'f')
			{
				desirecol = 5;
			}
			else if (des[0] == 'g')
			{
				desirecol = 6;
			}
			else if (des[0] == 'h')
			{
				desirecol = 7;
			}


			if (arr[currentrow][currentcol] != 1 && arr[currentrow][currentcol] != 2 && arr[currentrow][currentcol] != 3 && arr[currentrow][currentcol] != 4 && arr[currentrow][currentcol] != 5 && arr[currentrow][currentcol] != 6)
			{





				cout << "enter the valid current position  position :";
				cin >> mov;

				cout << "enter the valid desire position :";

				cin >> des;


			}


			else
			{
				break;
			}

		}

		if (arr[currentrow][currentcol] == 1)
		{
			obj.obj.blackmove(currentrow, currentcol, desirerow, desirecol, arr, 1);
		}
		else if (arr[currentrow][currentcol] == 2)
		{
			obj.objj.blackmove(currentrow, currentcol, desirerow, desirecol, arr, 1);

		}

		else if (arr[currentrow][currentcol] == 3)
		{

			obj.o1.blackmove(currentrow, currentcol, desirerow, desirecol, arr, 1);
		}


		else if (arr[currentrow][currentcol] == 4)
		{
			obj.o.blackmove(currentrow, currentcol, desirerow, desirecol, arr, 1);
		}


		else if (arr[currentrow][currentcol] == 5)
		{


			obj.object.blackmove(currentrow, currentcol, desirerow, desirecol, arr, 1, obj);



		}




		else if (arr[currentrow][currentcol] == 6)
		{

			obj.objects.blackmove(currentrow, currentcol, desirerow, desirecol, arr, 1);
		}

		for (int i = 0;i < 8;i++)
		{
			if (arr[7][i] == 6)
			{
				cout << "pawn reached last row !" << endl;
				cout << "what you want to promote it " << endl << endl;

				cout << "1- rook" << endl;
				cout << "2- bishop" << endl;
				cout << "3- knight" << endl;
				cout << "4 queen" << endl;

				cin >> choice;

				if (choice == 1)
				{
					arr[7][i] = 1;
				}

				else if (choice == 2)
				{
					arr[7][i] = 3;
				}

				else if (choice == 3)
				{
					arr[7][i] = 2;
				}

				else if (choice == 4)
				{
					arr[7][i] = 4;
				}

				else
				{
					cout << "invalid choice!";
				}
			}
		}
		system("pause");
		system("cls");



		res = isblack(arr);
		res1 = iswhite(arr);

		if (res == 0)
		{

			cout << "player white winssssssssssss!!!!";
			break;
		}

		else if (res1 == 0)
		{

			cout << "player black winnsss !";

			break;
		}

		result = checkmateblack(arr, obj);

		if (result == 1)
		{
			cout << "white wins !!!!!!!!!!!!!";

			break;
		}




		setupdisplay(arr, player1, player2);


	}


}





// main menu function





int main()
{



	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	SetConsoleOutputCP(CP_UTF8);

	int arr[8][8];



	for (int i = 0;i < 8;i++)
	{
		for (int j = 0;j < 8;j++)
		{
			arr[i][j] = 0;
		}
	}



	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[0][3] = 4;
	arr[0][4] = 5;
	arr[0][5] = 3;
	arr[0][6] = 2;
	arr[0][7] = 1;
	for (int i = 0;i < 8;i++)
	{
		arr[1][i] = 6;
	}


	for (int i = 0;i < 8;i++)
	{
		arr[6][i] = 60;
	}
	arr[7][0] = 10;
	arr[7][1] = 20;
	arr[7][2] = 30;
	arr[7][3] = 40;
	arr[7][4] = 50;
	arr[7][5] = 30;
	arr[7][6] = 20;
	arr[7][7] = 10;


	int userchoice;

	userchoice = mainmenu();
	while (userchoice != 2)
	{


		if (userchoice == 1)
		{

			cin.ignore();
			cout << "ENTER THE FIRST PLAYER NAME :";
			string player1;
			getline(cin, player1);
			cout << endl;
			//system("cls");
			cout << "ENTER THE SECOND PLAYER NAME :";
			string player2;
			getline(cin, player2);

			system("cls");
			system("cls");
			setupdisplay(arr, player1, player2);

			gameplay(arr, player1, player2);

			system("pause");


			system("cls");

			userchoice = mainmenu();
		}

	}


	if (userchoice == 2)
	{

	cout<<setw(20);

	cout<<"THANKS FOR PLAYING !!!!!!!!!!!!!!!!!!!!!!!!!!!!";
	cout<<endl<<endl<<endl<<endl<<endl;



	cout<<"<<<<<<<<<<<<<<<<<<EXITING HAVE A NICE DAY >>>>>>>>>>>>>>>>>>>>>>>>>>>>";

	}



	system("pause");

	return 0;

}


