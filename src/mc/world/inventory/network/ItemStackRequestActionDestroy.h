#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

// auto generated forward declare list
// clang-format off
struct ItemStackRequestSlotInfo;
// clang-format on

class ItemStackRequestActionDestroy : public ::ItemStackRequestActionTransferBase {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionDestroy();

#ifdef LL_PLAT_C
    MCNAPI ItemStackRequestActionDestroy(uchar amount, ::ItemStackRequestSlotInfo const& src);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

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
