#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class CacheDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5decb4;
    // NOLINTEND

public:
    // prevent constructor by default
    CacheDensityFunction& operator=(CacheDensityFunction const&);
    CacheDensityFunction(CacheDensityFunction const&);
    CacheDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CacheDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
