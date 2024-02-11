#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockLightEmissionVersioning {

class BlockLightEmission11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockLightEmission11910Upgrade& operator=(BlockLightEmission11910Upgrade const&);
    BlockLightEmission11910Upgrade(BlockLightEmission11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockLightEmission11910Upgrade@BlockLightEmissionVersioning@@UEAA@XZ
    virtual ~BlockLightEmission11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockLightEmission11910Upgrade@BlockLightEmissionVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockLightEmission11910Upgrade@BlockLightEmissionVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockLightEmission11910Upgrade@BlockLightEmissionVersioning@@QEAA@XZ
    MCAPI BlockLightEmission11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockLightEmissionVersioning
