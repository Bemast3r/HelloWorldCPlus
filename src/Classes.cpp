#include <iostream>


class Player {

public:

	int x = 0;
	int y = 0;
	int speed = 100;
	void Move(int xa, int ya) {
		x += xa * speed;
		y += ya * speed;
	}
};



void classes() {

	Player player;
	player.Move(1, 1);
	std::cout << player.x << std::endl;

}