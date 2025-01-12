#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class IConstBlockSource;
class Vec3;
struct TickingSystemWithInfo;
// clang-format on

struct GroundTravelTypeSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static float calcMoveRelativeSpeed(
        ::IConstBlockSource const& region,
        ::Vec3 const&              pos,
        ::AABB const&              aabb,
        float                      speed,
        bool                       hasSoulSpeedEnchant,
        ::BaseGameVersion const&   version
    );

    MCAPI static ::TickingSystemWithInfo create(::BaseGameVersion const& version);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& FRICTION_FIX_VERSION();
    // NOLINTEND
};
