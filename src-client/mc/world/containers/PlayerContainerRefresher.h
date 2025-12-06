#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class DynamicContainerManager;
class ItemStack;
class Packet;
// clang-format on

struct PlayerContainerRefresher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::Packet&)>> mSendNetworkPacket;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    slotChanged(::DynamicContainerManager& menu, ::Container& container, int slot, ::ItemStack const& newItem) const;
    // NOLINTEND
};
