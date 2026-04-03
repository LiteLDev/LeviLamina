#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UriData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> uri;
    ::ll::TypedStorage<1, 1, bool>           hasHomeButton;
    // NOLINTEND

public:
    // prevent constructor by default
    UriData& operator=(UriData const&);
    UriData(UriData const&);
    UriData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UriData(::std::string overrideUri);

    MCFOLD ::UriData& operator=(::UriData&&);

    MCAPI ~UriData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::string overrideUri);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
