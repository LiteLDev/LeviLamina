#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_20/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_20_30/item/ItemDeprecatedComponentData.h"
#include "mc/world/item/components/ComponentItemComponentData_v1_20_30.h"

struct ComponentItemData_v1_20_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_20::ItemDescription>              mDescription;
    ::ll::TypedStorage<8, 2304, ::ComponentItemComponentData_v1_20_30>               mItemComponents;
    ::ll::TypedStorage<8, 104, ::SharedTypes::v1_20_30::ItemDeprecatedComponentData> mDeprecatedItemComponents;
    // NOLINTEND
};
