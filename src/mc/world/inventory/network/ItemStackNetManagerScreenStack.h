#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStackNetManagerScreenStack {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETMANAGERSCREENSTACK
public:
    ItemStackNetManagerScreenStack& operator=(ItemStackNetManagerScreenStack const&) = delete;
    ItemStackNetManagerScreenStack(ItemStackNetManagerScreenStack const&)            = delete;
    ItemStackNetManagerScreenStack()                                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?foreachScreen\@ItemStackNetManagerScreenStack\@\@QEAAXV?$function\@$$A6A_NAEAVItemStackNetManagerScreen\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void foreachScreen(class std::function<bool(class ItemStackNetManagerScreen&)>);
};
