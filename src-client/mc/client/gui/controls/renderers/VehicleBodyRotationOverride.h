#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class VehicleBodyRotationOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob*> mVehicleMob;
    ::ll::TypedStorage<4, 4, float>  mSavedYBodyRot;
    ::ll::TypedStorage<4, 4, float>  mSavedYBodyRotO;
    // NOLINTEND
};
