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

class BlockDestructibleByMining11920Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDestructibleByMining11920Upgrade& operator=(BlockDestructibleByMining11920Upgrade const&);
    BlockDestructibleByMining11920Upgrade(BlockDestructibleByMining11920Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockDestructibleByMining11920Upgrade@BlockDestroyTimeVersioning@@UEAA@XZ
    virtual ~BlockDestructibleByMining11920Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockDestructibleByMining11920Upgrade@BlockDestroyTimeVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockDestructibleByMining11920Upgrade@BlockDestroyTimeVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>& document) const;

    // symbol: ??0BlockDestructibleByMining11920Upgrade@BlockDestroyTimeVersioning@@QEAA@XZ
    MCAPI BlockDestructibleByMining11920Upgrade();

    // NOLINTEND
};

}; // namespace BlockDestroyTimeVersioning
