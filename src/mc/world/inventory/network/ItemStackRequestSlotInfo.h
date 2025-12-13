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
    // member functions
    // NOLINTBEGIN
    MCNAPI_S ItemStackRequestSlotInfo();

    MCNAPI ~ItemStackRequestSlotInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
