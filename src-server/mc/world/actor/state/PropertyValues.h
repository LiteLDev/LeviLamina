#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertyValues {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd3015f;
    ::ll::UntypedStorage<8, 24> mUnkb42fd6;
    ::ll::UntypedStorage<8, 32> mUnka6c4d6;
    ::ll::UntypedStorage<8, 24> mUnk16e385;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyValues& operator=(PropertyValues const&);
    PropertyValues(PropertyValues const&);
    PropertyValues();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PropertyValues& operator=(::PropertyValues&&);

    MCNAPI void resize(uint64 numInts, uint64 numFloats, uint64 numBools, uint64 numEnums);

    MCNAPI ~PropertyValues();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
