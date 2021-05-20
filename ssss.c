#include <stdio.h>
#include <windows.h>
#include <conio.h>
void draw_ship(int, int);
void erase_ship(int, int);
void gotoxy(int, int);

int main()
{
	char ch = ' ';
	int x = 38, y = 20;
	int bottom_boundary = 23;
	int right_boundary = 40;
	int upper_boundary = 0;
	int left_boundary = 0;

	draw_ship(x, y);
	do
	{
		if (_kbhit())
		{
			ch = _getch();
			//keyboard control
			if (ch == 'w') { if (y > upper_boundary) { erase_ship(x, y); draw_ship(x, --y); } }
			if (ch == 'a') { if (x > left_boundary) { draw_ship(--x, y); } }
			if (ch == 's') { if (y < bottom_boundary) { erase_ship(x, y); draw_ship(x, ++y); } }
			if (ch == 'd') { if (x < right_boundary) { draw_ship(++x, y); } }
			fflush(stdin);
		}
		Sleep(50);
	} while (ch != 'x');
			
	return 0;
}

void draw_ship(int x, int y)
{
	gotoxy(x, y);
	printf(" <-0-> ");
}

void erase_ship(int x, int y)
{
	gotoxy(x, y);
	printf("       ");
}

void gotoxy(int x, int y)
{
	COORD c = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
