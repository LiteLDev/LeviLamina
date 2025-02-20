#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/LogSeverity.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { struct NetherNetTransportServerConfiguration; }
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class ITransportFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITransportFactory() = default;

    // vIndex: 1
    virtual void setLoggingLevel(::NetherNet::LogSeverity) = 0;

    // vIndex: 2
    virtual void suspendTransport() = 0;

    // vIndex: 3
    virtual void resumeTransport() = 0;

    // vIndex: 4
    virtual ::NetherNet::INetherNetTransportInterface*
    createTransportInterface(::NetherNet::NetworkID, ::NetherNet::NetherNetTransportServerConfiguration*, ::NetherNet::INetherNetTransportInterfaceCallbacks*) = 0;

    // vIndex: 5
    virtual void destroyTransportInterface(::NetherNet::INetherNetTransportInterface*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
