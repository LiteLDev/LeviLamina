#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"

struct NetworkIdentifierWithSubId {
public:
    NetworkIdentifier id{};          // this+0x0
    SubClientId       subClientId{}; // this+0xA0
};
