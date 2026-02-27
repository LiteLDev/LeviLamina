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
    Actor&             mActor;
    ItemInstance const mItemUsed;
    ItemUseMethod      mItemUseMethod;
    // NOLINTEND

public:
    ActorUseItemEvent(Actor& actor, ItemInstance const& itemUsed, ItemUseMethod itemUseMethod)
    : mActor(actor),
      mItemUsed(itemUsed),
      mItemUseMethod(itemUseMethod) {}

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
    MCFOLD void $dtor();
    // NOLINTEND
};
