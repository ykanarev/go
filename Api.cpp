
#include "Api.h"

Api::Api()
{
}

Api::~Api()
{
}

void Api::ParseLine(Api &api, std::string &line)
{
    size_t index;

    for ( index = 0 ; index < m_optionCount ; index++ ) {
        if (line.find(m_options[index].cmd) == 0)
            return m_options[index].func(line);
    }

    std::cout << "unsupported: " << line << std::endl;

    return;
}
