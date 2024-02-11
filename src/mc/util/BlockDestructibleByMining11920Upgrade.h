#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockDestroyTimeVersioning {

class BlockDestructibleByMining11920Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDestructibleByMining11920Upgrade& operator=(BlockDestructibleByMining11920Upgrade const&);
    BlockDestructibleByMining11920Upgrade(BlockDestructibleByMining11920Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockDestructibleByMining11920Upgrade@BlockDestroyTimeVersioning@@UEAA@XZ
    virtual ~BlockDestructibleByMining11920Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockDestructibleByMining11920Upgrade@BlockDestroyTimeVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockDestructibleByMining11920Upgrade@BlockDestroyTimeVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockDestructibleByMining11920Upgrade@BlockDestroyTimeVersioning@@QEAA@XZ
    MCAPI BlockDestructibleByMining11920Upgrade();

    // NOLINTEND
};

}; // namespace BlockDestroyTimeVersioning
