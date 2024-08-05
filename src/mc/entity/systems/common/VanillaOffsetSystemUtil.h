#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace VanillaOffsetSystemUtil {
// NOLINTBEGIN
MCAPI void
_clientTick(class StrictEntityContext&, struct VanillaOffsetComponent&, struct OffsetsComponent const&, struct ActorDataFlagComponent const&, class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>, class Optional<struct IsHorizontalPoseFlagComponent const>, float, class EntityModifier<struct IsHorizontalPoseFlagComponent>);

MCAPI void
_serverTick(class StrictEntityContext&, struct VanillaOffsetComponent&, struct OffsetsComponent const&, struct ActorDataFlagComponent const&, class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>, class Optional<struct IsHorizontalPoseFlagComponent const>, float, class EntityModifier<struct IsHorizontalPoseFlagComponent>);

MCAPI void
_updateHorizontalFlagComponent(class StrictEntityContext&, struct ActorDataFlagComponent const&, class EntityModifier<struct IsHorizontalPoseFlagComponent>);

MCAPI float getCameraOffset(
    struct ActorDataFlagComponent const&,
    class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>,
    class Optional<struct IsHorizontalPoseFlagComponent const>,
    float
);
// NOLINTEND

}; // namespace VanillaOffsetSystemUtil
