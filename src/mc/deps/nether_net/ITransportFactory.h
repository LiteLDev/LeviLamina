#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/LogSeverity.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct TransportConfiguration; }
// clang-format on

namespace NetherNet {

class ITransportFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITransportFactory() = default;

    virtual void setLoggingLevel(::NetherNet::LogSeverity) = 0;

    virtual void suspendTransport() = 0;

    virtual void resumeTransport() = 0;

    virtual ::NetherNet::INetherNetTransportInterface* createTransportInterface(
        ::NetherNet::NetworkID,
        ::NetherNet::TransportConfiguration*,
        ::NetherNet::INetherNetTransportInterfaceCallbacks*
    ) = 0;

    virtual void destroyTransportInterface(::NetherNet::INetherNetTransportInterface*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
