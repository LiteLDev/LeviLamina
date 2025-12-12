#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertyValues {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<int>>    mIntValues;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>  mFloatValues;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>>   mBoolValues;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mEnumIndexValues;
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
