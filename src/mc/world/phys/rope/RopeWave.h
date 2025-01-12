#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct RopeWave {
public:
    // RopeWave inner types define
    enum class Direction : int {
        StartToEnd = 0,
        EndToStart = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>               mForce;
    ::ll::TypedStorage<4, 4, float>                 mSpeed;
    ::ll::TypedStorage<4, 4, float>                 mDamping;
    ::ll::TypedStorage<8, 8, uint64>                mCurNode;
    ::ll::TypedStorage<4, 4, float>                 mDistAlongNode;
    ::ll::TypedStorage<4, 4, ::RopeWave::Direction> mDir;
    // NOLINTEND
};
