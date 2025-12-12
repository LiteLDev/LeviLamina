#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class PerlinNoiseDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkbae886;
    ::ll::UntypedStorage<4, 12> mUnk870ba5;
    // NOLINTEND

public:
    // prevent constructor by default
    PerlinNoiseDensityFunction& operator=(PerlinNoiseDensityFunction const&);
    PerlinNoiseDensityFunction(PerlinNoiseDensityFunction const&);
    PerlinNoiseDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PerlinNoiseDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
