#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockSelectionBoxVersioning {

class BlockAimCollision118Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockAimCollision118Upgrade& operator=(BlockAimCollision118Upgrade const&);
    BlockAimCollision118Upgrade(BlockAimCollision118Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockAimCollision118Upgrade@BlockSelectionBoxVersioning@@UEAA@XZ
    virtual ~BlockAimCollision118Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockAimCollision118Upgrade@BlockSelectionBoxVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockAimCollision118Upgrade@BlockSelectionBoxVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockAimCollision118Upgrade@BlockSelectionBoxVersioning@@QEAA@XZ
    MCAPI BlockAimCollision118Upgrade();

    // NOLINTEND
};

}; // namespace BlockSelectionBoxVersioning
