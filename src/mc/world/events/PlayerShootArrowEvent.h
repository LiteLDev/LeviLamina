#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerShootArrowEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mArrow;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mWeaponItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mArrowItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerShootArrowEvent& operator=(PlayerShootArrowEvent const&) = default;
    PlayerShootArrowEvent()                                        = default;

public:
    PlayerShootArrowEvent(
        WeakRef<EntityContext> const& player,
        WeakRef<EntityContext> const& arrow,
        ItemStack const&              weaponItem,
        ItemStack const&              arrowItem
    )
    : mPlayer(player),
      mArrow(arrow),
      mWeaponItem(weaponItem),
      mArrowItem(arrowItem) {}

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerShootArrowEvent(::PlayerShootArrowEvent const&);

    MCAPI ~PlayerShootArrowEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::PlayerShootArrowEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
