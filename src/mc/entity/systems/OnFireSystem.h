#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class OnFireSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    OnFireSystem& operator=(OnFireSystem const&);
    OnFireSystem(OnFireSystem const&);
    OnFireSystem();

public:
    // NOLINTBEGIN
    // symbol: ?extinguishFire@OnFireSystem@@SAXAEAVActor@@@Z
    MCAPI static void extinguishFire(class Actor& actor);

    // symbol: ?setOnFire@OnFireSystem@@SAXAEAVActor@@H@Z
    MCAPI static void setOnFire(class Actor& actor, int seconds);

    // symbol: ?setOnFireNoEffects@OnFireSystem@@SAXAEAVActor@@H@Z
    MCAPI static void setOnFireNoEffects(class Actor& actor, int seconds);

    // symbol: ?stopFire@OnFireSystem@@SAXAEAVActor@@@Z
    MCAPI static void stopFire(class Actor& actor);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_extinguishFireIfInWater@OnFireSystem@@KA_NAEAVActor@@@Z
    MCAPI static bool _extinguishFireIfInWater(class Actor& actor);

    // NOLINTEND
};
