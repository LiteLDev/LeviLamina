#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"

// auto generated forward declare list
// clang-format off
struct AutoPlaceResult;
// clang-format on

struct ItemTransferRequest {
public:
    // ItemTransferRequest inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // ItemTransferRequest inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::SlotData> mSlot;
        ::ll::TypedStorage<4, 4, int>         mAmount;
        ::ll::TypedStorage<4, 4, int>         mGroup;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemTransferRequest::Entry>> mInputs;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemTransferRequest::Entry>> mOutputs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void _addOutputsAsDestinations(::std::vector<::AutoPlaceResult>& destinations) const;

    MCAPI void reset();
#endif
    // NOLINTEND
};
