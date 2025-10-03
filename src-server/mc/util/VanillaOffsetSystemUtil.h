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
MCNAPI void _clientTick(
    ::StrictEntityContext&,
    ::VanillaOffsetComponent&                         vanillaOffsetComponent,
    ::OffsetsComponent const&                         offsetComponent,
    ::ActorDataFlagComponent const&                   actorDataFlag,
    ::Optional<::PlayerIsSleepingFlagComponent const> isSleepingFlag,
    ::Optional<::IsHorizontalPoseFlagComponent const> isHorizontalFlag,
    float                                             sneakHeight
);

MCNAPI void _serverTick(
    ::StrictEntityContext&,
    ::VanillaOffsetComponent&                         vanillaOffsetComponent,
    ::OffsetsComponent const&                         offsetComponent,
    ::ActorDataFlagComponent const&                   actorDataFlag,
    ::Optional<::PlayerIsSleepingFlagComponent const> isSleepingFlag,
    ::Optional<::IsHorizontalPoseFlagComponent const> isHorizontalFlag,
    float                                             sneakHeight
);

MCNAPI float getCameraOffset(
    ::ActorDataFlagComponent const&                   actorDataFlag,
    ::Optional<::PlayerIsSleepingFlagComponent const> isSleepingFlag,
    ::Optional<::IsHorizontalPoseFlagComponent const> isHorizontalFlag,
    float                                             sneakHeight
);
// NOLINTEND

} // namespace VanillaOffsetSystemUtil
