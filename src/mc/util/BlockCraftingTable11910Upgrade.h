#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockCraftingTableVersioning {

class BlockCraftingTable11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCraftingTable11910Upgrade& operator=(BlockCraftingTable11910Upgrade const&);
    BlockCraftingTable11910Upgrade(BlockCraftingTable11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockCraftingTable11910Upgrade@BlockCraftingTableVersioning@@UEAA@XZ
    virtual ~BlockCraftingTable11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockCraftingTable11910Upgrade@BlockCraftingTableVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockCraftingTable11910Upgrade@BlockCraftingTableVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockCraftingTable11910Upgrade@BlockCraftingTableVersioning@@QEAA@XZ
    MCAPI BlockCraftingTable11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockCraftingTableVersioning
