#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/SurfaceMaterialBlocks.h"

struct SurfaceMaterialAdjustmentEvaluated {
public:
    // SurfaceMaterialAdjustmentEvaluated inner types declare
    // clang-format off
    struct Element;
    // clang-format on

    // SurfaceMaterialAdjustmentEvaluated inner types define
    struct Element {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                      mHeightMin;
        ::ll::TypedStorage<4, 4, int>                      mHeightMax;
        ::ll::TypedStorage<8, 48, ::SurfaceMaterialBlocks> mSurfaceMaterialBlocks;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SurfaceMaterialAdjustmentEvaluated::Element>> mAdjustments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SurfaceMaterialAdjustmentEvaluated();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
