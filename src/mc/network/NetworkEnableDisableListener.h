#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class NetworkEnableDisableListener {
public:
    // prevent constructor by default
    NetworkEnableDisableListener& operator=(NetworkEnableDisableListener const&);
    NetworkEnableDisableListener(NetworkEnableDisableListener const&);
    NetworkEnableDisableListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkEnableDisableListener();

    // vIndex: 1
    virtual void _onDisable() = 0;

    // vIndex: 2
    virtual void _onEnable() = 0;

    MCAPI explicit NetworkEnableDisableListener(class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform);

    MCAPI void disable();

    MCAPI bool isDisabled() const;

    MCAPI bool isEnabled() const;

    MCAPI void tryEnable();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform);

    MCAPI void dtor$();

    // NOLINTEND
};
