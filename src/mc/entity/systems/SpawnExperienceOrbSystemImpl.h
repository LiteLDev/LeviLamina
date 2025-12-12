#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class LevelComponent;
class StrictEntityContext;
struct SpawnExperienceOrbRequestQueueComponent;
// clang-format on

namespace SpawnExperienceOrbSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tick(
    ::OptionalGlobal<::SpawnExperienceOrbRequestQueueComponent> spawnExperienceOrbRequestQueueComponent,
    ::ViewT<::StrictEntityContext, ::LevelComponent>            view
);

MCNAPI void
trySpawnExperienceOrbs(::LevelComponent& levelComponent, ::SpawnExperienceOrbRequestQueueComponent& requestComponent);
// NOLINTEND

} // namespace SpawnExperienceOrbSystemImpl
