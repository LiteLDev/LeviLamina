#include "llapi/memory/Hook.h"

#include "liteloader/LiteLoader.h"
#include "liteloader/Config.h"

using namespace ll;
using namespace ll::memory;

// Fix the listening port twice
LL_AUTO_INSTANCE_HOOK(
    PortListenFix,
    HookPriority::Normal,
    "?LogIPSupport@RakPeerHelper@@AEAAXW4PeerPurpose@1@@Z",
    __int64
) {
    static bool isFirstLog = true;
    if (globalConfig.enableFixListenPort) {
        if (isFirstLog) {
            isFirstLog = false;
            origin();
            endTime = clock();
            Logger("Server").info(
                "Done (" + fmt::format("{:.1f}", static_cast<double>(endTime - startTime) / 1000) +
                R"(s)! For help, type "help" or "?")"
            );
            return 1;
        }
        return 0;
    } else {
        origin();
        if (!isFirstLog) {
            endTime = clock();
            Logger("Server").info(
                "Done (" + fmt::format("{:.1f}", static_cast<double>(endTime - startTime) / 1000) +
                R"(s)! For help, type "help" or "?")"
            );
        }
        isFirstLog = false;
        return 1;
    }
}
