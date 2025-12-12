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
    // member functions
    // NOLINTBEGIN
    MCAPI_C bool matches(::SlotData const& other) const;

    MCAPI_C void set(::std::string const& collectionName, int collectionIndex);

    MCAPI ~SlotData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SlotData& UNKNOWN_LOCATION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
