#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockExplosionResistanceVersioning {

class BlockDestructibleByExplosion11920Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDestructibleByExplosion11920Upgrade& operator=(BlockDestructibleByExplosion11920Upgrade const&);
    BlockDestructibleByExplosion11920Upgrade(BlockDestructibleByExplosion11920Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockDestructibleByExplosion11920Upgrade@BlockExplosionResistanceVersioning@@UEAA@XZ
    virtual ~BlockDestructibleByExplosion11920Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockDestructibleByExplosion11920Upgrade@BlockExplosionResistanceVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockDestructibleByExplosion11920Upgrade@BlockExplosionResistanceVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockDestructibleByExplosion11920Upgrade@BlockExplosionResistanceVersioning@@QEAA@XZ
    MCAPI BlockDestructibleByExplosion11920Upgrade();

    // NOLINTEND
};

}; // namespace BlockExplosionResistanceVersioning
