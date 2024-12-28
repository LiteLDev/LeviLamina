#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

struct BlockDestructibleByMiningComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk560512;
    ::ll::UntypedStorage<8, 24> mUnk3dbb3e;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDestructibleByMiningComponent& operator=(BlockDestructibleByMiningComponent const&);
    BlockDestructibleByMiningComponent(BlockDestructibleByMiningComponent const&);
    BlockDestructibleByMiningComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float getDestroySpeed(::ItemStackBase const& item) const;
    // NOLINTEND
};
