#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
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
    MCAPI_C MaterialReducerDataEntry(::MaterialReducerDataEntry&&);

    MCAPI_C ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCAPI ~MaterialReducerDataEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::MaterialReducerDataEntry&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
