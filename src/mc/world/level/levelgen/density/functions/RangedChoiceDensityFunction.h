#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class RangedChoiceDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5daa05;
    ::ll::UntypedStorage<4, 4>  mUnk30a7e7;
    ::ll::UntypedStorage<4, 4>  mUnka9d2d7;
    ::ll::UntypedStorage<8, 16> mUnka50930;
    ::ll::UntypedStorage<8, 16> mUnkb2bf0b;
    // NOLINTEND

public:
    // prevent constructor by default
    RangedChoiceDensityFunction& operator=(RangedChoiceDensityFunction const&);
    RangedChoiceDensityFunction(RangedChoiceDensityFunction const&);
    RangedChoiceDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RangedChoiceDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
