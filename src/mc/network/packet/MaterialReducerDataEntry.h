#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MaterialReducerEntryOutput;
// clang-format on

struct MaterialReducerDataEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                          fromItemKey;
    ::ll::TypedStorage<8, 24, ::std::vector<::MaterialReducerEntryOutput>> toItemIdsAndCounts;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialReducerDataEntry& operator=(MaterialReducerDataEntry const&);
    MaterialReducerDataEntry(MaterialReducerDataEntry const&);
    MaterialReducerDataEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MaterialReducerDataEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
