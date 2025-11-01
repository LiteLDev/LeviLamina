#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct PersonaCharacterHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk85c790;
    ::ll::UntypedStorage<1, 1> mUnk752aff;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaCharacterHandle& operator=(PersonaCharacterHandle const&);
    PersonaCharacterHandle(PersonaCharacterHandle const&);
    PersonaCharacterHandle();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::persona::PersonaCharacterHandle const& INVALID();
    // NOLINTEND

};

}
