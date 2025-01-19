#ifndef GAME_H
#define GAME_H


class Game
{
public:

    ~Game();
    Game();
    void play();

private:
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    int maxNumber;

    void printGameresult();
    void setMaxNumber();
};

#endif // GAME_H
