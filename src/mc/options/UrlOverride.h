#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UrlOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk46e2d6;
    ::ll::UntypedStorage<8, 32> mUnke2dfc6;
    ::ll::UntypedStorage<8, 32> mUnk413db6;
    // NOLINTEND

public:
    // prevent constructor by default
    UrlOverride& operator=(UrlOverride const&);
    UrlOverride(UrlOverride const&);
    UrlOverride();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::UrlOverride& operator=(::UrlOverride&&);

    MCNAPI_C ~UrlOverride();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
