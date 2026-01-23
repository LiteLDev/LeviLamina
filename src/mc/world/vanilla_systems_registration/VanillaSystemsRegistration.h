#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class EntitySystems;
class Experiments;
class ILevel;
struct PlayerMovementSettings;
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

namespace VanillaSystemsRegistration {
// functions
// NOLINTBEGIN
MCAPI ::VanillaSystemsRegistration::RegistrationOptions getDefault(
    bool                            isClientSide,
    bool                            connectedToThirdPartyServer,
    ::PlayerMovementSettings const& movementSettings,
    ::BaseGameVersion const&        baseGameVersion,
    ::Experiments const&            experiments
);

MCAPI void registerActorAiStepSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void
registerActorMoveSystems(::EntitySystems& systems, ::VanillaSystemsRegistration::RegistrationOptions const& options);

MCAPI void registerActorMovementTickSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerActorNormalTickSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerActorPreTravelSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerActorTravelSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerBlockPosTrackerSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerEditorPauseFilterSystems(::EntitySystems& systemRegistry);

MCAPI void registerEntityInsideSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerEnvironmentSensingSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerInputIndependentTickSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerMinecartMovementSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerMoveIntentSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerMovementInputSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerMovementTickEligibilitySystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerPostMoveTravelVelocitySystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerPostMovementSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerPreMoveTravelVelocitySystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerResetMovementValuesSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerSharedVanillaPlayerInteractionSystems(::EntitySystems& systemRegistry);

MCAPI void registerTickFilterSystems(::EntitySystems& systemRegistry);

MCAPI void registerTravelEligibilitySystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI_C void registerVanillaClientTickingSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerVanillaServerRuntimeInitializers(
    ::EntitySystems&                                         systems,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerVanillaServerTickingSystems(
    ::EntitySystems& systemRegistry,
    ::Bedrock::NotNullNonOwnerPtr<::ILevel const>,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerVehicleManagementSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);
// NOLINTEND

} // namespace VanillaSystemsRegistration
