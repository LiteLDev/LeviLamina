#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AmbientSoundServerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3611a7;
    ::ll::UntypedStorage<8, 32> mUnk6cbb68;
    ::ll::UntypedStorage<4, 4>  mUnk39e8ba;
    ::ll::UntypedStorage<4, 4>  mUnk5222ba;
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientSoundServerComponent& operator=(AmbientSoundServerComponent const&);
    AmbientSoundServerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AmbientSoundServerComponent(::AmbientSoundServerComponent const&);

    MCAPI ::AmbientSoundServerComponent& operator=(::AmbientSoundServerComponent&&);

    MCAPI ~AmbientSoundServerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AmbientSoundServerComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
