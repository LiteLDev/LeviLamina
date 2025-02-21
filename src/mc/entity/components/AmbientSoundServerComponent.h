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
