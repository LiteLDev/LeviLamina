#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/enums/ClientInputLockCategory.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
// clang-format on

struct PlayerInputPermissionCategoryChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>          mPlayer;
    ::ll::TypedStorage<1, 1, ::ClientInputLockCategory> mCategory;
    ::ll::TypedStorage<1, 1, bool>                      mState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerInputPermissionCategoryChangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
