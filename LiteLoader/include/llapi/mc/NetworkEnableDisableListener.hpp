/**
 * @file  MC/NetworkEnableDisableListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkEnableDisableListener.
 *
 */
class NetworkEnableDisableListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKENABLEDISABLELISTENER
public:
    class NetworkEnableDisableListener& operator=(class NetworkEnableDisableListener const &) = delete;
    NetworkEnableDisableListener(class NetworkEnableDisableListener const &) = delete;
    NetworkEnableDisableListener() = delete;
#endif

public:
    /**
     * @hash   -2053492451
     * @symbol ??0NetworkEnableDisableListener@@QEAA@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
     */
    MCAPI NetworkEnableDisableListener(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @hash   1755497491
     * @symbol ?disable@NetworkEnableDisableListener@@QEAAXXZ
     */
    MCAPI void disable();
    /**
     * @hash   -1091449132
     * @symbol ?isDisabled@NetworkEnableDisableListener@@QEBA_NXZ
     */
    MCAPI bool isDisabled() const;
    /**
     * @hash   -1256188312
     * @symbol ?isEnabled@NetworkEnableDisableListener@@QEBA_NXZ
     */
    MCAPI bool isEnabled() const;
    /**
     * @hash   1360339440
     * @symbol ?isNetworkAllowed@NetworkEnableDisableListener@@QEBA_NXZ
     */
    MCAPI bool isNetworkAllowed() const;
    /**
     * @hash   547837068
     * @symbol ?isUninitialized@NetworkEnableDisableListener@@QEBA_NXZ
     */
    MCAPI bool isUninitialized() const;
    /**
     * @hash   64006403
     * @symbol ?tryEnable@NetworkEnableDisableListener@@QEAAXXZ
     */
    MCAPI void tryEnable();
    /**
     * @hash   -795546459
     * @symbol ?uninitialize@NetworkEnableDisableListener@@QEAAXXZ
     */
    MCAPI void uninitialize();

};