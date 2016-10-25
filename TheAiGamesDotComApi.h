
#ifndef __THE_AI_GAMES_DOT_COM_API_H__
#define __THE_AI_GAMES_DOT_COM_API_H__

#include "Api.h"

class TheAiGamesDotComApi : public Api
{

    public:

        TheAiGamesDotComApi();
        virtual ~TheAiGamesDotComApi();

    protected:

        static void OptionSettingsTimebank(Api &api, std::string &arg);
        static void OptionSettingsTimePerMove(Api &api, std::string &arg);
        static void OptionSettingsPlayerNames(Api &api, std::string &arg);
        static void OptionSettingsYourBot(Api &api, std::string &arg);
        static void OptionSettingsYourBotId(Api &api, std::string &arg);
        static void OptionSettingsFieldWidth(Api &api, std::string &arg);
        static void OptionSettingsFieldHeight(Api &api, std::string &arg);
        static void OptionSettingsMaxRound(Api &api, std::string &arg);

        static const Option m_innerOptions[];

};

#endif
