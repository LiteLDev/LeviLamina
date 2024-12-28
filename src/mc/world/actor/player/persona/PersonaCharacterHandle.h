#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct PersonaCharacterHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk85c790;
    ::ll::UntypedStorage<4, 4>  mUnk752aff;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaCharacterHandle& operator=(PersonaCharacterHandle const&);
    PersonaCharacterHandle(PersonaCharacterHandle const&);
    PersonaCharacterHandle();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::persona::PersonaCharacterHandle const& INVALID();
    // NOLINTEND
};

} // namespace persona
