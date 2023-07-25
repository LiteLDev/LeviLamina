#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaSystemsRegistration {

struct RegistrationOptions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASYSTEMSREGISTRATION_REGISTRATIONOPTIONS
public:
    RegistrationOptions& operator=(RegistrationOptions const&) = delete;
    RegistrationOptions(RegistrationOptions const&)            = delete;
    RegistrationOptions()                                      = delete;
#endif

public:
    /**
     * @symbol ??1RegistrationOptions\@VanillaSystemsRegistration\@\@QEAA\@XZ
     */
    MCAPI ~RegistrationOptions();
    /**
     * @symbol
     * ?getDefault\@RegistrationOptions\@VanillaSystemsRegistration\@\@SA?AU12\@AEBVExperiments\@\@_NAEBUPlayerMovementSettings\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static struct VanillaSystemsRegistration::RegistrationOptions
    getDefault(class Experiments const&, bool, struct PlayerMovementSettings const&, class BaseGameVersion const&);
};

}; // namespace VanillaSystemsRegistration
