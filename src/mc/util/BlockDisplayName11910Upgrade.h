#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockDisplayNameVersioning {

class BlockDisplayName11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDisplayName11910Upgrade& operator=(BlockDisplayName11910Upgrade const&);
    BlockDisplayName11910Upgrade(BlockDisplayName11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockDisplayName11910Upgrade@BlockDisplayNameVersioning@@UEAA@XZ
    virtual ~BlockDisplayName11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockDisplayName11910Upgrade@BlockDisplayNameVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockDisplayName11910Upgrade@BlockDisplayNameVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockDisplayName11910Upgrade@BlockDisplayNameVersioning@@QEAA@XZ
    MCAPI BlockDisplayName11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockDisplayNameVersioning
