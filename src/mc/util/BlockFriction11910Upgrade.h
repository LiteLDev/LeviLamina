#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockFrictionVersioning {

class BlockFriction11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockFriction11910Upgrade& operator=(BlockFriction11910Upgrade const&);
    BlockFriction11910Upgrade(BlockFriction11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockFriction11910Upgrade@BlockFrictionVersioning@@UEAA@XZ
    virtual ~BlockFriction11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockFriction11910Upgrade@BlockFrictionVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockFriction11910Upgrade@BlockFrictionVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockFriction11910Upgrade@BlockFrictionVersioning@@QEAA@XZ
    MCAPI BlockFriction11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockFrictionVersioning
