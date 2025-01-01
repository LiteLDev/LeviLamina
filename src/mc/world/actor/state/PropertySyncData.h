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
    struct PropertySyncIntEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkda14e6;
        ::ll::UntypedStorage<4, 4> mUnked47e9;
        // NOLINTEND

    public:
        // prevent constructor by default
        PropertySyncIntEntry& operator=(PropertySyncIntEntry const&);
        PropertySyncIntEntry(PropertySyncIntEntry const&);
        PropertySyncIntEntry();
    };

    struct PropertySyncFloatEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkaf6d08;
        ::ll::UntypedStorage<4, 4> mUnk728a91;
        // NOLINTEND

    public:
        // prevent constructor by default
        PropertySyncFloatEntry& operator=(PropertySyncFloatEntry const&);
        PropertySyncFloatEntry(PropertySyncFloatEntry const&);
        PropertySyncFloatEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PropertySyncData::PropertySyncIntEntry>>   mIntEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::PropertySyncData::PropertySyncFloatEntry>> mFloatEntries;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PropertySyncData& operator=(::PropertySyncData&&);

    MCAPI ~PropertySyncData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
