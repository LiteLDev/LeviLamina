#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"

struct NetworkIdentifierWithSubId {
public:
    NetworkIdentifier mIdentifier{};  // this+0x0
    SubClientId       mSubClientId{}; // this+0xA0
};
