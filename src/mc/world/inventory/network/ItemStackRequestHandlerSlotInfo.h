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
    MCAPI explicit operator bool() const;

    MCAPI ~ItemStackRequestHandlerSlotInfo();

    // NOLINTEND
};
