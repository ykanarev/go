
#include "TheAiGamesDotComApi.h"

Api::Option TheAiGamesDotComApi::m_innerOptions[] = 
{
    {"settings timebank", TheAiGamesDotComApi::OptionSettingsTimebank},
    {"settings time_per_move", TheAiGamesDotComApi::OptionSettingsTimePerMove},
    {"settings player_names", TheAiGamesDotComApi::OptionSettingsPlayerNames},
    {"settings your_bot", TheAiGamesDotComApi::OptionSettingsYourBot},
    {"settings your_botid", TheAiGamesDotComApi::OptionSettingsYourBotId},
    {"settings field_width", TheAiGamesDotComApi::OptionSettingsFieldWidth},
    {"settings field_height", TheAiGamesDotComApi::OptionSettingsFieldHeight},
    {"settings max_round", TheAiGamesDotComApi::OptionSettingsMaxRound}
};

TheAiGamesDotComApi::TheAiGamesDotComApi() :
    Api(),
    m_optionCount(sizeof(m_innerOptions)/sizeof(m_innerOptions[0])),
    m_options(m_innerOptions)
{
}

TheAiGamesDotComApi::~TheAiGamesDotComApi()
{
}

void TheAiGamesDotComApi::OptionSettingsTimebank(Api &api, std::string &arg)
{
}

void TheAiGamesDotComApi::OptionSettingsTimePerMove(Api &api, std::string &arg)
{
}

void TheAiGamesDotComApi::OptionSettingsPlayerNames(Api &api, std::string &arg)
{
}

void TheAiGamesDotComApi::OptionSettingsYourBot(Api &api, std::string &arg)
{
}

void TheAiGamesDotComApi::OptionSettingsYourBotId(Api &api, std::string &arg)
{
}

void TheAiGamesDotComApi::OptionSettingsFieldWidth(Api &api, std::string &arg)
{
}

void TheAiGamesDotComApi::OptionSettingsFieldHeight(Api &api, std::string &arg)
{
}

void TheAiGamesDotComApi::OptionSettingsMaxRound(Api &api, std::string &arg)
{
}

