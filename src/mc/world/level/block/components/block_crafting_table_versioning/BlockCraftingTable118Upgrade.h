#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockCraftingTableVersioning {

class BlockCraftingTable118Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCraftingTable118Upgrade& operator=(BlockCraftingTable118Upgrade const&);
    BlockCraftingTable118Upgrade(BlockCraftingTable118Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockCraftingTable118Upgrade() = default;

    // vIndex: 1
    virtual bool previousSchema(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            component
    ) const;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, class SemVersion const&)
        const;

    MCAPI BlockCraftingTable118Upgrade();

    // NOLINTEND
};

}; // namespace BlockCraftingTableVersioning
