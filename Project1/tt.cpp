#include <iostream>
using namespace std;

class Game {
public:
    string name;
private:
    string genre = "indi";
};

int main()
{
    Game game;
    game.name = "Cult Of The Lamb";
    cout << "Game name:" << game.name << endl;
    return 0;
}
