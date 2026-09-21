#include <iostream>

class GameSession {
    private:
        std::string IPAddress;
        int userId;
        static int activeGameSessions;
        
    public:
        static int getActiveGameSessions();
        GameSession(std::string ipa, int uid);
        ~GameSession();
};