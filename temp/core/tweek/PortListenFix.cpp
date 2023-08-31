#include "liteloader/api/memory/Hook.h"

#include "liteloader/core/Config.h"
#include "liteloader/core/LiteLoader.h"

using namespace ll;
using namespace ll::memory;

// Fix the listening port twice
LL_AUTO_INSTANCE_HOOK(
    PortListenFix,
    HookPriority::Normal,
    "?LogIPSupport@RakPeerHelper@@AEAAXW4PeerPurpose@1@@Z",
    int64_t
) {
    static bool isFirstLog = true;
    if (globalConfig.enableFixListenPort) {
        if (isFirstLog) {
            isFirstLog  = false;
            int64_t ret = origin();
            endTime     = clock();
            Logger("Server").info(
                "Done (" + fmt::format("{:.1f}", static_cast<double>(endTime - startTime) / 1000) +
                R"(s)! For help, type "help" or "?")"
            );
            return ret;
        }
        return 0;
    } else {
        int64_t ret = origin();
        if (!isFirstLog) {
            endTime = clock();
            Logger("Server").info(
                "Done (" + fmt::format("{:.1f}", static_cast<double>(endTime - startTime) / 1000) +
                R"(s)! For help, type "help" or "?")"
            );
        }
        isFirstLog = false;
        return ret;
    }
}
