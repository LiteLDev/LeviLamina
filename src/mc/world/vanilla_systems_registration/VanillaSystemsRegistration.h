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
MCNAPI ::VanillaSystemsRegistration::RegistrationOptions getDefault(
    bool                            movementSettings,
    bool                            baseGameVersion,
    ::PlayerMovementSettings const& experiments,
    ::BaseGameVersion const&        isClientSide,
    ::Experiments const&            connectedToThirdPartyServer
);

MCNAPI void registerActorAiStepSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void
registerActorMoveSystems(::EntitySystems& systems, ::VanillaSystemsRegistration::RegistrationOptions const& options);

MCNAPI void registerActorMovementTickSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerActorNormalTickSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerActorPreTravelSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerActorTravelSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerBlockPosTrackerSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerEditorPauseFilterSystems(::EntitySystems& systemRegistry);

MCNAPI void registerEntityInsideSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerEnvironmentSensingSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerInputIndependentTickSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerMinecartMovementSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerMoveIntentSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerMovementInputSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerMovementTickEligibilitySystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerPostMoveTravelVelocitySystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerPostMovementSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerPreMoveTravelVelocitySystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerResetMovementValuesSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerSharedVanillaPlayerInteractionSystems(::EntitySystems& systemRegistry);

MCNAPI void registerTickFilterSystems(::EntitySystems& systemRegistry);

MCNAPI void registerTravelEligibilitySystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerVanillaServerRuntimeInitializers(
    ::EntitySystems&                                         systems,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerVanillaServerTickingSystems(
    ::EntitySystems&                                         systemRegistry,
    ::Bedrock::NotNullNonOwnerPtr<::ILevel const>            level,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerVehicleManagementSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);
// NOLINTEND

} // namespace VanillaSystemsRegistration
