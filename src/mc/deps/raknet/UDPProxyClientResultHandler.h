#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class UDPProxyClient; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

struct UDPProxyClientResultHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UDPProxyClientResultHandler() = default;

    // vIndex: 1
    virtual void OnForwardingSuccess(
        char const*,
        ushort,
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::RakNetGUID,
        ::RakNet::UDPProxyClient*
    ) = 0;

    // vIndex: 2
    virtual void OnForwardingNotification(
        char const*,
        ushort,
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::RakNetGUID,
        ::RakNet::UDPProxyClient*
    ) = 0;

    // vIndex: 3
    virtual void OnNoServersOnline(
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::RakNetGUID,
        ::RakNet::UDPProxyClient*
    ) = 0;

    // vIndex: 4
    virtual void OnRecipientNotConnected(
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::RakNetGUID,
        ::RakNet::UDPProxyClient*
    ) = 0;

    // vIndex: 5
    virtual void OnAllServersBusy(
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::RakNetGUID,
        ::RakNet::UDPProxyClient*
    ) = 0;

    // vIndex: 6
    virtual void OnForwardingInProgress(
        char const*,
        ushort,
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::SystemAddress,
        ::RakNet::RakNetGUID,
        ::RakNet::UDPProxyClient*
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
