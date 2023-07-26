#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStackNetManagerScreenStack {

public:
    // prevent constructor by default
    ItemStackNetManagerScreenStack& operator=(ItemStackNetManagerScreenStack const&) = delete;
    ItemStackNetManagerScreenStack(ItemStackNetManagerScreenStack const&)            = delete;
    ItemStackNetManagerScreenStack()                                                 = delete;

public:
    /**
     * @symbol
     * ?foreachScreen\@ItemStackNetManagerScreenStack\@\@QEAAXV?$function\@$$A6A_NAEAVItemStackNetManagerScreen\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void foreachScreen(class std::function<bool(class ItemStackNetManagerScreen&)>); // NOLINT
};
