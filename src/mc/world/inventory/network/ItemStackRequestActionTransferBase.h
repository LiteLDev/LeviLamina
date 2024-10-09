#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/ItemStackRequestSlotInfo.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionTransferBase : public ::ItemStackRequestAction {
public:
    bool                     mIsDstSerialized;
    bool                     mIsAmountSerialized;
    uchar                    mAmount;
    ItemStackRequestSlotInfo mSrc;
    ItemStackRequestSlotInfo mDst;

public:
    // prevent constructor by default
    ItemStackRequestActionTransferBase& operator=(ItemStackRequestActionTransferBase const&);
    ItemStackRequestActionTransferBase(ItemStackRequestActionTransferBase const&);
    ItemStackRequestActionTransferBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionTransferBase();

    MCAPI struct ItemStackRequestSlotInfo const& getSrc() const;

    // NOLINTEND
};
