#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoPlaceItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> collection;
    ::ll::TypedStorage<1, 1, bool>           stopWhenPlaced;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string const& _collection, bool _stopWhenPlaced);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
