#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class NetworkEnableDisableListener {

public:
    // prevent constructor by default
    NetworkEnableDisableListener& operator=(NetworkEnableDisableListener const&) = delete;
    NetworkEnableDisableListener(NetworkEnableDisableListener const&)            = delete;
    NetworkEnableDisableListener()                                               = delete;

public:
    // NOLINTBEGIN
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
    MCAPI NetworkEnableDisableListener(class Bedrock::NonOwnerPointer<class AppPlatform> const&);
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
     * @symbol ?isNetworkAllowed\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isNetworkAllowed() const;
    /**
     * @symbol ?isUninitialized\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isUninitialized() const;
    /**
     * @symbol ?tryEnable\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void tryEnable();
    /**
     * @symbol ?uninitialize\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void uninitialize();
    // NOLINTEND
};
