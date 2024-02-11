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

class BlockLightDampening118Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockLightDampening118Upgrade& operator=(BlockLightDampening118Upgrade const&);
    BlockLightDampening118Upgrade(BlockLightDampening118Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockLightDampening118Upgrade@BlockLightDampeningVersioning@@UEAA@XZ
    virtual ~BlockLightDampening118Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockLightDampening118Upgrade@BlockLightDampeningVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockLightDampening118Upgrade@BlockLightDampeningVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockLightDampening118Upgrade@BlockLightDampeningVersioning@@QEAA@XZ
    MCAPI BlockLightDampening118Upgrade();

    // NOLINTEND
};

}; // namespace BlockLightDampeningVersioning
