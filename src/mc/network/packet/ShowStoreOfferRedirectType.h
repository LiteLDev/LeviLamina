#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ShowStoreOfferRedirectType : uchar {
    MarketplaceOffer     = 0,
    DressingRoomOffer    = 1,
    ThirdPartyServerPage = 2,
    Count                = 3,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::ShowStoreOfferRedirectType>();
// clang-format on
