#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersonaAnimationDefinition {

public:
    // prevent constructor by default
    PersonaAnimationDefinition& operator=(PersonaAnimationDefinition const&) = delete;
    PersonaAnimationDefinition(PersonaAnimationDefinition const&)            = delete;
    PersonaAnimationDefinition()                                             = delete;

public:
    /**
     * @symbol ??1PersonaAnimationDefinition\@\@QEAA\@XZ
     */
    MCAPI ~PersonaAnimationDefinition(); // NOLINT
    /**
     * @symbol ?INVALID_ANIMATION_DEFINITION\@PersonaAnimationDefinition\@\@2U1\@B
     */
    MCAPI static struct PersonaAnimationDefinition const INVALID_ANIMATION_DEFINITION; // NOLINT
};
