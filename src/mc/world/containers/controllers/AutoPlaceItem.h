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
    // prevent constructor by default
    AutoPlaceItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C AutoPlaceItem(::std::string const& _collection, bool _stopWhenPlaced);

    MCNAPI_C ~AutoPlaceItem();
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
