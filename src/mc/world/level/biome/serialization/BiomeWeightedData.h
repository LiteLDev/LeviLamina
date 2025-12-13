#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeWeightedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk8d0596;
    ::ll::UntypedStorage<4, 4> mUnk5a34f9;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeWeightedData& operator=(BiomeWeightedData const&);
    BiomeWeightedData(BiomeWeightedData const&);
    BiomeWeightedData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeWeightedData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
