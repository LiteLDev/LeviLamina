#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

namespace Realms {

struct RealmId : public ::NewType<int64> {
public:
    // prevent constructor by default
    RealmId& operator=(RealmId const&);
    RealmId(RealmId const&);
    RealmId();
};

} // namespace Realms
