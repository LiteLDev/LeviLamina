#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersonaAnimationDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSONAANIMATIONDEFINITION
public:
    PersonaAnimationDefinition& operator=(PersonaAnimationDefinition const&) = delete;
    PersonaAnimationDefinition(PersonaAnimationDefinition const&)            = delete;
    PersonaAnimationDefinition()                                             = delete;
#endif

public:
    /**
     * @symbol ??1PersonaAnimationDefinition\@\@QEAA\@XZ
     */
    MCAPI ~PersonaAnimationDefinition();
    /**
     * @symbol ?INVALID_ANIMATION_DEFINITION\@PersonaAnimationDefinition\@\@2U1\@B
     */
    MCAPI static struct PersonaAnimationDefinition const INVALID_ANIMATION_DEFINITION;
};
