#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockCreativeGroupVersioning {

class BlockCreativeGroup11920Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCreativeGroup11920Upgrade& operator=(BlockCreativeGroup11920Upgrade const&);
    BlockCreativeGroup11920Upgrade(BlockCreativeGroup11920Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockCreativeGroup11920Upgrade@BlockCreativeGroupVersioning@@UEAA@XZ
    virtual ~BlockCreativeGroup11920Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockCreativeGroup11920Upgrade@BlockCreativeGroupVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockCreativeGroup11920Upgrade@BlockCreativeGroupVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockCreativeGroup11920Upgrade@BlockCreativeGroupVersioning@@QEAA@XZ
    MCAPI BlockCreativeGroup11920Upgrade();

    // NOLINTEND
};

}; // namespace BlockCreativeGroupVersioning
