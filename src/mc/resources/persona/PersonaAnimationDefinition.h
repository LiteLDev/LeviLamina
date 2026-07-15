#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersonaAnimationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk580557;
    ::ll::UntypedStorage<8, 32> mUnkb767c6;
    ::ll::UntypedStorage<8, 16> mUnk35e607;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaAnimationDefinition& operator=(PersonaAnimationDefinition const&);
    PersonaAnimationDefinition(PersonaAnimationDefinition const&);
    PersonaAnimationDefinition();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~PersonaAnimationDefinition();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PersonaAnimationDefinition const& INVALID_ANIMATION_DEFINITION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
