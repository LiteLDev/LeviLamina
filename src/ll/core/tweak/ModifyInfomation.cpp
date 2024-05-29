#include "ll/api/io/FunctionStream.h"
#include "ll/api/io/StreamRedirector.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/ServerInfo.h"
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
    if (ll::globalConfig.modules.tweak.disableAutoCompactionLog
        && std::string_view{func}.starts_with("DBStorage::_scheduleNextAutoCompaction")) {
        static_assert(&DBStorage::_scheduleNextAutoCompaction); // make sure function exist
        return;
    }
    origin(category, channelMask, rule, area, priority, func, line, pszFormat, va);
}

ll::Logger serverLogger("Server");

static std::unordered_map<uint, decltype((serverLogger.debug))&> loggerMap = {
    {1u, serverLogger.debug},
    {2u, serverLogger.info },
    {4u, serverLogger.warn },
    {8u, serverLogger.error}
};

static bool serverStarted = false;

void tryModifyServerStartInfo(std::string& s) {
    if (s != "Server started.") {
        if (s.starts_with("Version: ")) {
            s += fmt::format(
                "(ProtocolVersion {}) with {}",
                ll::getServerProtocolVersion(),
                fmt::format(fg(fmt::color::light_sky_blue), "LeviLamina-{}", ll::getLoaderVersion())
            );
        }
        return;
    }
    serverStarted = true;

    ll::severStartEndTime = std::chrono::steady_clock::now();

    s = fmt::format(
        R"(Server started in ({:.1f}s)! For help, type "help" or "?")",
        std::chrono::duration_cast<std::chrono::duration<double>>(ll::severStartEndTime - ll::severStartBeginTime)
            .count()
    );
}

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

    std::istringstream iss(buffer);
    std::string        line;

    bool knownPriority = loggerMap.contains(priority);

    auto& slogger = knownPriority ? loggerMap.at(priority) : serverLogger.warn;

    while (std::getline(iss, line)) {
        if (line.ends_with('\n')) {
            line.pop_back();
            if (line.ends_with('\r')) {
                line.pop_back();
            }
        }

        if (!serverStarted) tryModifyServerStartInfo(line);

        if (!knownPriority) {
            line = fmt::format("<LVL|{}> {}", priority, line);
        }
        slogger(line);
    }
}

// Block BDS from adding LOG metadata

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
