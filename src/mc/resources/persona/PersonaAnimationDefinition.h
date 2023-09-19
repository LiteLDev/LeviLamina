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
    // symbol: ??1PersonaAnimationDefinition@@QEAA@XZ
    MCAPI ~PersonaAnimationDefinition();

    // symbol: ?INVALID_ANIMATION_DEFINITION@PersonaAnimationDefinition@@2U1@B
    MCAPI static struct PersonaAnimationDefinition const INVALID_ANIMATION_DEFINITION;

    // NOLINTEND
};
