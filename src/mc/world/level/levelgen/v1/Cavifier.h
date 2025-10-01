#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class Cavifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk101631;
    ::ll::UntypedStorage<4, 4> mUnk4d615e;
    ::ll::UntypedStorage<4, 4> mUnke33ab2;
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
