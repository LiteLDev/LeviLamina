#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/world/item/components/ComponentItemDataAll_Latest.h"

struct ItemComprehensiveLoadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Json::Value>                   mItemJson;
    ::ll::TypedStorage<8, 2552, ::ComponentItemDataAll_Latest> mPuvResult;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemComprehensiveLoadResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
