#include "liteloader/api/LoggerAPI.h"
#include "liteloader/api/memory/Hook.h"

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
    ::BedrockLog::LogDetails,
    ll::memory::HookPriority::Normal,
    // &::BedrockLog::LogDetails::_appendLogEntryMetadata,
    "?_appendLogEntryMetadata@LogDetails@BedrockLog@@AEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@"
    "@std@@V34@W4LogAreaID@@I1HH@Z",
    void,
    std::string&,
    std::string, // NOLINT
    ::LogAreaID,
    uint,
    std::string, // NOLINT
    int,
    int
) {}

LL_AUTO_STATIC_HOOK(
    BedrockLogOutHook,
    ll::memory::HookPriority::Normal,
    "?BedrockLogOut@@YAXIPEBDZZ",
    void,
    const unsigned int priority,
    const char*        pszFormat,
    ...
) {
    constexpr const int BUFFER_SIZE = 4096;
    char                Buffer[BUFFER_SIZE];
    va_list             va;
    va_start(va, pszFormat);
    auto v1 = vsprintf(Buffer, pszFormat, va);
    va_end(va);
    if (v1 < 0 || v1 >= BUFFER_SIZE)
        return origin(priority, pszFormat, va);

    std::istringstream iss(Buffer);
    std::string        line;

    while (std::getline(iss, line)) {
        if (!line.empty() && line.back() == '\n') {
            line.pop_back();
        }
        auto  loggerIter = loggerMap.find(priority);
        auto& logger     = (loggerIter != loggerMap.end()) ? loggerIter->second : serverLogger.info;
        logger << line << Logger::endl;
    }
}
