#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk94c1e3;
    ::ll::UntypedStorage<1, 1>  mUnk5e04b7;
    ::ll::UntypedStorage<4, 4>  mUnk21548b;
    ::ll::UntypedStorage<4, 4>  mUnkbdca45;
    ::ll::UntypedStorage<4, 64> mUnkd6355d;
    ::ll::UntypedStorage<8, 8>  mUnkbe6877;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpControlComponent& operator=(JumpControlComponent const&);
    JumpControlComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JumpControlComponent(::JumpControlComponent const& other);

    MCAPI ~JumpControlComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::JumpControlComponent const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
