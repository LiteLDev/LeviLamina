#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeCappedSurfaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>  mFloorBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>  mCeilingBlocks;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mSeaBlock;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mFoundationBlock;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mBeachBlock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeCappedSurfaceData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeCappedSurfaceData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
