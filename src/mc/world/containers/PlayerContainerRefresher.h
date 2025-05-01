#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class DynamicContainerManager;
class ItemStack;
// clang-format on

struct PlayerContainerRefresher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk507ff8;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerContainerRefresher& operator=(PlayerContainerRefresher const&);
    PlayerContainerRefresher(PlayerContainerRefresher const&);
    PlayerContainerRefresher();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    slotChanged(::DynamicContainerManager& menu, ::Container& container, int slot, ::ItemStack const& newItem) const;
    // NOLINTEND
};
