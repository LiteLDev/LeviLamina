#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_20/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_20_40/item/ItemDeprecatedComponentData.h"
#include "mc/world/item/components/ComponentItemComponentData_v1_20_40.h"

struct ComponentItemData_v1_20_40 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_20::ItemDescription>              mDescription;
    ::ll::TypedStorage<8, 1808, ::ComponentItemComponentData_v1_20_40>               mItemComponents;
    ::ll::TypedStorage<8, 768, ::SharedTypes::v1_20_40::ItemDeprecatedComponentData> mDeprecatedItemComponents;
    // NOLINTEND
};
