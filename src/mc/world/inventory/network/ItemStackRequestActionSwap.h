#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

// auto generated forward declare list
// clang-format off
struct ItemStackRequestSlotInfo;
// clang-format on

class ItemStackRequestActionSwap : public ::ItemStackRequestActionTransferBase {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionSwap();

#ifdef LL_PLAT_C
    MCNAPI ItemStackRequestActionSwap(::ItemStackRequestSlotInfo const& src, ::ItemStackRequestSlotInfo const& dst);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ItemStackRequestSlotInfo const& src, ::ItemStackRequestSlotInfo const& dst);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
