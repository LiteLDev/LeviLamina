#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeSurfaceMaterialData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk55ac4e;
    ::ll::UntypedStorage<4, 4> mUnkba1912;
    ::ll::UntypedStorage<4, 4> mUnke7bce6;
    ::ll::UntypedStorage<4, 4> mUnk81fdf5;
    ::ll::UntypedStorage<4, 4> mUnk88dfb0;
    ::ll::UntypedStorage<4, 4> mUnk76f2a5;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeSurfaceMaterialData& operator=(BiomeSurfaceMaterialData const&);
    BiomeSurfaceMaterialData(BiomeSurfaceMaterialData const&);
    BiomeSurfaceMaterialData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeSurfaceMaterialData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
