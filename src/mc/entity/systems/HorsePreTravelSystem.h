#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct AirSpeedComponent;
struct HorseFlagComponent;
struct HorseWasOnGroundPreTravelComponent;
struct MobFlagComponent;
struct OnGroundFlagComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class HorsePreTravelSystem {
public:
    // prevent constructor by default
    HorsePreTravelSystem& operator=(HorsePreTravelSystem const&);
    HorsePreTravelSystem(HorsePreTravelSystem const&);
    HorsePreTravelSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createHorsePreTravelSystem();
    // NOLINTEND
};
