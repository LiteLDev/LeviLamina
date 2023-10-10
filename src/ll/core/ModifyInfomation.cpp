#include "ll/api/LoggerAPI.h"
#include "ll/api/memory/Hook.h"

#include "mc/deps/core/common/debug/LogDetails.h"

Logger serverLogger("Server");

std::unordered_map<unsigned int, decltype(serverLogger.debug)&> loggerMap = {
    {1u, serverLogger.debug},
    {2u, serverLogger.info },
    {4u, serverLogger.warn },
    {8u, serverLogger.error}
};

// Block BDS from adding LOG metadata

LL_AUTO_TYPED_INSTANCE_HOOK(
    AppendLogEntryMetadataHook,
    ll::memory::HookPriority::Normal,
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

MCAPI void BedrockLogOut(unsigned int priority, const char* pszFormat, ...);

LL_AUTO_STATIC_HOOK(
    BedrockLogOutHook,
    ll::memory::HookPriority::Normal,
    BedrockLogOut,
    void,
    unsigned int priority,
    const char*  pszFormat,
    ...
) {
    constexpr const int BUFFER_SIZE = 4096;
    char                Buffer[BUFFER_SIZE];
    va_list             va;
    va_start(va, pszFormat);
    auto v1 = vsprintf(Buffer, pszFormat, va);
    va_end(va);
    if (v1 < 0 || v1 >= BUFFER_SIZE) return origin(priority, pszFormat, va);

    std::istringstream iss(Buffer);
    std::string        line;

    while (std::getline(iss, line)) {
        if (!line.empty() && line.back() == '\n') { line.pop_back(); }
        auto  loggerIter = loggerMap.find(priority);
        auto& logger     = (loggerIter != loggerMap.end()) ? loggerIter->second : serverLogger.info;
        logger << line << Logger::endl;
    }
}
