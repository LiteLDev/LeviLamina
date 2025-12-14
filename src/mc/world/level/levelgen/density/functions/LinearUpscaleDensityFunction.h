#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/DensityFunctionPtr.h"
#include "mc/world/level/levelgen/density/DensityVolume.h"
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class LinearUpscaleDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DensityFunctionPtr const>       mInput;
    ::ll::TypedStorage<2, 6, ::DensityVolume::Dimensions const> mSampleResolution;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LinearUpscaleDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
