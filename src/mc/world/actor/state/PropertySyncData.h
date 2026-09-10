#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertySyncData {
public:
    // PropertySyncData inner types declare
    // clang-format off
    struct PropertySyncFloatEntry;
    struct PropertySyncIntEntry;
    // clang-format on

    // PropertySyncData inner types define
    struct PropertySyncFloatEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>  mPropertyIndex;
        ::ll::TypedStorage<4, 4, float> mData;
        // NOLINTEND
    };

    struct PropertySyncIntEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mPropertyIndex;
        ::ll::TypedStorage<4, 4, int>  mData;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PropertySyncData::PropertySyncIntEntry>>   mIntEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::PropertySyncData::PropertySyncFloatEntry>> mFloatEntries;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertySyncData& operator=(PropertySyncData const&);
    PropertySyncData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PropertySyncData(::PropertySyncData const&);

    MCFOLD ::PropertySyncData& operator=(::PropertySyncData&&);

    MCAPI ~PropertySyncData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::PropertySyncData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
