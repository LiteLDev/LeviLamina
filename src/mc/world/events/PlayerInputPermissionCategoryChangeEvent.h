#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInputPermissionCategoryChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk136a65;
    ::ll::UntypedStorage<1, 1>  mUnk440216;
    ::ll::UntypedStorage<1, 1>  mUnkda0503;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInputPermissionCategoryChangeEvent& operator=(PlayerInputPermissionCategoryChangeEvent const&);
    PlayerInputPermissionCategoryChangeEvent(PlayerInputPermissionCategoryChangeEvent const&);
    PlayerInputPermissionCategoryChangeEvent();

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
