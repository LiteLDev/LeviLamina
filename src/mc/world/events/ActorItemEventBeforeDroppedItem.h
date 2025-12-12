#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class EntityContext;
class ItemStack;
// clang-format on

struct ActorItemEventBeforeDroppedItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>             mActor;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorDamageSource>> mSource;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>             mItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorItemEventBeforeDroppedItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
