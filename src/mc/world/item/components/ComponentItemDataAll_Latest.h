#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/legacy/item/ComponentItemData.h"
#include "mc/world/item/components/ComponentItemData_v1_26_0.h"

struct ComponentItemDataAll_Latest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2304, ::ComponentItemData_v1_26_0>             mCerealData;
    ::ll::TypedStorage<8, 264, ::SharedTypes::Legacy::ComponentItemData> mLegacyData;
    ::ll::TypedStorage<8, 24, ::std::optional<::Json::Value>>            mEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDataAll_Latest(ComponentItemDataAll_Latest const&);
    ComponentItemDataAll_Latest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemDataAll_Latest(::ComponentItemDataAll_Latest&&);

    MCAPI ::ComponentItemDataAll_Latest& operator=(::ComponentItemDataAll_Latest const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemDataAll_Latest&&);
    // NOLINTEND
};
