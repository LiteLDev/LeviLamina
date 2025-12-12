#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/DensityFunctionPtr.h"
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
    ::ll::TypedStorage<8, 16, ::DensityFunctionPtr> mChoiceInput;
    ::ll::TypedStorage<4, 4, float>                 mMinInclusive;
    ::ll::TypedStorage<4, 4, float>                 mMaxExclusive;
    ::ll::TypedStorage<8, 16, ::DensityFunctionPtr> mInRangeInput;
    ::ll::TypedStorage<8, 16, ::DensityFunctionPtr> mOutOfRangeInput;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RangedChoiceDensityFunction() /*override*/ = default;

    // vIndex: 1
    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
