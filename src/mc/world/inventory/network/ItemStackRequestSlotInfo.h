#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ItemStackRequestSlotInfo& operator=(ItemStackRequestSlotInfo const&);
    ItemStackRequestSlotInfo(ItemStackRequestSlotInfo const&);
    ItemStackRequestSlotInfo();

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
