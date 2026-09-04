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
    PropertyValues();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PropertyValues(::PropertyValues const&);

    MCAPI ::PropertyValues& operator=(::PropertyValues&&);

    MCAPI ~PropertyValues();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PropertyValues const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
