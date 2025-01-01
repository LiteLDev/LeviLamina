#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"

// auto generated forward declare list
// clang-format off
struct FullContainerName;
struct ItemStackNetIdVariant;
// clang-format on

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
    MCAPI ~ItemStackRequestSlotInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
