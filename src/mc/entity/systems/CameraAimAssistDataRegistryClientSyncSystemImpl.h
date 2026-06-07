#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class CameraAimAssistDataRegistryComponent;
class CameraAimAssistRegistryComponent;
class LevelComponent;
class StrictEntityContext;
struct CameraAimAssistDataRegistryDirtyComponent;
// clang-format on

namespace CameraAimAssistDataRegistryClientSyncSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tick(
    ::StrictEntityContext const&                                   entity,
    ::LevelComponent&                                              levelComponent,
    ::CameraAimAssistDataRegistryComponent&                        aimAssistDataRegistry,
    ::CameraAimAssistRegistryComponent&                            aimAssistRegistry,
    ::CameraAimAssistDataRegistryDirtyComponent const&             registryDirtyComponent,
    ::EntityModifier<::CameraAimAssistDataRegistryDirtyComponent>& modifier
);
// NOLINTEND

} // namespace CameraAimAssistDataRegistryClientSyncSystemImpl
