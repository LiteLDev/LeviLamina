#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PartyDestinationCookieResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mCookie;
    ::ll::TypedStorage<1, 1, bool>           mAccepted;
    // NOLINTEND
};
