#include <iostream>
#include "gamesession.h"

using namespace std;

int GameSession::activeGameSessions = 0;

int GameSession::getActiveGameSessions() {
    return activeGameSessions;
}

GameSession::GameSession(string ipa, int uid): IPAddress(ipa), userId(uid) {
    activeGameSessions += 1;
    cout << "\n\n Game Session with userId " << userId << " and IP address " << IPAddress << " connected!\n\n";
}

GameSession::~GameSession() {
    cout << "\n\n Game Session with userId " << userId << " and IP address " << IPAddress << " disconnected!\n\n";
    activeGameSessions -= 1;
}