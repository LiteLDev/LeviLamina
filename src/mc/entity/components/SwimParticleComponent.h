#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SwimParticleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mParticleEffectName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SwimParticleComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
