#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"
#include "mc/common/Common.h"

#include "mc/deps/core/common/debug/LogDetails.h"

Logger serverLogger("Server");

static std::unordered_map<uint, decltype(serverLogger.debug)&> loggerMap = {
    {1u, serverLogger.debug},
    {2u, serverLogger.info },
    {4u, serverLogger.warn },
    {8u, serverLogger.error}
};

static bool serverStarted = false;

void tryLogServerStarted(std::string& s) {
    if (s != "Server started.") return;
    serverStarted = true;

    ll::SeverStartEndTime = std::chrono::steady_clock::now();

    s = std::format(
        R"(Server started in ({:.1f}s)! For help, type "help" or "?")",
        std::chrono::duration_cast<std::chrono::duration<double>>(ll::SeverStartEndTime - ll::SeverStartBeginTime)
            .count()
    );
}

MCAPI void BedrockLogOut(uint priority, const char* pszFormat, ...);

LL_AUTO_STATIC_HOOK(
    BedrockLogOutHook,
    HookPriority::Normal,
    BedrockLogOut,
    void,
    uint        priority,
    const char* pszFormat,
    ...
) {
    constexpr const int BUFFER_SIZE = 4096; // from ida
    char                Buffer[BUFFER_SIZE];
    va_list             va;
    va_start(va, pszFormat);
    auto v1 = vsprintf(Buffer, pszFormat, va);
    va_end(va);
    if (v1 < 0 || v1 >= BUFFER_SIZE) return origin(priority, pszFormat, va);

    std::istringstream iss(Buffer);
    std::string        line;

    auto& logger = loggerMap.contains(priority) ? loggerMap.at(priority) : serverLogger.info;

    while (std::getline(iss, line)) {
        if (!line.empty() && line.back() == '\n') { line.pop_back(); }
        if (!serverStarted) tryLogServerStarted(line);
        logger << line << Logger::endl;
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
