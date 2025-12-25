#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ButtonEventType.h"
#include "mc/client/gui/screens/NodeId.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct ContainerScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack const&(::std::string const&, int)>> mGetItemInstance;
    ::ll::TypedStorage<8, 64, ::std::function<void(int, ::std::string const&, int)>>          mAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<uint(::std::string const&)>>                    mGetNameId;
    ::ll::TypedStorage<8, 64, ::std::function<::NodeId(uint, ::ButtonEventType, ::std::string const&, int)>>
                                                       mReceiveEvent;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mLeave;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mCanBeClosedByServer;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenControllerProxyCallbacks& operator=(ContainerScreenControllerProxyCallbacks const&);
    ContainerScreenControllerProxyCallbacks(ContainerScreenControllerProxyCallbacks const&);
    ContainerScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerScreenControllerProxyCallbacks(::ContainerScreenControllerProxyCallbacks&&);

    MCNAPI ~ContainerScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerScreenControllerProxyCallbacks&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
