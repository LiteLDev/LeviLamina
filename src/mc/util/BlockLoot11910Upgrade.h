#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockLootVersioning {

class BlockLoot11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockLoot11910Upgrade& operator=(BlockLoot11910Upgrade const&);
    BlockLoot11910Upgrade(BlockLoot11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockLoot11910Upgrade@BlockLootVersioning@@UEAA@XZ
    virtual ~BlockLoot11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockLoot11910Upgrade@BlockLootVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockLoot11910Upgrade@BlockLootVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockLoot11910Upgrade@BlockLootVersioning@@QEAA@XZ
    MCAPI BlockLoot11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockLootVersioning
