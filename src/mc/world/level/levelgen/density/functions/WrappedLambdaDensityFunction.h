#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
class Pos;
struct DensityFunctionPtr;
// clang-format on

class WrappedLambdaDensityFunction : public ::IDensityFunction {
public:
    // WrappedLambdaDensityFunction inner types define
    using LambdaDensityFuncAccessor = ::std::function<float(::Pos, ::std::vector<float> const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<float(::Pos, ::std::vector<float> const&)> const> mAccessorFunc;
    ::ll::TypedStorage<8, 24, ::std::vector<::DensityFunctionPtr> const>                        mInputs;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WrappedLambdaDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
