#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeSurfaceMaterialData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mTopBlock;
    ::ll::TypedStorage<4, 4, uint> mMidBlock;
    ::ll::TypedStorage<4, 4, uint> mSeaFloorBlock;
    ::ll::TypedStorage<4, 4, uint> mFoundationBlock;
    ::ll::TypedStorage<4, 4, uint> mSeaBlock;
    ::ll::TypedStorage<4, 4, int>  mSeaFloorDepth;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeSurfaceMaterialData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
