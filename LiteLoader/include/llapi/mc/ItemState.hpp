/**
 * @file  ItemState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemState.
 *
 */
class ItemState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTATE
public:
    class ItemState& operator=(class ItemState const &) = delete;
    ItemState(class ItemState const &) = delete;
    ItemState() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTATE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemState();
#endif
    /**
     * @symbol ?forEachState\@ItemState\@\@SAXV?$function\@$$A6A_NAEBVItemState\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void forEachState(class std::function<bool (class ItemState const &)>);

};
