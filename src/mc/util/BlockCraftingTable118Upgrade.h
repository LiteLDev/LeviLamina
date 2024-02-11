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

class BlockCraftingTable118Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCraftingTable118Upgrade& operator=(BlockCraftingTable118Upgrade const&);
    BlockCraftingTable118Upgrade(BlockCraftingTable118Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockCraftingTable118Upgrade@BlockCraftingTableVersioning@@UEAA@XZ
    virtual ~BlockCraftingTable118Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockCraftingTable118Upgrade@BlockCraftingTableVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockCraftingTable118Upgrade@BlockCraftingTableVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockCraftingTable118Upgrade@BlockCraftingTableVersioning@@QEAA@XZ
    MCAPI BlockCraftingTable118Upgrade();

    // NOLINTEND
};

}; // namespace BlockCraftingTableVersioning
