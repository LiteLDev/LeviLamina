#include <HookAPI.h>
#include <LLAPI.h>
#include <LoggerAPI.h>
#include <ServerAPI.h>
#include <regex>
#include <string>

using namespace std;

Logger serverLogger("Server");
extern void CheckBetaVersion();
    THook(std::string, "?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ")
{
        CheckBetaVersion();
    return original() + "(ProtocolVersion " + to_string(LL::getServerProtocolVersion()) + ") with " + fmt::format(fg(fmt::color::light_sky_blue) | fmt::emphasis::bold | fmt::emphasis::italic, "LiteLoaderBDS " + LL::getLoaderVersion().toString(true));
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
THook(void, "?PlatformBedrockLogOut@@YAXIPEBD@Z", int, const char* ts)
{
    string input = ts;
    std::string output = std::regex_replace(input, std::regex("\\[.*?\\]"), std::string("$1"));
    output.erase(std::remove(output.begin(), output.end(), '\n'), output.end());
    output.erase(output.find_first_of(' '), output.find_first_not_of(' '));
    output = replace_all_distinct(output, "NO LOG FILE! -  ", "");
    if (input.find("INFO") != std::string::npos)
    {
        serverLogger.info << output << Logger::endl;
    }
    else
    {
        serverLogger.warn << output << Logger::endl;
    }
}


THook(void, "?log@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4ZZ",
      int a1, int a2, __int64 a3, int a4, int a5, __int64 a6, int a7, __int64 a8, ...)
{
    va_list va;
    auto text = (char*)a8;
    if (string(text).find("setting up server logging...") != string(text).npos)
    {
        return;
    }
    va_start(va, a8);
    return SymCall("?log_va@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4PEAD@Z",
                   void, unsigned int, unsigned int, int, int, unsigned int, __int64, __int64, __int64, __int64)(a1, a2, a3, a4, a5, a6, a7, a8, (__int64)va);
}

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
            size_t pos = 0;
            // Remove '§x' in the output
            while ((pos = line.find("§")) != string::npos)
            {
                line.erase(pos, 3);
            }
            serverLogger.info << line << Logger::endl;
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
