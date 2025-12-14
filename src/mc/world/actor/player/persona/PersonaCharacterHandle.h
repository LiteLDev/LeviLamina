#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/ProfileType.h"

namespace persona {

struct PersonaCharacterHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>         mSkinName;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType> mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C PersonaCharacterHandle();

    MCAPI_C ~PersonaCharacterHandle();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::persona::PersonaCharacterHandle const& INVALID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace persona
