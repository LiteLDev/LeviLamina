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

class BlockFriction11920Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockFriction11920Upgrade& operator=(BlockFriction11920Upgrade const&);
    BlockFriction11920Upgrade(BlockFriction11920Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockFriction11920Upgrade@@@UEAA@XZ
    virtual ~BlockFriction11920Upgrade();

    // vIndex: 1, symbol:
    // ?previousSchema@BlockFriction11920Upgrade@BlockFrictionVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockFriction11920Upgrade@BlockFrictionVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockFriction11920Upgrade@BlockFrictionVersioning@@QEAA@XZ
    MCAPI BlockFriction11920Upgrade();

    // NOLINTEND
};

}; // namespace BlockFrictionVersioning
