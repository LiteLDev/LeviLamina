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
    ::ll::TypedStorage<4, 12, ::FullContainerName>     mFullContainerName;
    ::ll::TypedStorage<1, 1, uchar>                    mSlot;
    ::ll::TypedStorage<4, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestSlotInfo() = delete;

    ContainerEnumName     mOpenContainerNetId; // this+0x0
    uchar                 mSlot;               // this+0x1
    ItemStackNetIdVariant mNetIdVariant;       // this+0x8
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
