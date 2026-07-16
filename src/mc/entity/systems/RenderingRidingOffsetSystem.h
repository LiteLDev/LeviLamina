#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
struct TickingSystemWithInfo;
// clang-format on

class RenderingRidingOffsetSystem {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static ::Vec3 getInterpolatedRenderingRidingOffset(::Actor const& actor, float frameAlpha);

    MCAPI static void onActorStartRiding(::Actor& actor, ::Actor& vehicle);
#endif
    // NOLINTEND
};
