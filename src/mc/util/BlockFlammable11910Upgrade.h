#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockFlammableVersioning {

class BlockFlammable11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockFlammable11910Upgrade& operator=(BlockFlammable11910Upgrade const&);
    BlockFlammable11910Upgrade(BlockFlammable11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockFlammable11910Upgrade@BlockFlammableVersioning@@UEAA@XZ
    virtual ~BlockFlammable11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockFlammable11910Upgrade@BlockFlammableVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockFlammable11910Upgrade@BlockFlammableVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockFlammable11910Upgrade@BlockFlammableVersioning@@QEAA@XZ
    MCAPI BlockFlammable11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockFlammableVersioning
