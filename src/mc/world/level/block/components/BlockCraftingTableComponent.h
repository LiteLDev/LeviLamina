#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCraftingTableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6cf70c;
    ::ll::UntypedStorage<8, 32> mUnk8b1187;
    ::ll::UntypedStorage<8, 24> mUnk4236f4;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCraftingTableComponent& operator=(BlockCraftingTableComponent const&);
    BlockCraftingTableComponent(BlockCraftingTableComponent const&);
    BlockCraftingTableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockCraftingTableComponent& operator=(::BlockCraftingTableComponent&&);
    // NOLINTEND
};
