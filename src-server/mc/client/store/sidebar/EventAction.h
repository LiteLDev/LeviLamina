#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sidebar {

enum class EventAction : uint {
    DrCapesTab = 0,
    DrCategories = 1,
    DrCategorySelection = 2,
    DrEmotesTab = 3,
    DrSkinsTab = 4,
    DrSkinsOwned = 5,
    DrSkinsRealmsPlus = 6,
    DrSkinsUnowned = 7,
    DrSubcategorySelection = 8,
    MarketplaceInventory = 9,
    OpenProfileScreen = 10,
    RealmsPlusScreen = 11,
    Realms10pSubscription = 12,
    Realms2pSubscription = 13,
    PageId = 14,
    ProductId = 15,
    PackId = 16,
    Internal = 17,
    External = 18,
    MarketplacePassScreen = 19,
    None = 20,
    Count = 21,
    Invalid = 4294967295,
};

}
