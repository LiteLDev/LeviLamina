#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    MCNAPI ActorUseItemEvent(::ActorUseItemEvent const&);

    MCNAPI ~ActorUseItemEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorUseItemEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
