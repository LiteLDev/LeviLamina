#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KeyboardInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke92c2d;
    ::ll::UntypedStorage<8, 64> mUnke6aa1c;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI KeyboardInputMapping();

    MCNAPI KeyboardInputMapping(::KeyboardInputMapping const&);

    MCNAPI ::KeyboardInputMapping& operator=(::KeyboardInputMapping&&);

    MCNAPI ::KeyboardInputMapping& operator=(::KeyboardInputMapping const&);

    MCNAPI ~KeyboardInputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::KeyboardInputMapping const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
