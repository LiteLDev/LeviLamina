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
    ::ll::UntypedStorage<4, 4>   mUnkac70e3;
    ::ll::UntypedStorage<1, 1>   mUnkafa66a;
    ::ll::UntypedStorage<8, 152> mUnkf0096a;
    ::ll::UntypedStorage<4, 8>   mUnkf50329;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerItemInUse& operator=(PlayerItemInUse const&);
    PlayerItemInUse(PlayerItemInUse const&);
    PlayerItemInUse();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool checkShouldUse();

    MCAPI void clearItemInUse(::EntityContext& owner);

    MCFOLD ::ItemStack const& getItemInUse() const;

    MCAPI int getMoveToMouthDuration() const;

    MCAPI int getUsedDuration() const;

    MCAPI bool isInSlot(::PlayerInventorySlotData slot) const;

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
