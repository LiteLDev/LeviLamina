#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct PersonaCharacterHandle {
public:
    // prevent constructor by default
    PersonaCharacterHandle& operator=(PersonaCharacterHandle const&);
    PersonaCharacterHandle(PersonaCharacterHandle const&);
    PersonaCharacterHandle();

public:
    // NOLINTBEGIN
    // symbol: ?INVALID@PersonaCharacterHandle@persona@@2U12@B
    MCAPI static struct persona::PersonaCharacterHandle const INVALID;

    // NOLINTEND
};

}; // namespace persona
