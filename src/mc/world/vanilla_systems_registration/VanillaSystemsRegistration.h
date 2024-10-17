#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

namespace VanillaSystemsRegistration {
// NOLINTBEGIN
MCAPI void registerActorAiStepSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerActorMoveSystems(
    class EntitySystems&                                          systems,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerActorMovementTickSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerActorNormalTickSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerActorPreTravelSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerActorTravelSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerBlockPosTrackerSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerEntityInsideSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerEnvironmentSensingSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerMinecartMovementSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerMovementInputSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerPostMovementSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerPreMoveTravelVelocitySystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerResetMovementValuesSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerSharedVanillaPlayerInteractionSystems(class EntitySystems& systemRegistry);

MCAPI void registerTickFilterSystems(class EntitySystems& systemRegistry);

MCAPI void registerVanillaServerTickingSystems(
    class EntitySystems&                                          systemRegistry,
    Bedrock::NotNullNonOwnerPtr<class ILevel const>               level,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerVehicleManagementSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);
// NOLINTEND

}; // namespace VanillaSystemsRegistration
