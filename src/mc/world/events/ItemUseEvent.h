#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class WeakEntityRef;
// clang-format on

struct ItemUseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInstance;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemUseEvent& operator=(ItemUseEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemUseEvent(::ItemUseEvent&&);

    MCAPI ItemUseEvent(::ItemUseEvent const&);

    MCAPI ~ItemUseEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemUseEvent&&);

    MCAPI void* $ctor(::ItemUseEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
