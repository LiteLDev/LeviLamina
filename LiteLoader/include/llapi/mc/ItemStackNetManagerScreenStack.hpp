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
     * @hash   -1048637516
     * @symbol  ?foreachScreen\@ItemStackNetManagerScreenStack\@\@QEAAXV?$function\@$$A6A_NAEAVItemStackNetManagerScreen\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void foreachScreen(class std::function<bool (class ItemStackNetManagerScreen &)>);
    /**
     * @hash   -1785643150
     * @symbol  ?getScreenForRequest\@ItemStackNetManagerScreenStack\@\@QEAAPEAVItemStackNetManagerScreen\@\@AEBVItemStackRequestData\@\@\@Z
     */
    MCAPI class ItemStackNetManagerScreen * getScreenForRequest(class ItemStackRequestData const &);
    /**
     * @hash   -335736476
     * @symbol  ?pop\@ItemStackNetManagerScreenStack\@\@QEAA_NXZ
     */
    MCAPI bool pop();
    /**
     * @hash   979321498
     * @symbol  ?push\@ItemStackNetManagerScreenStack\@\@QEAAPEAVItemStackNetManagerScreen\@\@V?$unique_ptr\@VItemStackNetManagerScreen\@\@U?$default_delete\@VItemStackNetManagerScreen\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ItemStackNetManagerScreen * push(std::unique_ptr<class ItemStackNetManagerScreen>);
    /**
     * @hash   -1073733715
     * @symbol  ?size\@ItemStackNetManagerScreenStack\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @hash   -762681135
     * @symbol  ?top\@ItemStackNetManagerScreenStack\@\@QEAAPEAVItemStackNetManagerScreen\@\@XZ
     */
    MCAPI class ItemStackNetManagerScreen * top();
    /**
     * @hash   1429315659
     * @symbol  ?top\@ItemStackNetManagerScreenStack\@\@QEBAPEBVItemStackNetManagerScreen\@\@XZ
     */
    MCAPI class ItemStackNetManagerScreen const * top() const;
    /**
     * @hash   -178034895
     * @symbol  ??1ItemStackNetManagerScreenStack\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackNetManagerScreenStack();

};