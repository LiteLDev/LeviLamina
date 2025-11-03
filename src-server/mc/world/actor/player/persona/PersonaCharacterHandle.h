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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::persona::PersonaCharacterHandle const& INVALID();
    // NOLINTEND
};

} // namespace persona
