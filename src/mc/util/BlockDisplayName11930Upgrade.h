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

class BlockDisplayName11930Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDisplayName11930Upgrade& operator=(BlockDisplayName11930Upgrade const&);
    BlockDisplayName11930Upgrade(BlockDisplayName11930Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockDisplayName11930Upgrade() = default;

    // vIndex: 1
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    MCAPI BlockDisplayName11930Upgrade();

    // NOLINTEND
};

}; // namespace BlockDisplayNameVersioning
