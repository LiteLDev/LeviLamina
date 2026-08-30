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
    virtual ~ITransportFactory();

    virtual void setLoggingLevel(::NetherNet::LogSeverity severity) = 0;

    virtual void suspendTransport() = 0;

    virtual void resumeTransport() = 0;

    virtual ::NetherNet::INetherNetTransportInterface* createTransportInterface(
        ::NetherNet::NetworkID const&                       localUserID,
        ::NetherNet::TransportConfiguration const&          configuration,
        ::NetherNet::INetherNetTransportInterfaceCallbacks* pCallbacks
    ) = 0;

    virtual void destroyTransportInterface(::NetherNet::INetherNetTransportInterface* pSimpleNetworkInterface) = 0;
    // NOLINTEND
};

} // namespace NetherNet
