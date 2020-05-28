#include <iostream>
#include <conio.h>
#include <Windows.h>

int main() {
    char option = 0;
    std::cout << "Select what do you want to do with Oracle services: " << std::endl << "1. Turn on" << std::endl << "2. Turn off" << std::endl;
    option = _getch();
    std::cout << std::endl;

    char soundPath[350];
    GetCurrentDirectory(300, soundPath);

    if (option == '1' || option == 1) {
        const char* services[] = { "net start OracleServiceXE", "net start OracleOraDB18Home1TNSListener", "net start OracleOraDB18Home1MTSRecoveryService" };

        std::cout << "Starting services" << std::endl << std::endl;
        for (int i = 0; i < 3; i++) {
            std::cout << "STARTING SCRIPT " << i + 1 << "/3" << std::endl << std::endl;
            system(services[i]);
        }
        std::cout << "Starting services finished." << std::endl << std::endl;

        strcat(soundPath, "/OracleDBService/resources/startEnd.wav");
        PlaySound((LPCSTR)soundPath, NULL, SND_SYNC);
        return 0;
    }
    else if (option == '2' || option == 2) {
        const char* services[] = { "net stop OracleServiceXE", "net stop OracleOraDB18Home1TNSListener", "net stop OracleOraDB18Home1MTSRecoveryService" };

        std::cout << "Stopping services" << std::endl << std::endl;;
        for (int i = 0; i < 3; i++) {
            std::cout << "STOPPING SCRIPT " << i + 1 << "/3" << std::endl << std::endl;
            system(services[i]);
        }
        std::cout << "Stopping services finished." << std::endl << std::endl;

        strcat(soundPath, "/OracleDBService/resources/stopEnd.wav");
        PlaySound((LPCSTR)soundPath, NULL, SND_SYNC);
        return 0;
    }
    else {
        std::cout << "Entered number is wrong. Restart this script." << std::endl;
        return 0;
    }
}
