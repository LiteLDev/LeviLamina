#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockGeometryVersioning {

class BlockGeometry12010Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockGeometry12010Upgrade& operator=(BlockGeometry12010Upgrade const&);
    BlockGeometry12010Upgrade(BlockGeometry12010Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockGeometry12010Upgrade@BlockGeometryVersioning@@UEAA@XZ
    virtual ~BlockGeometry12010Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockGeometry12010Upgrade@BlockGeometryVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockGeometry12010Upgrade@BlockGeometryVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockGeometry12010Upgrade@BlockGeometryVersioning@@QEAA@XZ
    MCAPI BlockGeometry12010Upgrade();

    // NOLINTEND
};

}; // namespace BlockGeometryVersioning
