/**
 * @file  CallbackToken.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CallbackToken.
 *
 */
class CallbackToken {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CALLBACKTOKEN
public:
    class CallbackToken& operator=(class CallbackToken const &) = delete;
    CallbackToken(class CallbackToken const &) = delete;
#endif

public:
    /**
     * @symbol  ??0CallbackToken\@\@QEAA\@V?$weak_ptr\@VCallbackTokenCancelState\@\@\@std\@\@\@Z
     */
    MCAPI CallbackToken(class std::weak_ptr<class CallbackTokenCancelState>);
    /**
     * @symbol  ??0CallbackToken\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CallbackToken(class CallbackToken &&);
    /**
     * @symbol  ??0CallbackToken\@\@QEAA\@XZ
     */
    MCAPI CallbackToken();
    /**
     * @symbol  ?cancelCallback\@CallbackToken\@\@QEAAXXZ
     */
    MCAPI void cancelCallback();
    /**
     * @symbol  ??4CallbackToken\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CallbackToken & operator=(class CallbackToken &&);
    /**
     * @symbol  ?release\@CallbackToken\@\@QEAAXXZ
     */
    MCAPI void release();
    /**
     * @symbol  ??1CallbackToken\@\@QEAA\@XZ
     */
    MCAPI ~CallbackToken();

};