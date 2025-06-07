#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeSurfaceMaterialAdjustmentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfdee0e;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeSurfaceMaterialAdjustmentData& operator=(BiomeSurfaceMaterialAdjustmentData const&);
    BiomeSurfaceMaterialAdjustmentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeSurfaceMaterialAdjustmentData(::BiomeSurfaceMaterialAdjustmentData&&);

    MCNAPI BiomeSurfaceMaterialAdjustmentData(::BiomeSurfaceMaterialAdjustmentData const&);

    MCNAPI ~BiomeSurfaceMaterialAdjustmentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeSurfaceMaterialAdjustmentData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeSurfaceMaterialAdjustmentData&&);

    MCNAPI void* $ctor(::BiomeSurfaceMaterialAdjustmentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
