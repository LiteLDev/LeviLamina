#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShowStoreOfferPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7b4975;
    ::ll::UntypedStorage<1, 1>  mUnk101815;
    // NOLINTEND

public:
    // prevent constructor by default
    ShowStoreOfferPacketPayload& operator=(ShowStoreOfferPacketPayload const&);
    ShowStoreOfferPacketPayload(ShowStoreOfferPacketPayload const&);
    ShowStoreOfferPacketPayload();
};
