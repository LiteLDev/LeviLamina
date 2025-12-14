#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeMultinoiseGenRulesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTemperature;
    ::ll::TypedStorage<4, 4, float> mHumidity;
    ::ll::TypedStorage<4, 4, float> mAltitude;
    ::ll::TypedStorage<4, 4, float> mWeirdness;
    ::ll::TypedStorage<4, 4, float> mWeight;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeMultinoiseGenRulesData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
