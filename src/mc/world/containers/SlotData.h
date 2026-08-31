#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlotData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mCollectionName;
    ::ll::TypedStorage<4, 4, int>            mCollectionIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    SlotData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SlotData(::std::string const& collectionName, int collectionIndex);

#ifdef LL_PLAT_C
    MCAPI bool matches(::SlotData const& other) const;

    MCAPI bool operator!=(::SlotData const& other) const;

    MCAPI void set(::std::string const& collectionName, int collectionIndex);
#endif

    MCAPI ~SlotData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SlotData& UNKNOWN_LOCATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::string const& collectionName, int collectionIndex);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
