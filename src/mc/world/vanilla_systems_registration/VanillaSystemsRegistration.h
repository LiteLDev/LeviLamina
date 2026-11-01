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
struct TickingSystemWithInfo;
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

namespace VanillaSystemsRegistration {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::VanillaSystemsRegistration::RegistrationOptions getDefault(
    bool                            isClientSide,
    bool                            connectedToThirdPartyServer,
    ::PlayerMovementSettings const& movementSettings,
    ::BaseGameVersion const&        baseGameVersion,
    ::Experiments const&            experiments
);
#endif

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

#ifdef LL_PLAT_C
MCNAPI void registerBlockPosTrackerSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerClientVariableTickingSystems(
    ::EntitySystems& systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const&,
    ::std::vector<::TickingSystemWithInfo> systems20Hz,
    ::std::vector<::TickingSystemWithInfo> systems5Hz,
    ::std::vector<::TickingSystemWithInfo> systems1Hz
);

MCNAPI void registerEditorPauseFilterSystems(::EntitySystems& systemRegistry);
#endif

MCNAPI void registerMovementInputSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

#ifdef LL_PLAT_C
MCNAPI void registerSharedVanillaPlayerInteractionSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCNAPI void registerTickFilterSystems(::EntitySystems& systemRegistry);

MCNAPI void registerVanillaClientTickingSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);
#endif

MCNAPI void registerVanillaServerTickingSystems(
    ::EntitySystems& systemRegistry,
    ::Bedrock::NotNullNonOwnerPtr<::ILevel const> const,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);
// NOLINTEND

} // namespace VanillaSystemsRegistration
