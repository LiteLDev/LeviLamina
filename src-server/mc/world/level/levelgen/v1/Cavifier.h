#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CavifierNoises;
class Vec3;
// clang-format on

class Cavifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CavifierNoises const&> mCavifierNoises;
    ::ll::TypedStorage<4, 4, float> mMinCellY;
    ::ll::TypedStorage<4, 4, float> mDensityBoost;
    // NOLINTEND

public:
    // prevent constructor by default
    Cavifier& operator=(Cavifier const&);
    Cavifier(Cavifier const&);
    Cavifier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float _getSpaghetti2d(::Vec3 worldPos) const;

    MCAPI float _getSpaghetti3D(::Vec3 worldPos) const;

    MCAPI float cavify(::Vec3 worldPos, int, float density) const;
    // NOLINTEND

};
