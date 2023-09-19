#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct RealmId {
public:
    // prevent constructor by default
    RealmId& operator=(RealmId const&);
    RealmId(RealmId const&);
    RealmId();
};

}; // namespace Realms
