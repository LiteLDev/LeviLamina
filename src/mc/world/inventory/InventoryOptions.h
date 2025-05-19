#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/InventoryLayout.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"
#include "mc/world/inventory/InventoryRightTabIndex.h"

struct InventoryOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InventoryLeftTabIndex>  mLeftInventoryTab;
    ::ll::TypedStorage<4, 4, ::InventoryRightTabIndex> mRightInventoryTab;
    ::ll::TypedStorage<1, 1, bool>                     mFiltering;
    ::ll::TypedStorage<4, 4, ::InventoryLayout>        mLayoutInv;
    ::ll::TypedStorage<4, 4, ::InventoryLayout>        mLayoutCraft;
    // NOLINTEND
};
