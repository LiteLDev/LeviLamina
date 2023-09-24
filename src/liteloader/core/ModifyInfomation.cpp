#include "liteloader/api/memory/Hook.h"
#include "liteloader/api/LoggerAPI.h"

#include "mc/deps/core/common/debug/LogDetails.h"

Logger serverLogger("Server");

std::map<unsigned int, decltype(serverLogger.debug)&> loggerMap = {
    {1u, serverLogger.debug},
    {2u, serverLogger.info},
    {4u, serverLogger.warn},
    {8u, serverLogger.error}
};

// Block BDS from adding LOG metadata
LL_AUTO_TYPED_INSTANCE_HOOK(AppendLogEntryMetadata,BedrockLog::LogDetails,ll::memory::HookPriority::Normal,
      "?_appendLogEntryMetadata@LogDetails@BedrockLog@@AEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@"
      "@std@@V34@W4LogAreaID@@I1HH@Z",void,
      void* a1, void* a2, void** a3, int a4, unsigned int a5, __int64 a6, unsigned int a7, unsigned int a8) {
}

LL_AUTO_STATIC_HOOK(BedrockLogOut, ll::memory::HookPriority::Normal, "?BedrockLogOut@@YAXIPEBDZZ", void, const unsigned int _priority, const char *pszFormat, ...) {
    const int BUFFER_SIZE = 4096;
    char Buffer[BUFFER_SIZE];
    va_list va;
    va_start(va, pszFormat);
    auto v1 = vsprintf(Buffer, pszFormat, va);
    va_end(va);
    if (v1 < 0 || v1 >= BUFFER_SIZE)
        return origin(_priority, pszFormat, va);

    std::istringstream iss(Buffer);
    std::string line;

    while (std::getline(iss, line)) {
        if (!line.empty() && line.back() == '\n') {
            line.pop_back();
        }
        auto loggerIter = loggerMap.find(_priority);
        auto& logger = (loggerIter != loggerMap.end()) ? loggerIter->second : serverLogger.info;
        logger << line << Logger::endl;
    }
}