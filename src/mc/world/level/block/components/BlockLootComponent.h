#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

struct BlockLootComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockLootComponent& operator=(BlockLootComponent const&);
    BlockLootComponent(BlockLootComponent const&);
    BlockLootComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockLootComponent() = default;

    MCAPI std::string const& getLootTable() const;

    // NOLINTEND
};
