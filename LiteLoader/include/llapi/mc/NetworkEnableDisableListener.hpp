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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_onDisable\@ServerLocator\@\@EEAAXXZ
     */
    virtual void _onDisable() = 0;
    /**
     * @vftbl 2
     * @symbol ?_onEnable\@ServerLocator\@\@EEAAXXZ
     */
    virtual void _onEnable() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKENABLEDISABLELISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkEnableDisableListener();
#endif
    /**
     * @symbol ??0NetworkEnableDisableListener\@\@QEAA\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI NetworkEnableDisableListener(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @symbol ?disable\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void disable();
    /**
     * @symbol ?isDisabled\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isDisabled() const;
    /**
     * @symbol ?isEnabled\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isEnabled() const;
    /**
     * @symbol ?tryEnable\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void tryEnable();

};
