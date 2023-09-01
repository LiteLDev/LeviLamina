#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockDestroyTimeVersioning {

class BlockDestructibleByMining11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDestructibleByMining11910Upgrade& operator=(BlockDestructibleByMining11910Upgrade const&) = delete;
    BlockDestructibleByMining11910Upgrade(BlockDestructibleByMining11910Upgrade const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?previousSchema@BlockDestructibleByMining11910Upgrade@BlockDestroyTimeVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockDestructibleByMining11910Upgrade@BlockDestroyTimeVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockDestructibleByMining11910Upgrade@BlockDestroyTimeVersioning@@QEAA@XZ
    MCAPI BlockDestructibleByMining11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockDestroyTimeVersioning
