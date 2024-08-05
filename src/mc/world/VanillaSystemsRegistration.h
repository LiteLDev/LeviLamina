#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

namespace VanillaSystemsRegistration {
// NOLINTBEGIN
MCAPI void
registerActorAiStepSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void
registerActorMoveSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void
registerActorMovementTickSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void
registerActorNormalTickSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void registerActorPreTravelSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void
registerActorTravelSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void
registerBlockPosTrackerSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void
registerEntityInsideSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void
registerEnvironmentSensingSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void
registerMinecartMovementSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void
registerMovementInputSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void
registerPostMovementSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void
registerPreMoveTravelVelocitySystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void
registerResetMovementValuesSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void registerSharedVanillaPlayerInteractionSystems(class EntitySystems& systemRegistry);

MCAPI void registerTickFilterSystems(class EntitySystems& systemRegistry);

MCAPI void registerVanillaServerTickingSystems(
    class EntitySystems&                                          systemRegistry,
    Bedrock::NotNullNonOwnerPtr<class ILevel const>               level,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void
registerVehicleManagementSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);
// NOLINTEND

}; // namespace VanillaSystemsRegistration
