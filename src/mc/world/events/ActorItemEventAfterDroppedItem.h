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

struct ActorItemEventAfterDroppedItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                mActor;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorDamageSource>>    mSource;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>                mItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::EntityContext>>> mItemActors;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorItemEventAfterDroppedItem& operator=(ActorItemEventAfterDroppedItem const&);
    ActorItemEventAfterDroppedItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorItemEventAfterDroppedItem(::ActorItemEventAfterDroppedItem const&);

    MCAPI ~ActorItemEventAfterDroppedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorItemEventAfterDroppedItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
