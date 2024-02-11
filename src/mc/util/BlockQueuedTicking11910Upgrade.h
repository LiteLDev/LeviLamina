#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockQueuedTickingVersioning {

class BlockQueuedTicking11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockQueuedTicking11910Upgrade& operator=(BlockQueuedTicking11910Upgrade const&);
    BlockQueuedTicking11910Upgrade(BlockQueuedTicking11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockQueuedTicking11910Upgrade@BlockQueuedTickingVersioning@@UEAA@XZ
    virtual ~BlockQueuedTicking11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockQueuedTicking11910Upgrade@BlockQueuedTickingVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockQueuedTicking11910Upgrade@BlockQueuedTickingVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockQueuedTicking11910Upgrade@BlockQueuedTickingVersioning@@QEAA@XZ
    MCAPI BlockQueuedTicking11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockQueuedTickingVersioning
