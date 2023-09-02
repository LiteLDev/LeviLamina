#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockCraftingTableVersioning {

class BlockCraftingTable118Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCraftingTable118Upgrade& operator=(BlockCraftingTable118Upgrade const&) = delete;
    BlockCraftingTable118Upgrade(BlockCraftingTable118Upgrade const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?previousSchema@BlockCraftingTable118Upgrade@BlockCraftingTableVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockCraftingTable118Upgrade@BlockCraftingTableVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockCraftingTable118Upgrade@BlockCraftingTableVersioning@@QEAA@XZ
    MCAPI BlockCraftingTable118Upgrade();

    // NOLINTEND
};

}; // namespace BlockCraftingTableVersioning
