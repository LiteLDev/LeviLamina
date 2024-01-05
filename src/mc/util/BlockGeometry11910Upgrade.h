#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockGeometryVersioning {

class BlockGeometry11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockGeometry11910Upgrade& operator=(BlockGeometry11910Upgrade const&);
    BlockGeometry11910Upgrade(BlockGeometry11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockGeometry11910Upgrade@BlockGeometryVersioning@@UEAA@XZ
    virtual ~BlockGeometry11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockGeometry11910Upgrade@BlockGeometryVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockGeometry11910Upgrade@BlockGeometryVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>& document) const;

    // symbol: ??0BlockGeometry11910Upgrade@BlockGeometryVersioning@@QEAA@XZ
    MCAPI BlockGeometry11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockGeometryVersioning
