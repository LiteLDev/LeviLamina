#include "llapi/mc/PackInfoData.hpp"
#include "llapi/mc/ResourcePacksInfoPacket.hpp"
#include "liteloader/Config.h"

THook(ResourcePacksInfoPacket*,
      "??0ResourcePacksInfoPacket@@QEAA@_NAEAV?$vector@UPackInfoData@@V?$allocator@UPackInfoData@@@std@@@std@@10$$QEAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@2@@Z",
      ResourcePacksInfoPacket* a1, bool a2, std::vector<struct PackInfoData>& a3, std::vector<struct PackInfoData>& a4,
      bool a5, void** a6) {
    try {      
        for (int i = 0; i < a4.size(); ++i) {
            auto uuid = a4[i].mPackIdVersion.mUUID.asString();
            transform(uuid.begin(), uuid.end(), uuid.begin(), ::toupper);
            a4[i].mContentKey = ll::globalConfig.resourcePackEncryptionMap[uuid];
        }
    } catch (...) { return original(a1, a2, a3, a4, a5, a6); }
    return original(a1, a2, a3, a4, a5,a6);
}