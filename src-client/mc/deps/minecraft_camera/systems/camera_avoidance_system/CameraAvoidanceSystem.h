#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
struct CameraActivationEvent;
struct TickingSystemWithInfo;
// clang-format on

namespace CameraAvoidanceSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem(bool activeCamerasOnly);

MCNAPI void startAvoidance(::EntityRegistry&, ::CameraActivationEvent const& event);
// NOLINTEND

} // namespace CameraAvoidanceSystem
