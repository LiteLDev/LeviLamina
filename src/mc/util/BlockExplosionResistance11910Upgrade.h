#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockExplosionResistanceVersioning {

class BlockExplosionResistance11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockExplosionResistance11910Upgrade& operator=(BlockExplosionResistance11910Upgrade const&);
    BlockExplosionResistance11910Upgrade(BlockExplosionResistance11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockExplosionResistance11910Upgrade@BlockExplosionResistanceVersioning@@UEAA@XZ
    virtual ~BlockExplosionResistance11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockExplosionResistance11910Upgrade@BlockExplosionResistanceVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockExplosionResistance11910Upgrade@BlockExplosionResistanceVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>& document) const;

    // symbol: ??0BlockExplosionResistance11910Upgrade@BlockExplosionResistanceVersioning@@QEAA@XZ
    MCAPI BlockExplosionResistance11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockExplosionResistanceVersioning
