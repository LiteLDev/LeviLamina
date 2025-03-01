#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ItemStack;
class Player;
struct PlayerInventorySlotData;
// clang-format on

struct PlayerItemInUse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mShouldSendInteractionGameEvents;
    ::ll::TypedStorage<8, 152, ::ItemStack>             mItem;
    ::ll::TypedStorage<4, 8, ::PlayerInventorySlotData> mSlot;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void releaseUsing(::Player& player);

    MCAPI void
    setItemInUse(::ItemStack const& newItem, ::EntityContext& owner, int duration, ::PlayerInventorySlotData slot);

    MCAPI ~PlayerItemInUse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
