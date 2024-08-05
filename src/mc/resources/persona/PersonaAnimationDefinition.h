#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersonaAnimationDefinition {
public:
    // prevent constructor by default
    PersonaAnimationDefinition& operator=(PersonaAnimationDefinition const&);
    PersonaAnimationDefinition(PersonaAnimationDefinition const&);
    PersonaAnimationDefinition();

public:
    // NOLINTBEGIN
    MCAPI ~PersonaAnimationDefinition();

    MCAPI static struct PersonaAnimationDefinition const INVALID_ANIMATION_DEFINITION;

    // NOLINTEND
};
