/**
 * @file  MC/CallbackToken.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   46255944
     * @symbol ??0CallbackToken@@QEAA@V?$weak_ptr@VCallbackTokenCancelState@@@std@@@Z
     */
    MCAPI CallbackToken(class std::weak_ptr<class CallbackTokenCancelState>);
    /**
     * @hash   743733569
     * @symbol ??0CallbackToken@@QEAA@$$QEAV0@@Z
     */
    MCAPI CallbackToken(class CallbackToken &&);
    /**
     * @hash   -237219744
     * @symbol ??0CallbackToken@@QEAA@XZ
     */
    MCAPI CallbackToken();
    /**
     * @hash   -1636760735
     * @symbol ?cancelCallback@CallbackToken@@QEAAXXZ
     */
    MCAPI void cancelCallback();
    /**
     * @hash   1517326108
     * @symbol ??4CallbackToken@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class CallbackToken & operator=(class CallbackToken &&);
    /**
     * @hash   -1069742765
     * @symbol ?release@CallbackToken@@QEAAXXZ
     */
    MCAPI void release();
    /**
     * @hash   -1303794112
     * @symbol ??1CallbackToken@@QEAA@XZ
     */
    MCAPI ~CallbackToken();

};