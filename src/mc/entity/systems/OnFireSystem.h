#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

class OnFireSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    OnFireSystem& operator=(OnFireSystem const&);
    OnFireSystem(OnFireSystem const&);
    OnFireSystem();

public:
    // NOLINTBEGIN
    MCAPI static void extinguishFire(class Actor& actor);

    MCAPI static void setOnFire(class Actor& actor, int seconds);

    MCAPI static void setOnFireNoEffects(class Actor& actor, int seconds);

    MCAPI static void stopFire(class Actor& actor);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static bool _extinguishFireIfInWater(class Actor& actor);

    // NOLINTEND
};
