#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Keymapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>      mAction;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mKeys;
    ::ll::TypedStorage<1, 1, bool>                mAllowRemap;
    ::ll::TypedStorage<1, 1, bool>                mIsSharedKey;
    // NOLINTEND

public:
    // prevent constructor by default
    Keymapping& operator=(Keymapping const&);
    Keymapping();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C Keymapping(::Keymapping const&);

    MCAPI_C Keymapping(::std::string const& action, int defaultKey);

    MCAPI_C ~Keymapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::Keymapping const&);

    MCAPI_C void* $ctor(::std::string const& action, int defaultKey);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};
