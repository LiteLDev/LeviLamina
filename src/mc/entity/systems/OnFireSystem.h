#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class OnFireSystem : public ::ITickingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _setOnFireImpl(::Actor& actor, int seconds, bool isInWaterOrRain, int fireProtectionLevels);

#ifdef LL_PLAT_C
    MCAPI static void onFireChanged(::Actor& actor);
#endif

    MCAPI static void setOnFire(::Actor& actor, int seconds);

    MCAPI static void stopFire(::Actor& actor);
    // NOLINTEND
};
