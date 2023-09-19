#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkIdentifierWithSubId {
public:
    // prevent constructor by default
    NetworkIdentifierWithSubId& operator=(NetworkIdentifierWithSubId const&);
    NetworkIdentifierWithSubId(NetworkIdentifierWithSubId const&);
    NetworkIdentifierWithSubId();
};
