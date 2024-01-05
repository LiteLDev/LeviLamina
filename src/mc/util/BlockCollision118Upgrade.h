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

class BlockCollision118Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCollision118Upgrade& operator=(BlockCollision118Upgrade const&);
    BlockCollision118Upgrade(BlockCollision118Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockCollision118Upgrade@BlockCollisionVersioning@@UEAA@XZ
    virtual ~BlockCollision118Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockCollision118Upgrade@BlockCollisionVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockCollision118Upgrade@BlockCollisionVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>& document) const;

    // symbol: ??0BlockCollision118Upgrade@BlockCollisionVersioning@@QEAA@XZ
    MCAPI BlockCollision118Upgrade();

    // NOLINTEND
};

}; // namespace BlockCollisionVersioning
