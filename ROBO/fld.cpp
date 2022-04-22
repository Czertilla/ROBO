#include "fld.h"

Fielde::Fielde(int l)
{
	PickTheLevel(l);
	for (int i = 0; i < 47; i++) {
		body[i] = a[l][i];
	}
	x = 1;
	y = 1;
	hp = 9;
	win = true;
	for (int i = 0; i < 47; i++)
		cout << body[i] << endl;
}

int Fielde::HP()
{
	return hp;
}

void Fielde::path()
{
	body[x][y] = '*';
}

bool Fielde::WIN()
{
	return win;
}

void Fielde::up()
{
	x -= 1;
	hp -= 1;
}

void Fielde::right()
{
	y++;
	hp -= 1;
}

void Fielde::down()
{
	x++;
	hp -= 1;
}

void Fielde::left()
{
	y -= 1;
	hp -= 1;
}

void Fielde::frame()
{
	if (body[x][y] == '0') {
		hp = 0;
		win = false;
	}
	if (body[x][y] == 'B') hp = 9;
	if (body[x][y] == 'b') hp = min((hp + 5), 9);
	if (body[x][y] == 'W') {
		win = false;
	}
	if (hp == 0) {
		body[x][y] = 'X';
		win = false;
	}
	else body[x][y] = (char)(((int)'0') + hp);
	for (int i = 0; i < 47; i++)
		cout << body[i] << endl;
}

string Fielde::PickTheLevel(int lvl)
{
	string s[47] = { "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
					 "09 <-- Get acquainted, this is ROBO. He have a charge lvl, showed by this digit                    0",
					 "0    B                                                                                             0",
					 "0        bbb   B                                                                                   0",
					 "0                     W                                                                            0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                       W - you need path ROBO to this spot                                        0",
					 "0                                                                                                  0",
					 "0                       0 - wall, ROBO spend all Charge                                            0",
					 "0                                                                                                  0",
					 "0                       B - full Charge                                                            0",
					 "0                                                                                                  0",
					 "0                       b - half Charge                                                            0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                         [w]                                                                      0",
					 "0                      [a][s][d]  -  control ROBO                                                  0",
					 "0                                                                                                  0",
					 "0                      If ROBO spend all Charge, Game over and ROBO show you X                     0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
	};
	for (int i = 0; i < 47; i++) {
		a[0][i] = s[i];
	}
	string d[47] = { "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
					 "09   0                                               Level 1 <<Battery Rain>>                      0",
					 "0000 0                                                                                             0",
					 "0B       b     B              b                                                                    0",
					 "000000                b                                                                            0",
					 "0           0                                                                                      0",
					 "0           0                                                         B                            0",
					 "0           B                                      b                                               0",
					 "0                       00B00                                                                      0",
					 "0                              00     B                                        B                   0",
					 "0                             0               b           B                                        0",
					 "0             B               0                                                                    0",
					 "0                              0000                                                                0",
					 "0                           B                                  B                                   0",
					 "0                                                                                                  0",
					 "0                                                      B                         B                 0",
					 "0                                          B                                                       0",
					 "0                                                                                                  0",
					 "0             B                                           b             B                          0",
					 "0                                                                                                  0",
					 "0                           B                     B                                                0",
					 "0                                                                 B                                0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0               B                                            b                                     0",
					 "0                                   B                                                              0",
					 "0                                                                         B                        0",
					 "0                     B                               b                                            0",
					 "0                                             B                                                    0",
					 "0                                                                                                  0",
					 "0       B                                                                                          0",
					 "0                                                                    B                             0",
					 "0                               B                  B                                               0",
					 "0                                                                                                  0",
					 "0                                                                                   B              0",
					 "0                        B                 b                                                       0",
					 "0           B                                                 B                                    0",
					 "0                                                                                                  0",
					 "0                                  B                                b                              0",
					 "0                                                                                  B               0",
					 "0                                                                    B                             0",
					 "0                                      b            B                                              0",
					 "0              B                                                                                   0",
					 "0                                                                       b                          0",
					 "0                                                                                    B             0",
					 "0                                                                                                 W0",
					 "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
	};
	for (int j = 0; j < 47; j++) {
		a[1][j] = d[j];
	}
	string f[47] = { "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
					 "09 0B0B    00   B            0           b       B    0         B  0         0     B     b     0 b 0",
					 "0  0 0000   0   00000b   B   0 B0  B  0   0000     00     000   0    0 b  0 0  b 0     000000 b    0",
					 "00 0 0  B     b      0000    0   0    0    B   0  b    0    B    0  B  b 0     0     b0   0  0     0",
					 "0b     0        0000        b       0 B      0       0   b      b  000   B    B      0     B   00B 0",
					 "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000B0000000000000",
					 "0######################## ############S      0                             b      BB               0",
					 "0#W#W#W#W#W#W#W#W#W#W#W#W#\\   /\\   / #S      0              B     B               BB               0",
					 "0######################### \\ /  \\ /  #F  @   0W      B                 B      B                    0",
					 "0                        #  W    W   #G /|\\  0                  B            B        BB           0",
					 "0                        # / \\   / \\  #G ,,  0            B                                        0",
					 "0                        #/   \\ /   \\ #000000                             BB                       0",
					 "0                         ###########                                    BB                        0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0          ----------                                                                              0",
					 "0          |Q      Q|ROBO didn't know where he came from, didn't know what to do and               0",
					 "0          | \\____/ |where to go. But ROBO has you, and he hopes for your help. ROBO does          0",
					 "0          | (    ) |not remember how he ended up in these walls. What is this place? It           0",
					 "0          | / 0 0\\ |looks like some kind of laboratory. There are some cages with monsters        0",
					 "0          | \\++++/ |inside. And next to kabienet... Hey, who's that over there??                  0",
					 "0          ----------                                                                              0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0                                                                                                  0",
					 "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
	};
	for (int j = 0; j < 47; j++) {
		a[2][j] = f[j];
	}
	return "CPP";
}
