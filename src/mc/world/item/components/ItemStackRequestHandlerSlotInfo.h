#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackRequestHandlerSlotInfo {
public:
    // prevent constructor by default
    ItemStackRequestHandlerSlotInfo& operator=(ItemStackRequestHandlerSlotInfo const&);
    ItemStackRequestHandlerSlotInfo(ItemStackRequestHandlerSlotInfo const&);
    ItemStackRequestHandlerSlotInfo();

public:
    // NOLINTBEGIN
    // symbol: ??BItemStackRequestHandlerSlotInfo@@QEBA_NXZ
    MCAPI explicit operator bool() const;

    // symbol: ??1ItemStackRequestHandlerSlotInfo@@QEAA@XZ
    MCAPI ~ItemStackRequestHandlerSlotInfo();

    // NOLINTEND
};
