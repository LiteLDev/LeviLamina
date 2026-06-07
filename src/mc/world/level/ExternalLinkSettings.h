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
    MCAPI ExternalLinkSettings(::ExternalLinkSettings const&);

    MCFOLD ::ExternalLinkSettings& operator=(::ExternalLinkSettings&&);

    MCAPI ~ExternalLinkSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ExternalLinkSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
