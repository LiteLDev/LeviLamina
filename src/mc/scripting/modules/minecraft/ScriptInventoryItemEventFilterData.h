#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/items/ScriptPlayerInventoryType.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInventoryItemEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStack&>                                       mItemStack;
    ::ll::TypedStorage<4, 4, int>                                                mSlot;
    ::ll::TypedStorage<1, 1, bool>                                               mIsQuantityChangedOnly;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptPlayerInventoryType> mPlayerInventoryType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInventoryItemEventFilterData& operator=(ScriptInventoryItemEventFilterData const&);
    ScriptInventoryItemEventFilterData(ScriptInventoryItemEventFilterData const&);
    ScriptInventoryItemEventFilterData();
};

} // namespace ScriptModuleMinecraft::EventFilters
