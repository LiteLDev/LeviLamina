#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ItemUseOnEvent.h"

struct ItemUsedOnEvent : public ::ItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnkb13683;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemUsedOnEvent& operator=(ItemUsedOnEvent const&);
    ItemUsedOnEvent();

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
