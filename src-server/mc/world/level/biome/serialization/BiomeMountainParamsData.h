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
    ::ll::UntypedStorage<4, 4> mUnka00c70;
    ::ll::UntypedStorage<1, 1> mUnk260fe1;
    ::ll::UntypedStorage<1, 1> mUnkc173f6;
    ::ll::UntypedStorage<1, 1> mUnk340406;
    ::ll::UntypedStorage<1, 1> mUnk42f546;
    ::ll::UntypedStorage<1, 1> mUnk794df3;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeMountainParamsData& operator=(BiomeMountainParamsData const&);
    BiomeMountainParamsData(BiomeMountainParamsData const&);
    BiomeMountainParamsData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeMountainParamsData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
