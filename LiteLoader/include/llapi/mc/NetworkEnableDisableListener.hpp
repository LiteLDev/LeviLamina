/**
 * @file  NetworkEnableDisableListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  ??0NetworkEnableDisableListener\@\@QEAA\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI NetworkEnableDisableListener(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @symbol  ?disable\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void disable();
    /**
     * @symbol  ?isDisabled\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isDisabled() const;
    /**
     * @symbol  ?isEnabled\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isEnabled() const;
    /**
     * @symbol  ?isNetworkAllowed\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isNetworkAllowed() const;
    /**
     * @symbol  ?isUninitialized\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isUninitialized() const;
    /**
     * @symbol  ?tryEnable\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void tryEnable();
    /**
     * @symbol  ?uninitialize\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void uninitialize();

};