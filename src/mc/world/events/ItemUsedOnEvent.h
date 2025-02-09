#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ItemUseOnEvent.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
// clang-format on

struct ItemUsedOnEvent : public ::ItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemAfterUse;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemUsedOnEvent& operator=(ItemUsedOnEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemUsedOnEvent(::ItemUsedOnEvent const&);

    MCAPI ItemUsedOnEvent(::ItemUsedOnEvent&&);

    MCAPI ~ItemUsedOnEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemUsedOnEvent const&);

    MCAPI void* $ctor(::ItemUsedOnEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
