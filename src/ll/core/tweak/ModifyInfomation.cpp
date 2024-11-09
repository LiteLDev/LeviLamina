#include "ll/core/tweak/ModifyInfomation.h"
#include "ll/api/base/Containers.h"
#include "ll/api/io/LoggerRegistry.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/Version.h"

#include "mc/deps/core/debug/bedrock_log/LogDetails.h"
#include "mc/diagnostics/Interface.h"
#include "mc/world/level/storage/DBStorage.h"

MCAPI void BedrockLogOut(uint priority, char const* pszFormat, ...);

namespace ll {

// disable auto compaction log
LL_STATIC_HOOK(
    DiagnosticsLogHook,
    HookPriority::Normal,
    Bedrock::Diagnostics::Interface::log,
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
    if (getLeviConfig().modules.disableAutoCompactionLog
        && std::string_view{func}.starts_with("DBStorage::_scheduleNextAutoCompaction")) {
        static_assert(&DBStorage::_scheduleNextAutoCompaction); // make sure function exist
        return;
    }
    origin(category, channelMask, rule, area, priority, func, line, pszFormat, va);
}

auto serverLogger = io::LoggerRegistry::getInstance().getOrCreate("Server");

int printfbufc(const char* format, va_list const& pargs) {
    int     retval;
    va_list argcopy;
    va_copy(argcopy, pargs);
    retval = vsnprintf(nullptr, 0, format, argcopy);
    va_end(argcopy);
    return retval;
}

LL_STATIC_HOOK(BedrockLogOutHook, HookPriority::Normal, BedrockLogOut, void, uint priority, char const* pszFormat, ...)
try {
    bool        success = false;
    std::string buffer;
    va_list     va;
    va_start(va, pszFormat);
    auto bufferCount = printfbufc(pszFormat, va);
    if (bufferCount >= 0) {
        success = true;
    }
    if (success && bufferCount > 0) {
        buffer = std::string(bufferCount, '\0');
        vsnprintf(buffer.data(), buffer.size() + 1, pszFormat, va);
    }
    va_end(va);

    if (!success) {
        serverLogger->fatal("!!! Unable to format log output message !!!");
        return;
    }
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
    case 8:
        level = io::LogLevel::Error;
        break;
    case 4:
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

// Block from adding LOG metadata

LL_TYPE_INSTANCE_HOOK(
    AppendLogEntryMetadataHook,
    HookPriority::Normal,
    ::BedrockLog::LogDetails,
    &::BedrockLog::LogDetails::_appendLogEntryMetadata,
    void,
    std::string&,
    std::string,
    ::LogAreaID,
    uint,
    std::string,
    int,
    int
) {}

using HookReg = memory::HookRegistrar<DiagnosticsLogHook, BedrockLogOutHook, AppendLogEntryMetadataHook>;

static HookReg hookRegister;

} // namespace ll
