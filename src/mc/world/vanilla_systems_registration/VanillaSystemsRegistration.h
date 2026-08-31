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
#ifdef LL_PLAT_C
MCAPI ::VanillaSystemsRegistration::RegistrationOptions getDefault(
    bool                            isClientSide,
    bool                            connectedToThirdPartyServer,
    ::PlayerMovementSettings const& movementSettings,
    ::BaseGameVersion const&        baseGameVersion,
    ::Experiments const&            experiments
);
#endif

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

#ifdef LL_PLAT_C
MCAPI void registerBlockPosTrackerSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerEditorPauseFilterSystems(::EntitySystems& systemRegistry);

MCAPI void registerSharedVanillaPlayerInteractionSystems(::EntitySystems& systemRegistry);

MCAPI void registerTickFilterSystems(::EntitySystems& systemRegistry);

MCAPI void registerVanillaClientTickingSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);
#endif

MCAPI void registerVanillaServerTickingSystems(
    ::EntitySystems& systemRegistry,
    ::Bedrock::NotNullNonOwnerPtr<::ILevel const> const,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);
// NOLINTEND

} // namespace VanillaSystemsRegistration
