#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_0/item/ItemDescription.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"

struct ComponentItemData_v1_20 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_20_0::ItemDescription>       mDescription;
    ::ll::TypedStorage<8, 16, ::IItemComponentLegacyFactoryData::Components> mItemComponents;
    // NOLINTEND
};
