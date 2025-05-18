#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"

struct ItemStackRequestSlotInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::FullContainerName     mFullContainerName;
    uchar                   mSlot;
    ::ItemStackNetIdVariant mNetIdVariant;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestSlotInfo& operator=(ItemStackRequestSlotInfo const&);
    ItemStackRequestSlotInfo(ItemStackRequestSlotInfo const&);
    ItemStackRequestSlotInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemStackRequestSlotInfo& operator=(::ItemStackRequestSlotInfo&&);

    MCNAPI ~ItemStackRequestSlotInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
