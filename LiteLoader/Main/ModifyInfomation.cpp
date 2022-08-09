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
THook(std::string, "?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ") {
    CheckBetaVersion();
    return original() + "(ProtocolVersion " + to_string(LL::getServerProtocolVersion()) + ") with " + fmt::format(LL::globalConfig.colorLog ? fg(fmt::color::light_sky_blue) | fmt::emphasis::bold | fmt::emphasis::italic : fmt::text_style(), "LiteLoaderBDS " + LL::getLoaderVersion().toString(true));
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

// Standardize BDS's output
THook(void, "?PlatformBedrockLogOut@@YAXIPEBD@Z", int a1, const char* ts) {
    string input = ts;
    input.erase(std::remove(input.begin(), input.end(), '\n'), input.end());
    switch (a1) {
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

// Block BDS from adding LOG metadata
THook(void, "?_appendLogEntryMetadata@LogDetails@BedrockLog@@AEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@W4LogAreaID@@I1HH@Z",
      void* a1, void* a2, void** a3, int a4, unsigned int a5, __int64 a6, unsigned int a7, unsigned int a8) {
    return;
}

#include "LiteLoader.h"
#include <MC/BedrockLog.hpp>
namespace ModifyInfomation {
int telemetryText = 0;
}
THook(void, "?log@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4ZZ",
      enum BedrockLog::LogCategory a1, class std::bitset<3> a2, enum BedrockLog::LogRule a3, enum LogAreaID a4, unsigned int a5, char const* a6, int a7, char const* a8, ...) {
    va_list va;
    auto text = (char*)a8;
    va_start(va, a8);
    if (string(text).find("= TELEMETRY MESSAGE =") != string(text).npos) {
        ModifyInfomation::telemetryText = 6;
        return BedrockLog::log_va(a1, a2, a3, a4, a5, a6, a7, "To enable Server Telemetry, add the line 'emit-server-telemetry=true' to the server.properties file in the bds directory", va);
    }
    if (ModifyInfomation::telemetryText > 0) {
        ModifyInfomation::telemetryText--;
        return;
    }

    if (string(text).find("setting up server logging...") != string(text).npos || string(text).find("Server started") != string(text).npos) {
        return;
    }
    return BedrockLog::log_va(a1, a2, a3, a4, a5, a6, a7, a8, va);
}

#include <MC/ColorFormat.hpp>
#include <MC/CommandOrigin.hpp>
#include <MC/CommandOutput.hpp>
extern std::unordered_map<CommandOrigin const*, string*> resultOfOrigin;
TClasslessInstanceHook(void*, "?send@CommandOutputSender@@UEAAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z",
                       class CommandOrigin const& origin, class CommandOutput const& output) {
    std::stringbuf tmpBuf;
    auto oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(&tmpBuf);
    auto rv = original(this, origin, output);
    std::cout.rdbuf(oldBuf);
    if (LL::isDebugMode() && LL::globalConfig.tickThreadId != std::this_thread::get_id()) {
        logger.warn("The thread executing the CommandOutputSender::send is not the \"MC_SERVER\" thread");
        logger.warn("Output: {}", tmpBuf.str());
    }

    auto it = resultOfOrigin.find(&origin);
    if (it != resultOfOrigin.end()) {
        try {
            // May crash for incomprehensible reasons
            it->second->assign(tmpBuf.str());
            while (it->second->size() && (it->second->back() == '\n' || it->second->back() == '\r'))
                it->second->pop_back();
            it->second = nullptr;
            resultOfOrigin.erase(it);
            return rv;
        } catch (...) {
            if (LL::isDebugMode()) {
                logger.warn("Output: {}", tmpBuf.str());
                logger.warn("size of resultOfOrigin: {}", resultOfOrigin.size());
            }
#ifdef DEBUG
            __debugbreak();
#endif // DEBUG
        }
    }
    auto& log = output.getSuccessCount() > 0 ? serverLogger.info : serverLogger.error;
    std::istringstream iss(tmpBuf.str());
    string line;
    while (getline(iss, line)) {
        if (LL::globalConfig.colorLog)
            log << ColorFormat::convertToConsole(line, false) << Logger::endl;
        else
            log << ColorFormat::removeColorCode(line) << Logger::endl;
    }
    return rv;
}
