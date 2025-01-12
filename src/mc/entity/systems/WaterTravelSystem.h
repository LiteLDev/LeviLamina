#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct DolphinFlagComponent;
struct MobTravelComponent;
struct MovementAttributesComponent;
struct MovementSpeedComponent;
struct OnGroundFlagComponent;
struct PlayerComponent;
struct SwimSpeedMultiplierComponent;
struct TickingSystemWithInfo;
struct WaterTravelFlagComponent;
struct WaterWalkSpeedEnchantComponent;
// clang-format on

class WaterTravelSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createWaterTravelSystem();

    MCAPI static void tickWaterTravelSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent const, ::WaterTravelFlagComponent const>,
            ::MovementAttributesComponent const,
            ::MovementSpeedComponent const,
            ::SwimSpeedMultiplierComponent const,
            ::WaterWalkSpeedEnchantComponent const,
            ::MobTravelComponent,
            ::Optional<::DolphinFlagComponent const>,
            ::Optional<::OnGroundFlagComponent const>>               view,
        ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>> players
    );
    // NOLINTEND
};
