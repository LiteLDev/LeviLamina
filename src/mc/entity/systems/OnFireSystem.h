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
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnFireSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static void onFireChanged(::Actor& actor);

    MCAPI static void setOnFire(::Actor& actor, int seconds);

    MCAPI static void setOnFireNoEffects(::Actor& actor, int seconds);

    MCAPI static void stopFire(::Actor& actor);
    // NOLINTEND
};
