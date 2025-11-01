#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NegotiationIdentifiers : int {
    NonceRequest = 0,
    NonceReply = 1,
    HashedNonceAndPassword = 2,
};
