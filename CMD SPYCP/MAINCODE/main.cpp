    #include <iostream>
    #include <string>
    #include <cstdlib>

// SỬ DỤNG 3 THƯ VIỆN HỖ TRỢ
    int main()
    {
// Giới Thiệu Của ADMIN
        std::cout << "                              +++-------------------------------------------------------+++" << std::endl;
        std::cout << "                              +            [$] CMD SPY: [Version BETA]                    +" << std::endl;
        std::cout << "                              +            [$] ADMIN: MLBSANS                             +" << std::endl;
        std::cout << "                              +            [$] Programming Language: C++                  +" << std::endl;
        std::cout << "                              +            [$] DISCORD: https://discord.com/hackviet      +" << std::endl;
        std::cout << "                              +++-------------------------------------------------------+++" << std::endl;
        std::cout << "\n";

        std::string cmd = "";
        while (true)
        {
            std::cout << "--+ (SPY*YOU): ";
            std::getline(std::cin, cmd);
// LENH PING:
            if (cmd == "!ping" || cmd == "!Ping")
            {
                std::cout << "\033[32m[!] Pong\033[0m" << std::endl;
            }
// LENH CLEAR:
            else if (cmd == "!clear" || cmd == "!Clear")
            {
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif // _WIN32
            }
// LENH EXIT:
            else if (cmd == "exit" || cmd == "!exit" || cmd == "!Exit" || cmd == "Exit")
            {
                std::cout << "Chuong Trinh Bat Dau Tat!" << std::endl;
                break;
            }
// TOOL WEBHOOK:
            else if (cmd == "!Webhook" || cmd == "!webhook")
            {
                #ifdef _WIN32
                    system("cls");
                #endif // _WIN32
                system("TOOLS\\Webhook\\webhook.exe");
            }
            else
            {
                std::cout << "\033[31m[!] LENH KHONG CO TRONG SPY\033[0m" << std::endl;
            }
        }
// END
        return 0;
}
