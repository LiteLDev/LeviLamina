#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FullContainerName;
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackResponseContainerInfo(::ItemStackResponseContainerInfo&&);

    MCAPI ~ItemStackResponseContainerInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStackResponseContainerInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
