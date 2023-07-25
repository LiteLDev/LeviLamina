#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackRequestHandlerSlotInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTHANDLERSLOTINFO
public:
    ItemStackRequestHandlerSlotInfo& operator=(ItemStackRequestHandlerSlotInfo const&) = delete;
    ItemStackRequestHandlerSlotInfo(ItemStackRequestHandlerSlotInfo const&)            = delete;
    ItemStackRequestHandlerSlotInfo()                                                  = delete;
#endif

public:
    /**
     * @symbol ??BItemStackRequestHandlerSlotInfo\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @symbol ??1ItemStackRequestHandlerSlotInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackRequestHandlerSlotInfo();
};
