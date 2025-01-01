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
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackResponseContainerInfo(::ItemStackResponseContainerInfo&&);

    MCAPI explicit ItemStackResponseContainerInfo(::FullContainerName const& openContainerNetId);

    MCAPI ~ItemStackResponseContainerInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStackResponseContainerInfo&&);

    MCAPI void* $ctor(::FullContainerName const& openContainerNetId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
