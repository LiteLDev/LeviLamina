#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackRequestHandlerSlotInfo {

public:
    // prevent constructor by default
    ItemStackRequestHandlerSlotInfo& operator=(ItemStackRequestHandlerSlotInfo const&) = delete;
    ItemStackRequestHandlerSlotInfo(ItemStackRequestHandlerSlotInfo const&)            = delete;
    ItemStackRequestHandlerSlotInfo()                                                  = delete;

public:
    /**
     * @symbol ??BItemStackRequestHandlerSlotInfo\@\@QEBA_NXZ
     */
    MCAPI operator bool() const; // NOLINT
    /**
     * @symbol ??1ItemStackRequestHandlerSlotInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackRequestHandlerSlotInfo(); // NOLINT
};
