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
    // prevent constructor by default
    ItemStackResponseContainerInfo& operator=(ItemStackResponseContainerInfo const&);
    ItemStackResponseContainerInfo(ItemStackResponseContainerInfo const&);
    ItemStackResponseContainerInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackResponseContainerInfo(::ItemStackResponseContainerInfo&&);

    MCNAPI ~ItemStackResponseContainerInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackResponseContainerInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
