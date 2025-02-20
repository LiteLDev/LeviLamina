#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct CameraOutOfRangeWarningSentComponent;
struct ServerActiveCameraComponent;
struct StateVectorComponent;
// clang-format on

namespace CameraOutOfRangeWarningSystem {
// functions
// NOLINTBEGIN
MCAPI void _tick(
    ::StrictEntityContext const&                             entity,
    ::StateVectorComponent const&                            stateVectorComponent,
    ::ServerActiveCameraComponent const&                     serverActiveCameraComponent,
    ::EntityModifier<::CameraOutOfRangeWarningSentComponent> modifier,
    ::IConstBlockSource const&                               region
);
// NOLINTEND

} // namespace CameraOutOfRangeWarningSystem
