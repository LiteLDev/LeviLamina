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
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct AirTravelFlagComponent;
struct GlidingTravelFlagComponent;
struct GroundTravelFlagComponent;
struct ImmuneToLavaDragComponent;
struct LavaTravelFlagComponent;
struct LiquidTravelFlagComponent;
struct MobTravelComponent;
struct MovementAbilitiesComponent;
struct OnGroundFlagComponent;
struct PlayerFlyingTravelComponent;
struct SubBBsComponent;
struct TickingSystemWithInfo;
struct WasInWaterFlagComponent;
struct WaterTravelFlagComponent;
// clang-format on

struct TravelTypeSensingSystem {
public:
    // prevent constructor by default
    TravelTypeSensingSystem& operator=(TravelTypeSensingSystem const&);
    TravelTypeSensingSystem(TravelTypeSensingSystem const&);
    TravelTypeSensingSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createTravelTypeSensingSystem();
    // NOLINTEND
};
