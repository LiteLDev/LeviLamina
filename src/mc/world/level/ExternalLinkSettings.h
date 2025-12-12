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
    // prevent constructor by default
    ExternalLinkSettings& operator=(ExternalLinkSettings const&);
    ExternalLinkSettings(ExternalLinkSettings const&);
    ExternalLinkSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ExternalLinkSettings& operator=(::ExternalLinkSettings&&);

    MCNAPI ~ExternalLinkSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
