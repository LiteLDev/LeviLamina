#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeCoordinateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkc21523;
    ::ll::UntypedStorage<2, 2> mUnk88b1ec;
    ::ll::UntypedStorage<2, 2> mUnkdb73ef;
    ::ll::UntypedStorage<2, 2> mUnk5aad2c;
    ::ll::UntypedStorage<4, 4> mUnk91abcb;
    ::ll::UntypedStorage<4, 4> mUnk9c7eb6;
    ::ll::UntypedStorage<4, 4> mUnkc0dcae;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeCoordinateData& operator=(BiomeCoordinateData const&);
    BiomeCoordinateData(BiomeCoordinateData const&);
    BiomeCoordinateData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeCoordinateData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
