#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class SimpleSparseContainer;
struct ItemStackNetIdTag;
// clang-format on

struct ItemStackRequestHandlerSlotInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName const> mOpenContainerNetId;
    ::ll::TypedStorage<1, 1, uchar const>                mRequestSlot;
    ::ll::TypedStorage<1, 1, uchar const>                mSlot;
    ::ll::TypedStorage<8, 8, ::ItemStack const&>         mOldItem;
    ::ll::TypedStorage<4, 4, ::ItemStackNetId const>     mOldServerNetId;
    ::ll::TypedStorage<8, 8, ::SimpleSparseContainer*>   mSparseContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestHandlerSlotInfo& operator=(ItemStackRequestHandlerSlotInfo const&);
    ItemStackRequestHandlerSlotInfo(ItemStackRequestHandlerSlotInfo const&);
    ItemStackRequestHandlerSlotInfo();
};
