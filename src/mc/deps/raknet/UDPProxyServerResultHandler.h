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
    // virtual functions
    // NOLINTBEGIN
    virtual ~UDPProxyServerResultHandler() = default;

    virtual void OnLoginSuccess(::RakNet::RakString, ::RakNet::UDPProxyServer*) = 0;

    virtual void OnAlreadyLoggedIn(::RakNet::RakString, ::RakNet::UDPProxyServer*) = 0;

    virtual void OnNoPasswordSet(::RakNet::RakString, ::RakNet::UDPProxyServer*) = 0;

    virtual void OnWrongPassword(::RakNet::RakString, ::RakNet::UDPProxyServer*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
