#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeMesaSurfaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mClayMaterial;
    ::ll::TypedStorage<4, 4, uint> mHardClayMaterial;
    ::ll::TypedStorage<1, 1, bool> mBrycePillars;
    ::ll::TypedStorage<1, 1, bool> mHasForest;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeMesaSurfaceData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

};
