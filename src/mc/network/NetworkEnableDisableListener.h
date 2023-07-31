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
