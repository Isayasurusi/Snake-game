#include <iostream>
#include <conio.h>
using namespace std;

void run();
void printMap();
void initMap();
void move(int dx, int dy);
void update();
void changeDirection(char key);
void clearScreen();
void generateFood();

char getMapValue(int value);
// Map dimensions
const int mapwidth = 20;
const int mapheight = 20;

const int size = mapwidth * mapheight;

// The tile values for the map
int map[size];

// Snake head details
int headxpos;
int headypos;
int direction;
// Amount of food the snake has (How long the body is)
int food = 4;

// Determine if game is running
bool running;

int main()
{
    run();
    return 0;
}


