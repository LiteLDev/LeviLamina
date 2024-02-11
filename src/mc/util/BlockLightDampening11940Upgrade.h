#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockLightDampeningVersioning {

class BlockLightDampening11940Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockLightDampening11940Upgrade& operator=(BlockLightDampening11940Upgrade const&);
    BlockLightDampening11940Upgrade(BlockLightDampening11940Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockLightDampening11940Upgrade@BlockLightDampeningVersioning@@UEAA@XZ
    virtual ~BlockLightDampening11940Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockLightDampening11940Upgrade@BlockLightDampeningVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockLightDampening11940Upgrade@BlockLightDampeningVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockLightDampening11940Upgrade@BlockLightDampeningVersioning@@QEAA@XZ
    MCAPI BlockLightDampening11940Upgrade();

    // NOLINTEND
};

}; // namespace BlockLightDampeningVersioning
