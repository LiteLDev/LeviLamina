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
    RegistrationOptions& operator=(RegistrationOptions const&) = delete;
    RegistrationOptions(RegistrationOptions const&)            = delete;
    RegistrationOptions()                                      = delete;

public:
    /**
     * @symbol ??1RegistrationOptions\@VanillaSystemsRegistration\@\@QEAA\@XZ
     */
    MCAPI ~RegistrationOptions(); // NOLINT
    /**
     * @symbol
     * ?getDefault\@RegistrationOptions\@VanillaSystemsRegistration\@\@SA?AU12\@AEBVExperiments\@\@_NAEBUPlayerMovementSettings\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static struct VanillaSystemsRegistration::RegistrationOptions
    getDefault(class Experiments const&, bool, struct PlayerMovementSettings const&, class BaseGameVersion const&); // NOLINT
};

}; // namespace VanillaSystemsRegistration
