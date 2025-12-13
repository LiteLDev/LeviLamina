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
    ::ll::UntypedStorage<4, 4> mUnkeb3def;
    ::ll::UntypedStorage<4, 4> mUnkfdfd75;
    ::ll::UntypedStorage<1, 1> mUnke4de75;
    ::ll::UntypedStorage<1, 1> mUnk13c1ee;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeMesaSurfaceData& operator=(BiomeMesaSurfaceData const&);
    BiomeMesaSurfaceData(BiomeMesaSurfaceData const&);
    BiomeMesaSurfaceData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeMesaSurfaceData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
