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
struct VehicleComponent;
// clang-format on

class HorsePreTravelSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tickHorsePreTravelSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::HorseFlagComponent>, ::Optional<::VehicleComponent>, ::ActorDataFlagComponent const, ::AirSpeedComponent> mainView, ::ViewT<::StrictEntityContext, ::MobFlagComponent const> mobCheck, ::ViewT<::StrictEntityContext, ::OnGroundFlagComponent const> onGroundCheck, ::EntityModifier<::HorseWasOnGroundPreTravelComponent> mod);
    // NOLINTEND

};
