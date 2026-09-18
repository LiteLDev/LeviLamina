#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct CanStandOnPowderSnowComponent;
struct CanStandOnPowderSnowFromEquipmentComponent;
struct FallDistanceComponent;
struct InterpolateMovementNeededComponent;
struct MobFlagComponent;
struct StateVectorComponent;
// clang-format on

class LadderResetFallDamageSystem {
public:
    // LadderResetFallDamageSystem inner types define
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::MobFlagComponent>,
        ::AABBShapeComponent const,
        ::StateVectorComponent const,
        ::ActorDataFlagComponent const,
        ::FallDistanceComponent,
        ::Optional<::CanStandOnPowderSnowComponent const>,
        ::Optional<::CanStandOnPowderSnowFromEquipmentComponent const>>;
};
