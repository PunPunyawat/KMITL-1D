#include<stdio.h>
#include<Windows.h>
#include<conio.h>
void draw_ship(int, int);
void gotoxy(int, int);
void erase_ship(int, int);
void setcursor(bool);
void setcolor(int, int);
void draw_shot(int, int);
void erase_shot(int, int);


struct allsys {

	int x = 38, y = 20;
	int position_x[5], position_y[5], shot[5];
	int	num = 0;
	char ch = ' ';


}all;



int main() {

	setcursor(0);

	draw_ship(all.x, all.y);
	for (int i = 0; i < 5; i++) {
		all.shot[i] = 0;
	}


	do {
		if (_kbhit()) {
			all.ch = _getch();
			if (all.ch == 'a') {
				all.num = 1;
			}

			if (all.ch == 'd') {
				all.num = 2;
			}


			if (all.ch == 's') {
				all.num = 3;
			}


			if (all.ch == ' ') {

				for (int i = 0; i < 5; i++) {
					if (all.shot[i] == 0) {

						all.shot[i] = 1;
						all.position_x[i] = all.x;
						all.position_y[i] = all.y - 2;
						draw_shot(all.position_x[i], all.position_y[i]);
						break;

					}
				}
			}

			fflush(stdin);
		}

		if (all.num == 1 && all.x > 0)
		{
			erase_ship(all.x, all.y); draw_ship(--all.x, all.y);
		}
		if (all.num == 2 && all.x < 73)
		{
			erase_ship(all.x, all.y); draw_ship(++all.x, all.y);
		}

		for (int i = 0; i < 5; i++) {
			if (all.shot[i] == 1)
			{

				erase_shot(all.position_x[i], all.position_y[i]);
				all.position_y[i] = all.position_y[i] - 1;
				if (all.position_y[i] > 0) {
					draw_shot(all.position_x[i], all.position_y[i]);
				}
				else
				{
					all.shot[i] = 0;
				}
			}
		}

		Sleep(100);

	} while (all.ch != 'x');  setcolor(7, 0);


	return 0;
}



void gotoxy(int x, int y) {
	COORD c = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void draw_ship(int x, int y) {
	setcursor(0);
	gotoxy(x, y);
	setcolor(2, 4);
	printf("<-0->");

}

void erase_ship(int x, int y) {
	gotoxy(x, y);
	setcolor(0, 0);
	printf("      ");
}

void setcursor(bool visible) {

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console, &lpCursor);
}

void setcolor(int fg, int bg) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}

void erase_shot(int x, int y) {
	gotoxy(x, y);
	setcolor(0, 0);
	printf("      ");

}

void draw_shot(int x, int y) {
	gotoxy(x, y);
	setcolor(7, 0);
	printf("  ! ");
}


