#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace VanillaOffsetSystemUtil {
// NOLINTBEGIN
// symbol:
// ?_clientTick@VanillaOffsetSystemUtil@@YAXAEAVStrictEntityContext@@AEAUVanillaOffsetComponent@@AEBUOffsetsComponent@@AEBUActorDataFlagComponent@@V?$Optional@$$CBV?$FlagComponent@UPlayerIsSleepingFlag@@@@@@V?$Optional@$$CBUIsHorizontalPoseFlagComponent@@@@MV?$EntityModifier@UIsHorizontalPoseFlagComponent@@@@@Z
MCAPI void
_clientTick(class StrictEntityContext&, struct VanillaOffsetComponent&, struct OffsetsComponent const&, struct ActorDataFlagComponent const&, class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>, class Optional<struct IsHorizontalPoseFlagComponent const>, float, class EntityModifier<struct IsHorizontalPoseFlagComponent>);

// symbol:
// ?_serverTick@VanillaOffsetSystemUtil@@YAXAEAVStrictEntityContext@@AEAUVanillaOffsetComponent@@AEBUOffsetsComponent@@AEBUActorDataFlagComponent@@V?$Optional@$$CBV?$FlagComponent@UPlayerIsSleepingFlag@@@@@@V?$Optional@$$CBUIsHorizontalPoseFlagComponent@@@@MV?$EntityModifier@UIsHorizontalPoseFlagComponent@@@@@Z
MCAPI void
_serverTick(class StrictEntityContext&, struct VanillaOffsetComponent&, struct OffsetsComponent const&, struct ActorDataFlagComponent const&, class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>, class Optional<struct IsHorizontalPoseFlagComponent const>, float, class EntityModifier<struct IsHorizontalPoseFlagComponent>);

// symbol:
// ?_updateHorizontalFlagComponent@VanillaOffsetSystemUtil@@YAXAEAVStrictEntityContext@@AEBUActorDataFlagComponent@@V?$EntityModifier@UIsHorizontalPoseFlagComponent@@@@@Z
MCAPI void
_updateHorizontalFlagComponent(class StrictEntityContext&, struct ActorDataFlagComponent const&, class EntityModifier<struct IsHorizontalPoseFlagComponent>);

// symbol:
// ?getCameraOffset@VanillaOffsetSystemUtil@@YAMAEBUActorDataFlagComponent@@V?$Optional@$$CBV?$FlagComponent@UPlayerIsSleepingFlag@@@@@@V?$Optional@$$CBUIsHorizontalPoseFlagComponent@@@@M@Z
MCAPI float getCameraOffset(
    struct ActorDataFlagComponent const&,
    class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>,
    class Optional<struct IsHorizontalPoseFlagComponent const>,
    float
);
// NOLINTEND

}; // namespace VanillaOffsetSystemUtil
