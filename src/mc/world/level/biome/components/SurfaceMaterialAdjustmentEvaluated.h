#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SurfaceMaterialBlocks;
// clang-format on

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
        ::ll::UntypedStorage<4, 4>  mUnkec3d3b;
        ::ll::UntypedStorage<4, 4>  mUnke1670e;
        ::ll::UntypedStorage<8, 48> mUnkee978f;
        // NOLINTEND

    public:
        // prevent constructor by default
        Element& operator=(Element const&);
        Element(Element const&);
        Element();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka21856;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceMaterialAdjustmentEvaluated& operator=(SurfaceMaterialAdjustmentEvaluated const&);
    SurfaceMaterialAdjustmentEvaluated(SurfaceMaterialAdjustmentEvaluated const&);
    SurfaceMaterialAdjustmentEvaluated();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void makeAdjustments(::SurfaceMaterialBlocks& blockPalette, int height) const;

    MCAPI ::SurfaceMaterialAdjustmentEvaluated& operator=(::SurfaceMaterialAdjustmentEvaluated&&);

    MCAPI ~SurfaceMaterialAdjustmentEvaluated();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
