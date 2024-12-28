#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExplosionStartedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5aecb2;
    ::ll::UntypedStorage<8, 8>  mUnk84e34b;
    ::ll::UntypedStorage<8, 24> mUnk136141;
    // NOLINTEND

public:
    // prevent constructor by default
    ExplosionStartedEvent& operator=(ExplosionStartedEvent const&);
    ExplosionStartedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExplosionStartedEvent(::ExplosionStartedEvent const&);

    MCAPI ExplosionStartedEvent(::ExplosionStartedEvent&&);

    MCAPI ~ExplosionStartedEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ExplosionStartedEvent const&);

    MCAPI void* $ctor(::ExplosionStartedEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
