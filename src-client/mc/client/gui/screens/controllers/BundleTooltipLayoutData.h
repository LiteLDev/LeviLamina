#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

struct BundleTooltipLayoutData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> numRows;
    ::ll::TypedStorage<4, 4, int> numCols;
    ::ll::TypedStorage<4, 4, int> numShownItemStacks;
    ::ll::TypedStorage<4, 4, int> numHiddenItemStacks;
    ::ll::TypedStorage<4, 4, int> hiddenItemsCount;
    ::ll::TypedStorage<8, 56, ::brstd::flat_map<int, int, ::std::less<int>, ::std::vector<int>, ::std::vector<int>>>
        itemOrderToContainerIndexMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BundleTooltipLayoutData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
