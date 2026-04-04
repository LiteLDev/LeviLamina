#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class INetherNetTransportInterfaceCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INetherNetTransportInterfaceCallbacks() = default;

    virtual void OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint*) = 0;

    virtual bool OnSessionRequested(::NetherNet::NetworkID, uint64) = 0;

    virtual void OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId) = 0;

    virtual void OnSessionClose(
        ::NetherNet::NetworkID     networkID,
        uint64                     sessionId,
        ::NetherNet::ESessionError sessionError,
        ::Json::Value              summary
    ) = 0;

    virtual void OnSpopViolation() = 0;

    virtual void
    OnBroadcastResponseReceived(::NetherNet::NetworkID networkID, void const* pApplicationData, int size) = 0;

    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void* pApplicationData, int* pSize) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
