#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetBlockHitEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk42e16a;
    ::ll::UntypedStorage<4, 12> mUnk1dd2d9;
    ::ll::UntypedStorage<4, 12> mUnk11a7ad;
    ::ll::UntypedStorage<8, 24> mUnk922249;
    ::ll::UntypedStorage<4, 4>  mUnk695d83;
    ::ll::UntypedStorage<4, 4>  mUnk6fdf63;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetBlockHitEvent& operator=(TargetBlockHitEvent const&);
    TargetBlockHitEvent(TargetBlockHitEvent const&);
    TargetBlockHitEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TargetBlockHitEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
