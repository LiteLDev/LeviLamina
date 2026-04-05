#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoPlaceItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> collection;
    ::ll::TypedStorage<1, 1, bool>           stopWhenPlaced;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    AutoPlaceItem();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI AutoPlaceItem(::std::string const& _collection, bool _stopWhenPlaced);

    MCAPI ~AutoPlaceItem();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string const& _collection, bool _stopWhenPlaced);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};
