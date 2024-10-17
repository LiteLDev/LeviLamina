#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace VanillaOffsetSystemUtil {
// NOLINTBEGIN
MCAPI void _clientTick(
    class StrictEntityContext&                                             entity,
    struct VanillaOffsetComponent&                                         vanillaOffsetComponent,
    struct OffsetsComponent const&                                         offsetComponent,
    struct ActorDataFlagComponent const&                                   actorDataFlag,
    class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const> isSleepingFlag,
    class Optional<struct IsHorizontalPoseFlagComponent const>             isHorizontalFlag,
    float                                                                  sneakHeight,
    class EntityModifier<struct IsHorizontalPoseFlagComponent>             modifier
);

MCAPI void _serverTick(
    class StrictEntityContext&                                             entity,
    struct VanillaOffsetComponent&                                         vanillaOffsetComponent,
    struct OffsetsComponent const&                                         offsetComponent,
    struct ActorDataFlagComponent const&                                   actorDataFlag,
    class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const> isSleepingFlag,
    class Optional<struct IsHorizontalPoseFlagComponent const>             isHorizontalFlag,
    float                                                                  sneakHeight,
    class EntityModifier<struct IsHorizontalPoseFlagComponent>             modifier
);

MCAPI void _updateHorizontalFlagComponent(
    class StrictEntityContext&                                 entity,
    struct ActorDataFlagComponent const&                       actorDataFlag,
    class EntityModifier<struct IsHorizontalPoseFlagComponent> modifier
);

MCAPI float getCameraOffset(
    struct ActorDataFlagComponent const&                                   actorDataFlag,
    class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const> isSleepingFlag,
    class Optional<struct IsHorizontalPoseFlagComponent const>             isHorizontalFlag,
    float                                                                  sneakHeight
);
// NOLINTEND

}; // namespace VanillaOffsetSystemUtil
