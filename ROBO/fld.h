#pragma once
#include <iostream>
using namespace std;

class Fielde {
	string body[100];
	int x, y, hp;
	bool win;
	string a[4][47];

public:
	Fielde(int l);
	int HP();
	void path();
	bool WIN();
	void up();
	void right();
	void down();
	void left();
	void frame();

	string PickTheLevel(int lvl);

};
