#include <iostream>
#include "gamesession.h"

using namespace std;

int main() {
    cout << "\n\nServer started...\n\n";
    cout << "\n\nNumber of game sessions: " << GameSession::getActiveGameSessions() << "\n";
    GameSession newGameSession("196.168.0.192", 18874);
    cout << "\n\nNumber of game sessions: " << GameSession::getActiveGameSessions() << "\n";
    GameSession anotherNewGameSession("196.168.0.193", 18875);
    cout << "\n\nNumber of game sessions: " << GameSession::getActiveGameSessions() << "\n";

    cout << "\n\nServer shutting down...\n\n";
    return 0;
}