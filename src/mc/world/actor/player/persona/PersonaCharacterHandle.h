#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct PersonaCharacterHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk85c790;
    ::ll::UntypedStorage<1, 1>  mUnk752aff;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaCharacterHandle& operator=(PersonaCharacterHandle const&);
    PersonaCharacterHandle(PersonaCharacterHandle const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C PersonaCharacterHandle();

    MCNAPI_C ~PersonaCharacterHandle();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::persona::PersonaCharacterHandle const& INVALID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace persona
