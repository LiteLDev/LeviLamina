#include "ll/core/tweak/ModifyInfomation.h"
#include "ll/api/Versions.h"
#include "ll/api/io/LoggerRegistry.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/Config.h"

#include "mc/common/Globals.h"
#include "mc/deps/core/debug/BedrockLog.h"
#include "mc/deps/core/debug/bedrock_log/LogDetails.h"
#include "mc/deps/raknet/RakPeer.h"
#include "mc/world/level/storage/DBStorage.h"

namespace ll {

// disable auto compaction log
LL_STATIC_HOOK(
    DiagnosticsLogHook,
    HookPriority::Normal,
    BedrockLog::log_va,
    void,
    ::BedrockLog::LogCategory category,
    std::bitset<3>            channelMask,
    ::BedrockLog::LogRule     rule,
    ::LogAreaID               area,
    uint                      priority,
    char const*               func,
    int                       line,
    char const*               pszFormat,
    char*                     va
) {
    if (getLeviConfig().modules.disableAutoCompactionLog && std::string_view{func}.starts_with("DBStorage::")) {
        return;
    }
    origin(category, channelMask, rule, area, priority, func, line, pszFormat, va);
}

auto serverLogger = io::LoggerRegistry::getInstance().getOrCreate("Server");

LL_STATIC_HOOK(BedrockLogOutHook, HookPriority::Normal, BedrockLogOut, void, uint priority, char const* pszFormat, ...)
try {
    std::string buffer;
    va_list     va;
    va_start(va, pszFormat);
    if (auto msg = va_arg(va, char const*); msg) {
        buffer = msg;
    }
    va_end(va);

    if (buffer.ends_with('\n')) {
        buffer.pop_back();
        if (buffer.ends_with('\r')) {
            buffer.pop_back();
        }
    }
    std::istringstream iss(std::move(buffer));

    bool knownPriority{true};

    io::LogLevel level;

    switch (priority) {
    case 1:
        level = io::LogLevel::Debug;
        break;
    case 2:
        level = io::LogLevel::Info;
        break;
    case 4:
        level = io::LogLevel::Warn;
        break;
    case 8:
        level = io::LogLevel::Error;
        break;
    default:
        knownPriority = false;
        level         = io::LogLevel::Warn;
        break;
    }

    std::string line;
    while (std::getline(iss, line)) {
        if (!tryModifyBedrockLogInfo(priority, line)) continue;
        if (!knownPriority) {
            line = fmt::format("<LVL|{}> {}", priority, line);
        }
        serverLogger->log(level, string_utils::replaceMcToAnsiCode(line));
    }
} catch (...) {
    try {
        serverLogger->fatal("Fail to format [{}] {}", priority, pszFormat);
        error_utils::printCurrentException(*serverLogger, io::LogLevel::Fatal);
    } catch (...) {}
}

LL_TYPE_INSTANCE_HOOK(
    AppendLogEntryMetadataHook,
    HookPriority::Normal,
    ::BedrockLog::LogDetails,
    &::BedrockLog::LogDetails::_makeLogString,
    std::string,
    std::string        timestamp,
    LogAreaID          area,
    uint               priority,
    std::string        functionName,
    int                lineNumber,
    int                messageId,
    std::string const& logMessage
) {
    // Block from adding LOG metadata
    return logMessage;
}

LL_TYPE_INSTANCE_HOOK(
    SetOfflinePingResponseHook,
    HookPriority::Normal,
    RakNet::RakPeer,
    &RakNet::RakPeer::$SetOfflinePingResponse,
    void,
    char const* data,
    uint        dataSize
) {
    if (dataSize >= 2) {
        if (auto dataView = std::string_view{data + 2, dataSize - 2}; dataView.starts_with("MCPE;")) {
            auto modified = fmt::format("{}LeviLamina;", dataView);
            auto length   = modified.size();
            modified.insert(modified.begin(), static_cast<char>(length & 0xFF));
            modified.insert(modified.begin(), static_cast<char>((length >> 8) & 0xFF));
            return origin(modified.c_str(), static_cast<uint>(modified.size()));
        }
    }
    return origin(data, dataSize);
}

using HookReg = memory::
    HookRegistrar<DiagnosticsLogHook, SetOfflinePingResponseHook, BedrockLogOutHook, AppendLogEntryMetadataHook>;

static HookReg hookRegister;

} // namespace ll
