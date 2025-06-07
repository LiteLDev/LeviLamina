#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeWeightedTemperatureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk39f777;
    ::ll::UntypedStorage<4, 4> mUnkb80f9b;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeWeightedTemperatureData& operator=(BiomeWeightedTemperatureData const&);
    BiomeWeightedTemperatureData(BiomeWeightedTemperatureData const&);
    BiomeWeightedTemperatureData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeWeightedTemperatureData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
