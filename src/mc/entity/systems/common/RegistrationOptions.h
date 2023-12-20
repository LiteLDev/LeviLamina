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
    // symbol: ??1RegistrationOptions@VanillaSystemsRegistration@@QEAA@XZ
    MCAPI ~RegistrationOptions();

    // symbol:
    // ?getDefault@RegistrationOptions@VanillaSystemsRegistration@@SA?AU12@AEBVExperiments@@_N1AEBUPlayerMovementSettings@@AEBVBaseGameVersion@@@Z
    MCAPI static struct VanillaSystemsRegistration::RegistrationOptions
    getDefault(class Experiments const&, bool, bool, struct PlayerMovementSettings const&, class BaseGameVersion const&);

    // NOLINTEND
};

}; // namespace VanillaSystemsRegistration
