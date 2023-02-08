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
     * @hash   1439800957
     * @symbol  ??0NetworkEnableDisableListener\@\@QEAA\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI NetworkEnableDisableListener(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @hash   953823603
     * @symbol  ?disable\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void disable();
    /**
     * @hash   -1893107644
     * @symbol  ?isDisabled\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isDisabled() const;
    /**
     * @hash   -2057846824
     * @symbol  ?isEnabled\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isEnabled() const;
    /**
     * @hash   558680928
     * @symbol  ?isNetworkAllowed\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isNetworkAllowed() const;
    /**
     * @hash   -253806068
     * @symbol  ?isUninitialized\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isUninitialized() const;
    /**
     * @hash   -737636733
     * @symbol  ?tryEnable\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void tryEnable();
    /**
     * @hash   -1597189595
     * @symbol  ?uninitialize\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void uninitialize();

};