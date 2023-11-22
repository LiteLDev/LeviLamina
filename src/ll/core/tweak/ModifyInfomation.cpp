#include "ll/api/ServerInfo.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/Version.h"

#include "mc/deps/core/common/debug/LogDetails.h"

#include "ll/api/io/FunctionStream.h"
#include "ll/api/io/StreamRedirector.h"

#include "ll/core/Config.h"
#include "mc/deps/core/common/bedrock/Interface.h"

// disable auto compaction log
LL_AUTO_STATIC_HOOK(
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
        return;
    }
    origin(category, channelMask, rule, area, priority, func, line, pszFormat, va);
}

ll::Logger serverLogger("Server");

static std::unordered_map<uint, decltype(serverLogger.debug)&> loggerMap = {
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
                fmt::format(
                    fg(fmt::color::light_sky_blue) | fmt::emphasis::bold,
                    "LeviLamina-{}",
                    ll::getLoaderVersion().to_string()
                )
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

MCAPI void BedrockLogOut(uint priority, char const* pszFormat, ...); // NOLINT

LL_AUTO_STATIC_HOOK(
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
        buffer = std::string(bufferCount, ' ');
        vsprintf(buffer.data(), pszFormat, va);
    }
    va_end(va);

    if (!success) {
        serverLogger.fatal("!!! Unable to format log output message !!!");
        return;
    }

    std::istringstream iss(buffer);
    std::string        line;

    bool knownPriority = loggerMap.contains(priority);

    auto& logger = knownPriority ? loggerMap.at(priority) : serverLogger.warn;

    while (std::getline(iss, line)) {
        if (line.ends_with('\n')) {
            line.pop_back();
        }

        if (!serverStarted) tryModifyServerStartInfo(line);

        if (!knownPriority) {
            line = fmt::format("<LVL|{}> {}", priority, line);
        }
        logger(line);
    }
}

// Block BDS from adding LOG metadata

LL_AUTO_TYPED_INSTANCE_HOOK(
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
