#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"

// auto generated forward declare list
// clang-format off
struct ItemStackResponseSlotInfo;
// clang-format on

struct ItemStackResponseContainerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName>                        mFullContainerName;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackResponseSlotInfo>> mSlots;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemStackResponseContainerInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
