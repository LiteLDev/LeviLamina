#include <HookAPI.h>
#include <LLAPI.h>
#include <LoggerAPI.h>
#include <ServerAPI.h>
#include <regex>
#include <string>
#include "Main/Config.h"
using namespace std;

Logger serverLogger("Server");
extern void CheckBetaVersion();
THook(std::string, "?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ")
{
    CheckBetaVersion();
    return original() + "(ProtocolVersion " + to_string(LL::getServerProtocolVersion()) + ") with " + fmt::format(LL::globalConfig.colorLog ?fg(fmt::color::light_sky_blue) | fmt::emphasis::bold | fmt::emphasis::italic : fmt::text_style() , "LiteLoaderBDS " + LL::getLoaderVersion().toString(true));
}


string& replace_all_distinct(string& str, const string& old_value, const string& new_value)
{
    for (string::size_type pos(0); pos != string::npos; pos += new_value.length())
    {
        if ((pos = str.find(old_value, pos)) != string::npos)
            str.replace(pos, old_value.length(), new_value);
        else
            break;
    }
    return str;
}

// Standardize BDS's output
THook(void, "?PlatformBedrockLogOut@@YAXIPEBD@Z", int a1, const char* ts)
{
    string input = ts;
    input.erase(std::remove(input.begin(), input.end(), '\n'), input.end());
    switch (a1)
    {
        case 1u:
            serverLogger.debug << input << Logger::endl;
            break;
        case 2u:
            serverLogger.info << input << Logger::endl;
            break;
        case 4u:
            serverLogger.warn << input << Logger::endl;
            break;
        case 8u:
            serverLogger.error << input << Logger::endl;
            break;
        default:
            serverLogger.info << input << Logger::endl;
            break;
    }
}

//Block BDS from adding LOG metadata
THook(void, "?_appendLogEntryMetadata@LogDetails@BedrockLog@@AEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@W4LogAreaID@@I1HH@Z",
    void* a1, void* a2, void** a3, int a4, unsigned int a5, __int64 a6, unsigned int a7, unsigned int a8)
{
    return;
}

#include "LiteLoader.h"
THook(void, "?log@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4ZZ",
      int a1, int a2, int a3, int a4, int a5, __int64 a6, int a7, __int64 a8, ...)
{
    va_list va;
    auto text = (char*)a8;
    if (string(text).find("setting up server logging...") != string(text).npos)
    {
        return;
    }
    //std::cout << a7 << std::endl;
    va_start(va, a8);
    if (a7 == 600) {    
        return;
    }
    return SymCall("?log_va@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4PEAD@Z",
                   void, int, int, int, int, int, __int64, int, __int64, __int64)(a1, a2, a3, a4, a5, a6, a7, a8, (__int64)va);
}

#include <MC/ColorFormat.hpp>
extern std::unordered_map<void*, string*> resultOfOrigin;
TClasslessInstanceHook(void*, "?send@CommandOutputSender@@UEAAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z",
                       void* ori, void* out)
{
    auto it = resultOfOrigin.find(ori);
    if (it == resultOfOrigin.end())
    {
        std::stringbuf sbuf;
        auto oBuf = std::cout.rdbuf();
        std::cout.rdbuf(&sbuf);
        auto rv = original(this, ori, out);
        std::cout.rdbuf(oBuf);
        auto str = sbuf.str();
        std::istringstream iss(str);
        string line;
        while (getline(iss, line))
        {
            if (LL::globalConfig.colorLog)
                serverLogger.info << ColorFormat::convertToColsole(line, false) << Logger::endl;
            else
                serverLogger.info << ColorFormat::removeColorCode(line) << Logger::endl;
        }
        return rv;
    }
    std::stringbuf sbuf;
    auto oBuf = std::cout.rdbuf();
    std::cout.rdbuf(&sbuf);
    auto rv = original(this, ori, out);
    std::cout.rdbuf(oBuf);
    it->second->assign(sbuf.str());
    while (it->second->size() && (it->second->back() == '\n' || it->second->back() == '\r'))
        it->second->pop_back();
    resultOfOrigin.erase(it);
    return rv;
}
