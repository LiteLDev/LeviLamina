#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/items/ScriptPlayerInventoryType.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInventoryItemEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemInstance const*>                              mItemInstance;
    ::ll::TypedStorage<4, 4, int>                                                mSlot;
    ::ll::TypedStorage<1, 1, bool>                                               mIsQuantityChangedOnly;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptPlayerInventoryType> mPlayerInventoryType;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
