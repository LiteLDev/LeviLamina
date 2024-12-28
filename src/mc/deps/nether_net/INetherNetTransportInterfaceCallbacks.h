#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class INetherNetTransportInterfaceCallbacks {
public:
    // prevent constructor by default
    INetherNetTransportInterfaceCallbacks& operator=(INetherNetTransportInterfaceCallbacks const&);
    INetherNetTransportInterfaceCallbacks(INetherNetTransportInterfaceCallbacks const&);
    INetherNetTransportInterfaceCallbacks();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint*) = 0;

    // vIndex: 1
    virtual bool OnSessionRequested(::NetherNet::NetworkID, uint64) = 0;

    // vIndex: 2
    virtual void OnSessionOpen(::NetherNet::NetworkID, uint64) = 0;

    // vIndex: 3
    virtual void OnSessionClose(::NetherNet::NetworkID, uint64, ::NetherNet::ESessionError) = 0;

    // vIndex: 4
    virtual void OnSpopViolation() = 0;

    // vIndex: 5
    virtual void OnBroadcastResponseReceived(::NetherNet::NetworkID, void const*, int) = 0;

    // vIndex: 6
    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void*, int*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
