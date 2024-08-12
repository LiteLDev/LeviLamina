#include "ll/core/tweak/ModifyInfomation.h"
#include "ll/api/Versions.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/Version.h"

#include "mc/deps/core/common/bedrock/Interface.h"
#include "mc/deps/core/common/debug/LogDetails.h"

MCAPI void BedrockLogOut(uint priority, char const* pszFormat, ...); // NOLINT

namespace ll {
ll::io::Pipe& getDefaultLogPipe() {
    static ll::io::Pipe defaultLogPipe;
    return defaultLogPipe;
}

static Logger serverLogger("Server");

static std::unordered_map<uint, decltype((serverLogger.debug))&> loggerMap = {
    {1u, serverLogger.debug},
    {2u, serverLogger.info },
    {4u, serverLogger.warn },
    {8u, serverLogger.error}
};

static bool serverStarted = false;

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

    bool knownPriority = loggerMap.contains(priority);

    auto& slogger = knownPriority ? loggerMap.at(priority) : serverLogger.warn;

    std::string line;
    while (std::getline(iss, line)) {
        if (!knownPriority) {
            line = fmt::format("<LVL|{}> {}", priority, line);
        }
        slogger(line);
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

using HookReg = memory::HookRegistrar<BedrockLogOutHook, AppendLogEntryMetadataHook>;

static HookReg hookRegister;

} // namespace ll
