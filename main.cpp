
#include <string>
#include <iostream>

#include "Api.h"
#include "TheAiGameDotComApi.h"

int main()
{
    Api *api = new TheAiGameDotComApi();

    while (true)
    {
        std::string line;
        std::getline(std::cin, line);
        api->ParseLine(line);
    }
}

