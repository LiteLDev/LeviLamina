#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

// auto generated forward declare list
// clang-format off
struct ItemStackRequestSlotInfo;
// clang-format on

class ItemStackRequestActionDestroy : public ::ItemStackRequestActionTransferBase {
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemStackRequestActionDestroy();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ItemStackRequestActionDestroy(uchar amount, ::ItemStackRequestSlotInfo const& src);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(uchar amount, ::ItemStackRequestSlotInfo const& src);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
