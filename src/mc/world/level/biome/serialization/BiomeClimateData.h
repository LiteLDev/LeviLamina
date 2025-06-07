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
    ::ll::UntypedStorage<4, 4> mUnk28493c;
    ::ll::UntypedStorage<4, 4> mUnk68bc90;
    ::ll::UntypedStorage<4, 4> mUnk84a4b1;
    ::ll::UntypedStorage<4, 4> mUnk866346;
    ::ll::UntypedStorage<4, 4> mUnkdfea2d;
    ::ll::UntypedStorage<4, 4> mUnkc8a94f;
    ::ll::UntypedStorage<4, 4> mUnk61e4b8;
    ::ll::UntypedStorage<4, 4> mUnkb72cd7;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeClimateData& operator=(BiomeClimateData const&);
    BiomeClimateData(BiomeClimateData const&);
    BiomeClimateData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeClimateData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
