#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class NetworkEnableDisableListener {
public:
    // prevent constructor by default
    NetworkEnableDisableListener& operator=(NetworkEnableDisableListener const&);
    NetworkEnableDisableListener(NetworkEnableDisableListener const&);
    NetworkEnableDisableListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NetworkEnableDisableListener@@UEAA@XZ
    virtual ~NetworkEnableDisableListener();

    // vIndex: 1, symbol: ?_onDisable@RakNetServerLocator@@EEAAXXZ
    virtual void _onDisable() = 0;

    // vIndex: 2, symbol: ?_onEnable@RakNetServerLocator@@EEAAXXZ
    virtual void _onEnable() = 0;

    // symbol: ??0NetworkEnableDisableListener@@QEAA@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    MCAPI explicit NetworkEnableDisableListener(class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform);

    // symbol: ?disable@NetworkEnableDisableListener@@QEAAXXZ
    MCAPI void disable();

    // symbol: ?isDisabled@NetworkEnableDisableListener@@QEBA_NXZ
    MCAPI bool isDisabled() const;

    // symbol: ?isEnabled@NetworkEnableDisableListener@@QEBA_NXZ
    MCAPI bool isEnabled() const;

    // symbol: ?isNetworkAllowed@NetworkEnableDisableListener@@QEBA_NXZ
    MCAPI bool isNetworkAllowed() const;

    // symbol: ?isUninitialized@NetworkEnableDisableListener@@QEBA_NXZ
    MCAPI bool isUninitialized() const;

    // symbol: ?tryEnable@NetworkEnableDisableListener@@QEAAXXZ
    MCAPI void tryEnable();

    // symbol: ?uninitialize@NetworkEnableDisableListener@@QEAAXXZ
    MCAPI void uninitialize();

    // NOLINTEND
};
