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
// symbol: ?registerActorAiStepSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerActorAiStepSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol: ?registerActorMoveSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerActorMoveSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol:
// ?registerActorMovementTickSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerActorMovementTickSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol:
// ?registerActorNormalTickSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerActorNormalTickSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol: ?registerActorPreTravelSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void registerActorPreTravelSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

// symbol: ?registerActorTravelSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerActorTravelSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol:
// ?registerBlockPosTrackerSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerBlockPosTrackerSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol: ?registerEntityInsideSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerEntityInsideSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol:
// ?registerEnvironmentSensingSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerEnvironmentSensingSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol:
// ?registerMinecartMovementSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerMinecartMovementSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol: ?registerMovementInputSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerMovementInputSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol: ?registerPostMovementSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerPostMovementSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol:
// ?registerPreMoveTravelVelocitySystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerPreMoveTravelVelocitySystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol:
// ?registerResetMovementValuesSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerResetMovementValuesSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol: ?registerSharedVanillaPlayerInteractionSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@@Z
MCAPI void registerSharedVanillaPlayerInteractionSystems(class EntitySystems& systemRegistry);

// symbol: ?registerTickFilterSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@@Z
MCAPI void registerTickFilterSystems(class EntitySystems& systemRegistry);

// symbol:
// ?registerVanillaServerTickingSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@V?$not_null@V?$NonOwnerPointer@$$CBVILevel@@@Bedrock@@@gsl@@AEBURegistrationOptions@1@@Z
MCAPI void registerVanillaServerTickingSystems(
    class EntitySystems&                                          systemRegistry,
    Bedrock::NotNullNonOwnerPtr<class ILevel const>               level,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

// symbol:
// ?registerVehicleManagementSystems@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@1@@Z
MCAPI void
registerVehicleManagementSystems(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);
// NOLINTEND

}; // namespace VanillaSystemsRegistration
