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

public:
    // prevent constructor by default
    VehicleBodyRotationOverride();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VehicleBodyRotationOverride(::Mob const& rider, float yBodyRot, float yBodyRotO);

    MCAPI ~VehicleBodyRotationOverride();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob const& rider, float yBodyRot, float yBodyRotO);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
