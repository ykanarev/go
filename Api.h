
#ifndef __API_H__
#define __API_H__

#include <string>

class Api
{

    public:

        Api();
        virtual ~Api();

        void ParseLine(std::string &line);

        class Option
        {
            std::string cmd;
            void (*func)(Api &api, std::string &arg);
        };

    protected:

        size_t m_optionCount;
        const Option *m_options;

};

#endif
