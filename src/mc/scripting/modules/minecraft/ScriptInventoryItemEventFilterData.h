#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInventoryItemEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkedadf7;
    ::ll::UntypedStorage<4, 4> mUnk584dcb;
    ::ll::UntypedStorage<1, 1> mUnk3b073b;
    ::ll::UntypedStorage<4, 4> mUnkc309d5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInventoryItemEventFilterData& operator=(ScriptInventoryItemEventFilterData const&);
    ScriptInventoryItemEventFilterData(ScriptInventoryItemEventFilterData const&);
    ScriptInventoryItemEventFilterData();
};

} // namespace ScriptModuleMinecraft::EventFilters
