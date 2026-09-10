#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
struct BiomeElementData;
// clang-format on

struct BiomeSurfaceMaterialAdjustmentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeElementData>> mAdjustments;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeSurfaceMaterialAdjustmentData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
