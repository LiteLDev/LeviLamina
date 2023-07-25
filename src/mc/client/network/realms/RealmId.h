#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct RealmId {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REALMS_REALMID
public:
    RealmId& operator=(RealmId const&) = delete;
    RealmId(RealmId const&)            = delete;
    RealmId()                          = delete;
#endif

public:
};

}; // namespace Realms
