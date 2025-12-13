#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class MapFromRangeToDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk803411;
    ::ll::UntypedStorage<4, 4>  mUnkf52c68;
    ::ll::UntypedStorage<4, 4>  mUnk8659c0;
    ::ll::UntypedStorage<4, 4>  mUnk1c0e22;
    ::ll::UntypedStorage<4, 4>  mUnk940f96;
    // NOLINTEND

public:
    // prevent constructor by default
    MapFromRangeToDensityFunction& operator=(MapFromRangeToDensityFunction const&);
    MapFromRangeToDensityFunction(MapFromRangeToDensityFunction const&);
    MapFromRangeToDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MapFromRangeToDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
