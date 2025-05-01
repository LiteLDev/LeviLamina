#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct IsHorizontalPoseFlagComponent;
struct OffsetsComponent;
struct PlayerIsSleepingFlagComponent;
struct VanillaOffsetComponent;
// clang-format on

namespace VanillaOffsetSystemUtil {
// functions
// NOLINTBEGIN
MCNAPI void _clientTick(
    ::StrictEntityContext&                            entity,
    ::VanillaOffsetComponent&                         vanillaOffsetComponent,
    ::OffsetsComponent const&                         offsetComponent,
    ::ActorDataFlagComponent const&                   actorDataFlag,
    ::Optional<::PlayerIsSleepingFlagComponent const> isSleepingFlag,
    ::Optional<::IsHorizontalPoseFlagComponent const> isHorizontalFlag,
    float                                             sneakHeight,
    ::EntityModifier<::IsHorizontalPoseFlagComponent> modifier
);

MCNAPI void _serverTick(
    ::StrictEntityContext&                            entity,
    ::VanillaOffsetComponent&                         vanillaOffsetComponent,
    ::OffsetsComponent const&                         offsetComponent,
    ::ActorDataFlagComponent const&                   actorDataFlag,
    ::Optional<::PlayerIsSleepingFlagComponent const> isSleepingFlag,
    ::Optional<::IsHorizontalPoseFlagComponent const> isHorizontalFlag,
    float                                             sneakHeight,
    ::EntityModifier<::IsHorizontalPoseFlagComponent> modifier
);

MCNAPI void _updateHorizontalFlagComponent(
    ::StrictEntityContext&                            entity,
    ::ActorDataFlagComponent const&                   actorDataFlag,
    ::EntityModifier<::IsHorizontalPoseFlagComponent> modifier
);

MCNAPI float getCameraOffset(
    ::ActorDataFlagComponent const&                   actorDataFlag,
    ::Optional<::PlayerIsSleepingFlagComponent const> isSleepingFlag,
    ::Optional<::IsHorizontalPoseFlagComponent const> isHorizontalFlag,
    float                                             sneakHeight
);
// NOLINTEND

} // namespace VanillaOffsetSystemUtil
