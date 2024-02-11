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

class BlockGeometry11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockGeometry11910Upgrade& operator=(BlockGeometry11910Upgrade const&);
    BlockGeometry11910Upgrade(BlockGeometry11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockGeometry11910Upgrade@BlockGeometryVersioning@@UEAA@XZ
    virtual ~BlockGeometry11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockGeometry11910Upgrade@BlockGeometryVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockGeometry11910Upgrade@BlockGeometryVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockGeometry11910Upgrade@BlockGeometryVersioning@@QEAA@XZ
    MCAPI BlockGeometry11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockGeometryVersioning
