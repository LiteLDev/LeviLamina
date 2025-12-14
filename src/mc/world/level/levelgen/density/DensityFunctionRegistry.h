#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DensityFunctionPtr;
// clang-format on

class DensityFunctionRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DensityFunctionPtr>> mFunctions;
    // NOLINTEND
};
