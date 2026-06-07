#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

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
MCAPI void _clientTick(
    ::StrictEntityContext&                            vanillaOffsetComponent,
    ::VanillaOffsetComponent&                         offsetComponent,
    ::OffsetsComponent const&                         actorDataFlag,
    ::ActorDataFlagComponent const&                   isSleepingFlag,
    ::Optional<::PlayerIsSleepingFlagComponent const> isHorizontalFlag,
    ::Optional<::IsHorizontalPoseFlagComponent const> sneakHeight,
    float
);

MCAPI void _serverTick(
    ::StrictEntityContext&                            vanillaOffsetComponent,
    ::VanillaOffsetComponent&                         offsetComponent,
    ::OffsetsComponent const&                         actorDataFlag,
    ::ActorDataFlagComponent const&                   isSleepingFlag,
    ::Optional<::PlayerIsSleepingFlagComponent const> isHorizontalFlag,
    ::Optional<::IsHorizontalPoseFlagComponent const> sneakHeight,
    float
);
// NOLINTEND

} // namespace VanillaOffsetSystemUtil
