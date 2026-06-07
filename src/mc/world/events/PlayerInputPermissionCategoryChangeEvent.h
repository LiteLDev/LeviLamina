#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/entity/enums/ClientInputLockCategory.h"

struct PlayerInputPermissionCategoryChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>          mPlayer;
    ::ll::TypedStorage<1, 1, ::ClientInputLockCategory> mCategory;
    ::ll::TypedStorage<1, 1, bool>                      mState;
    // NOLINTEND
};
