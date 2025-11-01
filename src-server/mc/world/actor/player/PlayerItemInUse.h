#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/PlayerInventorySlotData.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Player;
// clang-format on

class PlayerItemInUse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mShouldEmitGameEvents;
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    ::ll::TypedStorage<4, 8, ::PlayerInventorySlotData> mSlot;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void releaseUsing(::Player& player);

    MCAPI void setItemInUse(::ItemStack const& newItem, ::EntityContext& owner, int duration, ::PlayerInventorySlotData slot);

    MCAPI ~PlayerItemInUse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
