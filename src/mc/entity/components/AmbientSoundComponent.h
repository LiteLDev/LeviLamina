#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class AmbientSoundComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk498ea8;
    ::ll::UntypedStorage<4, 4> mUnkc9a3b7;
    ::ll::UntypedStorage<4, 4> mUnkc381c9;
    ::ll::UntypedStorage<4, 4> mUnk920583;
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientSoundComponent& operator=(AmbientSoundComponent const&);
    AmbientSoundComponent(AmbientSoundComponent const&);
    AmbientSoundComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setAmbientSoundRemainingTime(::Actor& owner, float seconds);
    // NOLINTEND
};
