#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PartyDestinationCookieIntent.h"

struct SendPartyDestinationCookiePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mCookie;
    ::ll::TypedStorage<1, 1, ::PartyDestinationCookieIntent> mIntent;
    ::ll::TypedStorage<8, 32, ::std::string>                 mDestinationName;
    // NOLINTEND
};
