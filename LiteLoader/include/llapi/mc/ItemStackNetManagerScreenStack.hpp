/**
 * @file  ItemStackNetManagerScreenStack.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackNetManagerScreenStack.
 *
 */
class ItemStackNetManagerScreenStack {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETMANAGERSCREENSTACK
public:
    class ItemStackNetManagerScreenStack& operator=(class ItemStackNetManagerScreenStack const &) = delete;
    ItemStackNetManagerScreenStack(class ItemStackNetManagerScreenStack const &) = delete;
    ItemStackNetManagerScreenStack() = delete;
#endif

public:
    /**
     * @symbol ?foreachScreen\@ItemStackNetManagerScreenStack\@\@QEAAXV?$function\@$$A6A_NAEAVItemStackNetManagerScreen\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void foreachScreen(class std::function<bool (class ItemStackNetManagerScreen &)>);

};
