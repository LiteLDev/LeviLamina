#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProjectileHitEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk541f32;
    ::ll::UntypedStorage<8, 112> mUnka6c28a;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileHitEvent& operator=(ProjectileHitEvent const&);
    ProjectileHitEvent(ProjectileHitEvent const&);
    ProjectileHitEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ProjectileHitEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
