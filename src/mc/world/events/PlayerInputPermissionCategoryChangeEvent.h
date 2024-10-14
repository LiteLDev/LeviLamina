#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInputPermissionCategoryChangeEvent {
public:
    // prevent constructor by default
    PlayerInputPermissionCategoryChangeEvent& operator=(PlayerInputPermissionCategoryChangeEvent const&);
    PlayerInputPermissionCategoryChangeEvent(PlayerInputPermissionCategoryChangeEvent const&);
    PlayerInputPermissionCategoryChangeEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerInputPermissionCategoryChangeEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
