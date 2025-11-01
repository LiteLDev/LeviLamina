#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class StunAttributeType : int {
    MappedAddress = 1,
    Username = 6,
    MessageIntegrity = 8,
    ErrorCode = 9,
    UnknownAttributes = 10,
    Realm = 20,
    Nonce = 21,
    XorMappedAddress = 32,
    Software = 32802,
    AlternateServer = 32803,
    Fingerprint = 32808,
    RetransmitCount = 65280,
};

}
