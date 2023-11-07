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

class BlockGeometry12010Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockGeometry12010Upgrade& operator=(BlockGeometry12010Upgrade const&);
    BlockGeometry12010Upgrade(BlockGeometry12010Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockGeometry12010Upgrade@@@UEAA@XZ
    virtual ~BlockGeometry12010Upgrade();

    // vIndex: 1, symbol:
    // ?previousSchema@BlockGeometry12010Upgrade@BlockGeometryVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockGeometry12010Upgrade@BlockGeometryVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0BlockGeometry12010Upgrade@BlockGeometryVersioning@@QEAA@XZ
    MCAPI BlockGeometry12010Upgrade();

    // NOLINTEND
};

}; // namespace BlockGeometryVersioning
