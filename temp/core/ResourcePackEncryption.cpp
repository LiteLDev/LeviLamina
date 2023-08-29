#include "mc/PackInfoData.hpp"
#include "mc/ResourcePacksInfoPacket.hpp"
#include "liteloader/api/memory/Hook.h"

#include "liteloader/core/Config.h"

LL_AUTO_TYPED_INSTANCE_HOOK(
    ResourcePackEncryptionHook,
    ResourcePacksInfoPacket,
    HookPriority::Normal,
    "??0ResourcePacksInfoPacket@@QEAA@_NAEAV?$vector@UPackInfoData@@V?$allocator@UPackInfoData@@@std@@@std@@10@Z",
    ResourcePacksInfoPacket*,
    bool                              a2,
    std::vector<struct PackInfoData>& a3,
    std::vector<struct PackInfoData>& a4,
    bool                              a5
) {
    try {
        for (int i = 0; i < a4.size(); ++i) {
            auto uuid = a4[i].mPackIdVersion.mUUID.asString();
            transform(uuid.begin(), uuid.end(), uuid.begin(), ::toupper);
            a4[i].mContentKey = ll::globalConfig.resourcePackEncryptionMap[uuid];
        }
    } catch (...) {
        return origin(a2, a3, a4, a5);
    }
    return origin(a2, a3, a4, a5);
}
