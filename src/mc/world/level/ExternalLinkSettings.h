#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalLinkSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> url;
    ::ll::TypedStorage<8, 32, ::std::string> displayName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ExternalLinkSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
