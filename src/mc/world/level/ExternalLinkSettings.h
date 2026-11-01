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
    ExternalLinkSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExternalLinkSettings(::ExternalLinkSettings const&);

    MCNAPI ::ExternalLinkSettings& operator=(::ExternalLinkSettings&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ExternalLinkSettings const&);
    // NOLINTEND
};
