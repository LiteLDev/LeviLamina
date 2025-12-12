#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ShowStoreOfferRedirectType.h"
#include "mc/platform/UUID.h"

struct ShowStoreOfferPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                 mOfferId;
    ::ll::TypedStorage<1, 1, ::ShowStoreOfferRedirectType> mRedirectType;
    // NOLINTEND
};
