#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

    // NOLINTEND
};

}; // namespace VanillaSystemsRegistration
