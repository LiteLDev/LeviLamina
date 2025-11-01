#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PurchasePath : int {
    Unknown = -1,
    MinecoinScreen = 0,
    InsufficientFunds = 1,
    RealMoneyButton = 2,
    Redeemed5x5 = 3,
    Realms = 4,
    DurableCatalogOffer = 5,
    MarketplacePass = 6,
    InSessionStoreVisit = 7,
    SwitchLogin = 8,
};
