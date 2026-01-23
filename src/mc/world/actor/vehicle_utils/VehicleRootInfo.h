#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace VehicleUtils {

struct VehicleRootInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor*> mVehicle;
    ::ll::TypedStorage<4, 4, int>      mIterationCount;
    // NOLINTEND
};

} // namespace VehicleUtils
