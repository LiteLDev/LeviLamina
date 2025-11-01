#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersonaAnimationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7870ea;
    ::ll::UntypedStorage<8, 32> mUnkc4c500;
    ::ll::UntypedStorage<8, 16> mUnk35e607;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaAnimationDefinition& operator=(PersonaAnimationDefinition const&);
    PersonaAnimationDefinition(PersonaAnimationDefinition const&);
    PersonaAnimationDefinition();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PersonaAnimationDefinition const& INVALID_ANIMATION_DEFINITION();
    // NOLINTEND

};
