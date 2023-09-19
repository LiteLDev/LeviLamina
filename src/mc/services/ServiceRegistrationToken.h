#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class ServiceRegistrationToken {
public:
    // prevent constructor by default
    ServiceRegistrationToken& operator=(ServiceRegistrationToken const&);
    ServiceRegistrationToken(ServiceRegistrationToken const&);
    ServiceRegistrationToken();
};
