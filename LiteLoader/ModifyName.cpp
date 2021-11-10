#include <HookAPI.h>
#include <string>
#include <LLAPI.h>
#include <ServerAPI.h>
#include <regex>
//#include <MCApi/BedrockLog.hpp>
using namespace std;

THook(std::string, "?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ")
{
    return original() + "(ProtocolVersion " + to_string(LL::getServerProtocolVersion()) + ") with LiteLoaderBDS " + LL::getLoaderVersionString();
}

string& replace_all_distinct(string& str, const string& old_value, const string& new_value) {
    for (string::size_type pos(0); pos != string::npos; pos += new_value.length()) {
        if ((pos = str.find(old_value, pos)) != string::npos)
            str.replace(pos, old_value.length(), new_value);
        else
            break;
    }
    return str;
}

THook(void, "?PlatformBedrockLogOut@@YAXIPEBD@Z",
      int, const char* ts) {
    string      input  = ts;
    std::string output = std::regex_replace(input, std::regex("\\[.*?\\]"), std::string("$1"));
    output.erase(std::remove(output.begin(), output.end(), '\n'),
                 output.end());
    output.erase(output.find_first_of(' '), output.find_first_not_of(' '));
    output = replace_all_distinct(output, "NO LOG FILE! -  ", "");
    Logger::Info() << output << Logger::endl;
}
