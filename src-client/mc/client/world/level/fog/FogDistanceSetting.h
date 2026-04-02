#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

struct FogDistanceSetting {
public:
    // FogDistanceSetting inner types define
    enum class DistanceType : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>                      mColor;
    ::ll::TypedStorage<4, 4, float>                              mStart;
    ::ll::TypedStorage<4, 4, float>                              mEnd;
    ::ll::TypedStorage<4, 4, ::FogDistanceSetting::DistanceType> mType;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogDistanceSetting const& ZERO_SETTING();
    // NOLINTEND
};
