#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
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
    // prevent constructor by default
    BiomeSurfaceMaterialAdjustmentData& operator=(BiomeSurfaceMaterialAdjustmentData const&);
    BiomeSurfaceMaterialAdjustmentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeSurfaceMaterialAdjustmentData(::BiomeSurfaceMaterialAdjustmentData const&);

    MCAPI ~BiomeSurfaceMaterialAdjustmentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeSurfaceMaterialAdjustmentData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeSurfaceMaterialAdjustmentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
