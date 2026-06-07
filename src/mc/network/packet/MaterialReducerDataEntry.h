#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
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
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
#endif

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~MaterialReducerDataEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
