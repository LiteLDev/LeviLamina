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
    // vIndex: 0
    virtual ~BlockDestructibleByExplosion11920Upgrade() = default;

    // vIndex: 1
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    MCAPI BlockDestructibleByExplosion11920Upgrade();

    // NOLINTEND
};

}; // namespace BlockExplosionResistanceVersioning
