#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DynamicAmbientSound;
// clang-format on

class AmbientSoundServerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DynamicAmbientSound>> mDynamicSounds;
    ::ll::TypedStorage<8, 32, ::std::string>                        mDefaultEventName;
    ::ll::TypedStorage<4, 4, uint>                                  mReevaluationTimeTicks;
    ::ll::TypedStorage<4, 4, uint>                                  mTicksSinceReevaluation;
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientSoundServerComponent& operator=(AmbientSoundServerComponent const&);
    AmbientSoundServerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AmbientSoundServerComponent(::AmbientSoundServerComponent const&);

    MCNAPI ::AmbientSoundServerComponent& operator=(::AmbientSoundServerComponent&&);

    MCNAPI ~AmbientSoundServerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AmbientSoundServerComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
