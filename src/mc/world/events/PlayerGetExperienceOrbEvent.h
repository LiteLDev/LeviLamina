#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerGetExperienceOrbEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb74a39;
    ::ll::UntypedStorage<4, 4>  mUnkdd7e06;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerGetExperienceOrbEvent& operator=(PlayerGetExperienceOrbEvent const&);
    PlayerGetExperienceOrbEvent(PlayerGetExperienceOrbEvent const&);
    PlayerGetExperienceOrbEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerGetExperienceOrbEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
