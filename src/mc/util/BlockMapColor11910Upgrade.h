#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockMapColorVersioning {

class BlockMapColor11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockMapColor11910Upgrade& operator=(BlockMapColor11910Upgrade const&);
    BlockMapColor11910Upgrade(BlockMapColor11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockMapColor11910Upgrade@BlockMapColorVersioning@@UEAA@XZ
    virtual ~BlockMapColor11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockMapColor11910Upgrade@BlockMapColorVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockMapColor11910Upgrade@BlockMapColorVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockMapColor11910Upgrade@BlockMapColorVersioning@@QEAA@XZ
    MCAPI BlockMapColor11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockMapColorVersioning
