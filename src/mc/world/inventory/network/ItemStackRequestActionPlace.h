#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

// auto generated forward declare list
// clang-format off
struct ItemStackRequestSlotInfo;
// clang-format on

class ItemStackRequestActionPlace : public ::ItemStackRequestActionTransferBase {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionPlace();

#ifdef LL_PLAT_C
    MCNAPI ItemStackRequestActionPlace(
        uchar                             amount,
        ::ItemStackRequestSlotInfo const& src,
        ::ItemStackRequestSlotInfo const& dst
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(uchar amount, ::ItemStackRequestSlotInfo const& src, ::ItemStackRequestSlotInfo const& dst);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
