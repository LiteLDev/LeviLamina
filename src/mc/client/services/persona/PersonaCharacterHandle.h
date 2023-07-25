#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct PersonaCharacterHandle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSONA_PERSONACHARACTERHANDLE
public:
    PersonaCharacterHandle& operator=(PersonaCharacterHandle const&) = delete;
    PersonaCharacterHandle(PersonaCharacterHandle const&)            = delete;
    PersonaCharacterHandle()                                         = delete;
#endif

public:
    /**
     * @symbol ?INVALID\@PersonaCharacterHandle\@persona\@\@2U12\@B
     */
    MCAPI static struct persona::PersonaCharacterHandle const INVALID;
};

}; // namespace persona
