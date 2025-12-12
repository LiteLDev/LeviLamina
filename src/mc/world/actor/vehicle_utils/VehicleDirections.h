#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VehicleUtils {

struct VehicleDirections {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkbf7371;
    ::ll::UntypedStorage<4, 12> mUnkeb8adf;
    // NOLINTEND

public:
    // prevent constructor by default
    VehicleDirections& operator=(VehicleDirections const&);
    VehicleDirections(VehicleDirections const&);
    VehicleDirections();
};

} // namespace VehicleUtils
