#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeMountainParamsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSteepBlock;
    ::ll::TypedStorage<1, 1, bool> mNorthSlopes;
    ::ll::TypedStorage<1, 1, bool> mSouthSlopes;
    ::ll::TypedStorage<1, 1, bool> mWestSlopes;
    ::ll::TypedStorage<1, 1, bool> mEastSlopes;
    ::ll::TypedStorage<1, 1, bool> mTopSlideEnabled;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeMountainParamsData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
