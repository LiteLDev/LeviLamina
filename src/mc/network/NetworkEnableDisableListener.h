#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on

class NetworkEnableDisableListener {
public:
    // NetworkEnableDisableListener inner types define
    enum class State : int {
        Enabled       = 0,
        Disabled      = 1,
        Uninitialized = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkaf3b65;
    ::ll::UntypedStorage<8, 24> mUnk1d223d;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkEnableDisableListener& operator=(NetworkEnableDisableListener const&);
    NetworkEnableDisableListener(NetworkEnableDisableListener const&);
    NetworkEnableDisableListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkEnableDisableListener();

    // vIndex: 1
    virtual void _onDisable() = 0;

    // vIndex: 2
    virtual void _onEnable() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NetworkEnableDisableListener(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);

    MCAPI void disable();

    MCAPI bool isDisabled() const;

    MCAPI bool isEnabled() const;

    MCAPI void tryEnable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
