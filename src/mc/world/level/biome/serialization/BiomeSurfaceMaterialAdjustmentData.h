#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct BiomeElementData;
// clang-format on

struct BiomeSurfaceMaterialAdjustmentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeElementData>> mAdjustments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~BiomeSurfaceMaterialAdjustmentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeSurfaceMaterialAdjustmentData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
