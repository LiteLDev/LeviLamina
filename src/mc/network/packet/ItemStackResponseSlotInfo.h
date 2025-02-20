#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
struct ItemStackNetIdTag;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

struct ItemStackResponseSlotInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                mRequestedSlot;
    ::ll::TypedStorage<1, 1, uchar>                                mSlot;
    ::ll::TypedStorage<1, 1, uchar>                                mAmount;
    ::ll::TypedStorage<4, 4, ::ItemStackNetId>                     mItemStackNetId;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mCustomName;
    ::ll::TypedStorage<2, 2, short>                                mDurabilityCorrection;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackResponseSlotInfo& operator=(ItemStackResponseSlotInfo const&);
    ItemStackResponseSlotInfo(ItemStackResponseSlotInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackResponseSlotInfo(::ItemStackResponseSlotInfo&&);

    MCAPI ~ItemStackResponseSlotInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStackResponseSlotInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
