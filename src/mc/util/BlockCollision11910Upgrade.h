#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockCollisionVersioning {

class BlockCollision11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCollision11910Upgrade& operator=(BlockCollision11910Upgrade const&);
    BlockCollision11910Upgrade(BlockCollision11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockCollision11910Upgrade@BlockCollisionVersioning@@UEAA@XZ
    virtual ~BlockCollision11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockCollision11910Upgrade@BlockCollisionVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockCollision11910Upgrade@BlockCollisionVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockCollision11910Upgrade@BlockCollisionVersioning@@QEAA@XZ
    MCAPI BlockCollision11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockCollisionVersioning
