#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakString; }
namespace RakNet { class UDPProxyServer; }
// clang-format on

namespace RakNet {

struct UDPProxyServerResultHandler {
public:
    // prevent constructor by default
    UDPProxyServerResultHandler& operator=(UDPProxyServerResultHandler const&);
    UDPProxyServerResultHandler(UDPProxyServerResultHandler const&);
    UDPProxyServerResultHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UDPProxyServerResultHandler();

    // vIndex: 1
    virtual void OnLoginSuccess(::RakNet::RakString, ::RakNet::UDPProxyServer*) = 0;

    // vIndex: 2
    virtual void OnAlreadyLoggedIn(::RakNet::RakString, ::RakNet::UDPProxyServer*) = 0;

    // vIndex: 3
    virtual void OnNoPasswordSet(::RakNet::RakString, ::RakNet::UDPProxyServer*) = 0;

    // vIndex: 4
    virtual void OnWrongPassword(::RakNet::RakString, ::RakNet::UDPProxyServer*) = 0;
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
};

} // namespace RakNet
