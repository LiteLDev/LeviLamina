#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
struct PlayerMovementSettings;
// clang-format on

namespace VanillaSystemsRegistration {

struct RegistrationOptions {
public:
    // prevent constructor by default
    RegistrationOptions& operator=(RegistrationOptions const&);
    RegistrationOptions(RegistrationOptions const&);
    RegistrationOptions();

public:
    // NOLINTBEGIN
    MCAPI ~RegistrationOptions();

    MCAPI static struct VanillaSystemsRegistration::RegistrationOptions getDefault(
        class Experiments const&             experiments,
        bool                                 isClientSide,
        bool                                 connectedToThirdPartyServer,
        struct PlayerMovementSettings const& movementSettings,
        class BaseGameVersion const&         baseGameVersion
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace VanillaSystemsRegistration
