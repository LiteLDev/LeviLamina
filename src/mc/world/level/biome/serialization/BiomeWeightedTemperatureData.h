#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/BiomeTemperatureCategory.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeWeightedTemperatureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BiomeTemperatureCategory> mTemperature;
    ::ll::TypedStorage<4, 4, uint>                       mWeight;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeWeightedTemperatureData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
