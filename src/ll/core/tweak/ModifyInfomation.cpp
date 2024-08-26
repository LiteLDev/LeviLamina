#include "ll/core/tweak/ModifyInfomation.h"
#include "ll/api/base/Containers.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/Version.h"

#include "mc/deps/core/common/bedrock/Interface.h"
#include "mc/deps/core/common/debug/LogDetails.h"
#include "mc/world/level/storage/DBStorage.h"

MCAPI void BedrockLogOut(uint priority, char const* pszFormat, ...); // NOLINT

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

io::Logger serverLogger("Server");

LL_STATIC_HOOK(
    BedrockLogOutHook,
    HookPriority::Normal,
    BedrockLogOut,
    void,
    uint        priority,
    char const* pszFormat,
    ...
) {
    bool        success = false;
    std::string buffer;
    va_list     va;
    va_start(va, pszFormat);
    auto bufferCount = _vscprintf(pszFormat, va);
    if (bufferCount >= 0) {
        success = true;
    }
    if (success && bufferCount > 0) {
        buffer = std::string(bufferCount, '\0');
        vsprintf_s(buffer.data(), buffer.size() + 1, pszFormat, va);
    }
    va_end(va);

    if (!success) {
        serverLogger.fatal("!!! Unable to format log output message !!!");
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
        serverLogger.log(level, line);
    }
}

// Block from adding LOG metadata

LL_TYPE_INSTANCE_HOOK(
    AppendLogEntryMetadataHook,
    HookPriority::Normal,
    ::BedrockLog::LogDetails,
    &::BedrockLog::LogDetails::_appendLogEntryMetadata,
    void,
    std::string&,
    std::string, // NOLINT
    ::LogAreaID,
    uint,
    std::string, // NOLINT
    int,
    int
) {}

using HookReg = memory::HookRegistrar<DiagnosticsLogHook, BedrockLogOutHook, AppendLogEntryMetadataHook>;

static HookReg hookRegister;

} // namespace ll
