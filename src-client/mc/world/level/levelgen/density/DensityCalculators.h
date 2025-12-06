#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDensityCalculator;
// clang-format on

class DensityCalculators {
public:
    // DensityCalculators inner types define
    using CalculatorIndexMap = ::std::unordered_map<void const*, ushort>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::IDensityCalculator>>>      mCalculators;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::unordered_map<void const*, ushort>>> mCalculatorIndices;
    // NOLINTEND
};
