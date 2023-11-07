#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockLootVersioning {

class BlockLoot11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockLoot11910Upgrade& operator=(BlockLoot11910Upgrade const&);
    BlockLoot11910Upgrade(BlockLoot11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockLoot11910Upgrade@@@UEAA@XZ
    virtual ~BlockLoot11910Upgrade();

    // vIndex: 1, symbol: ?previousSchema@BlockLoot11910Upgrade@BlockLootVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockLoot11910Upgrade@BlockLootVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockLoot11910Upgrade@BlockLootVersioning@@QEAA@XZ
    MCAPI BlockLoot11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockLootVersioning
