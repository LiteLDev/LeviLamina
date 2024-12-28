#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelComponent;
class StrictEntityContext;
struct GetAttachPositionViews;
struct SoundEventRequestQueueComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace SoundEventSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo create();

MCAPI void doSoundEventSystem(
    ::StrictEntityContext const&,
    ::LevelComponent&                  level,
    ::SoundEventRequestQueueComponent& requests,
    ::GetAttachPositionViews const&    getAttachPosViews
);
// NOLINTEND

} // namespace SoundEventSystem
