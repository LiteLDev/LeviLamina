#include "llapi/HookAPI.h"
#include "llapi/LLAPI.h"
#include "llapi/LoggerAPI.h"
#include "llapi/ServerAPI.h"
#include <regex>
#include <string>
#include "liteloader/Config.h"
#include "liteloader/Version.h"
using namespace std;

Logger serverLogger("Server");
extern void checkBetaVersion();
THook(std::string, "?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ") {
    checkBetaVersion();
    return original() + "(ProtocolVersion " + to_string(ll::getServerProtocolVersion()) + ") with " + fmt::format(ll::globalConfig.colorLog ? fg(fmt::color::light_sky_blue) | fmt::emphasis::bold | fmt::emphasis::italic : fmt::text_style(), "LiteLoaderBDS " LITELOADER_FILE_VERSION_STRING);
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
THook(void, "?BedrockLogOut@@YAXIPEBDZZ",
    int a1, char * a2,...)
{
    char Buffer[4096];
    va_list va;
    va_start(va, a2);
    auto v1 = vsprintf(Buffer,a2,va);
	va_end(va);
	  if ( v1 < 0 )
    v1 = -1;
      if ( v1 < 0 )
		return original(a1,a2,va);
	string input = Buffer;


    input.erase(std::remove(input.begin(), input.end(), '\n'), input.end());
    switch (a1) {
        case 1u:
            serverLogger.debug << input << Logger::endl;
            return;
        case 2u:
            serverLogger.info << input << Logger::endl;
            return;
        case 4u:
            serverLogger.warn << input << Logger::endl;
            return;
        case 8u:
            serverLogger.error << input << Logger::endl;
            return;
        default:
            serverLogger.info << input << Logger::endl;
            return;
    }

	return original(a1,a2,va);
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

#include "liteloader/LiteLoader.h"
#include "llapi/mc/BedrockLog.hpp"
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

#include "llapi/mc/ColorFormat.hpp"
#include "llapi/mc/CommandOrigin.hpp"
#include "llapi/mc/CommandOutput.hpp"
extern std::unordered_map<CommandOrigin const*, string*> resultOfOrigin;
TClasslessInstanceHook(void*, "?send@CommandOutputSender@@UEAAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z",
                       class CommandOrigin const& origin, class CommandOutput const& output) {
    std::stringbuf tmpBuf;
    auto oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(&tmpBuf);
    auto rv = original(this, origin, output);
    std::cout.rdbuf(oldBuf);
    if (ll::isDebugMode() && ll::globalRuntimeConfig.tickThreadId != std::this_thread::get_id()) {
        ll::logger.warn("The thread executing the CommandOutputSender::send is not the \"MC_SERVER\" thread");
        ll::logger.warn("Output: {}", tmpBuf.str());
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
            if (ll::isDebugMode()) {
                ll::logger.warn("Output: {}", tmpBuf.str());
                ll::logger.warn("size of resultOfOrigin: {}", resultOfOrigin.size());
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
        if (ll::globalConfig.colorLog)
            log << ColorFormat::convertToConsole(line, false) << Logger::endl;
        else
            log << ColorFormat::removeColorCode(line) << Logger::endl;
    }
    return rv;
}
