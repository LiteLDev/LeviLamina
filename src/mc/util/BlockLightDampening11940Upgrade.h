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
    // vIndex: 0
    virtual ~BlockLightDampening11940Upgrade() = default;

    // vIndex: 1
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    MCAPI BlockLightDampening11940Upgrade();

    // NOLINTEND
};

}; // namespace BlockLightDampeningVersioning
