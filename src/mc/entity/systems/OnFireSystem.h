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
    MCNAPI static void _setOnFireImpl(::Actor& actor, int seconds, bool isInWaterOrRain, int fireProtectionLevels);

#ifdef LL_PLAT_C
    MCNAPI static void onFireChanged(::Actor& actor);
#endif

    MCAPI static void setOnFire(::Actor& actor, int seconds);

    MCNAPI static void stopFire(::Actor& actor);
    // NOLINTEND
};
