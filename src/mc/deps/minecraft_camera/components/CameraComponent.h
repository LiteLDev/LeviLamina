#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkb86c88;
    ::ll::UntypedStorage<4, 16> mUnk88baa6;
    ::ll::UntypedStorage<4, 12> mUnkcd8bfb;
    ::ll::UntypedStorage<4, 4>  mUnk6ee7f5;
    ::ll::UntypedStorage<4, 4>  mUnk248258;
    ::ll::UntypedStorage<4, 4>  mUnk267bf7;
    ::ll::UntypedStorage<4, 4>  mUnkda7ea8;
    ::ll::UntypedStorage<4, 64> mUnkfc780d;
    ::ll::UntypedStorage<4, 64> mUnk8aba39;
    ::ll::UntypedStorage<4, 64> mUnkdeba6b;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraComponent& operator=(CameraComponent const&);
    CameraComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraComponent(::CameraComponent&&);

    MCAPI CameraComponent(::CameraComponent const&);

    MCAPI ::CameraComponent& operator=(::CameraComponent&&);

    MCAPI ~CameraComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CameraComponent&&);

    MCAPI void* $ctor(::CameraComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
