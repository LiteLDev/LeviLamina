#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemInstance;
// clang-format on

struct ActorUseItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>               mActor;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mItemUsed;
    ::ll::TypedStorage<4, 4, ::ItemUseMethod>        mItemUseMethod;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUseItemEvent& operator=(ActorUseItemEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorUseItemEvent(::ActorUseItemEvent const&);

    MCAPI ~ActorUseItemEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorUseItemEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
