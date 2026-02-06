#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InventoryTabIndex : uint {
    Owned             = 0,
    RealmsPlusCurrent = 1,
    RealmsPlusRemoved = 2,
    SearchTabsCount   = 3,
    Subscriptions     = 3,
    InventoryTabCount = 4,
    Invalid           = 5,
};
