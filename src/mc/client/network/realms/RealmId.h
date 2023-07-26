#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct RealmId {

public:
    // prevent constructor by default
    RealmId& operator=(RealmId const&) = delete;
    RealmId(RealmId const&)            = delete;
    RealmId()                          = delete;
};

}; // namespace Realms
