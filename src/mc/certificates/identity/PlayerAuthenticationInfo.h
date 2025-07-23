#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAuthenticationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> Xuid;
    ::ll::TypedStorage<8, 32, ::std::string> XboxLiveName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerAuthenticationInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
