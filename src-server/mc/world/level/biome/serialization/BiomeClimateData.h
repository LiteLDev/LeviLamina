#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeClimateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTemperature;
    ::ll::TypedStorage<4, 4, float> mDownfall;
    ::ll::TypedStorage<4, 4, float> mSnowAccumulationMin;
    ::ll::TypedStorage<4, 4, float> mSnowAccumulationMax;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeClimateData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

};
