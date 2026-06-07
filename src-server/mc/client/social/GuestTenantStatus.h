#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class GuestTenantStatus : int {
    None                           = 4294967295,
    Allowed                        = 0,
    OwnerDisallowed                = 1,
    GuestTenantServersDisabled     = 2,
    GuestTenantCrossTenantDisabled = 3,
    GuestServerRemoved             = 4,
    GuestServerDisabled            = 5,
};

}
