#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLootComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb77f25;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockLootComponent& operator=(BlockLootComponent const&);
    BlockLootComponent(BlockLootComponent const&);
    BlockLootComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const& getLootTable() const;
    // NOLINTEND
};
