#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestScope.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
struct SlotData;
// clang-format on

struct CreateContainerItemScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SlotData const* const> mSrcSlot;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerController>> mCreatedItemContainerController;
    ::ll::TypedStorage<8, 16, ::ItemStackRequestScope> mItemStackRequestScope;
    // NOLINTEND

};
