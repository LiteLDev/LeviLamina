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
    MCAPI ::PropertyValues& operator=(::PropertyValues&&);

    MCAPI void resize(uint64 numInts, uint64 numFloats, uint64 numBools, uint64 numEnums);

    MCAPI ~PropertyValues();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
