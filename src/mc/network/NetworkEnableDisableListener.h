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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKENABLEDISABLELISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkEnableDisableListener(); // NOLINT
#endif
    /**
     * @symbol ??0NetworkEnableDisableListener\@\@QEAA\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI NetworkEnableDisableListener(class Bedrock::NonOwnerPointer<class AppPlatform> const&); // NOLINT
    /**
     * @symbol ?disable\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void disable(); // NOLINT
    /**
     * @symbol ?isDisabled\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isDisabled() const; // NOLINT
    /**
     * @symbol ?isEnabled\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isEnabled() const; // NOLINT
    /**
     * @symbol ?isNetworkAllowed\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isNetworkAllowed() const; // NOLINT
    /**
     * @symbol ?isUninitialized\@NetworkEnableDisableListener\@\@QEBA_NXZ
     */
    MCAPI bool isUninitialized() const; // NOLINT
    /**
     * @symbol ?tryEnable\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void tryEnable(); // NOLINT
    /**
     * @symbol ?uninitialize\@NetworkEnableDisableListener\@\@QEAAXXZ
     */
    MCAPI void uninitialize(); // NOLINT
};
