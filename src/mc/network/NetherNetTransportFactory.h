#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { struct NetworkID; }
// clang-format on

class NetherNetTransportFactory {
public:
    // prevent constructor by default
    NetherNetTransportFactory& operator=(NetherNetTransportFactory const&);
    NetherNetTransportFactory(NetherNetTransportFactory const&);
    NetherNetTransportFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NetherNetTransportFactory@@UEAA@XZ
    virtual ~NetherNetTransportFactory();

    // vIndex: 1, symbol:
    // ?createTransport@NetherNetTransportFactory@@UEBA?AV?$unique_ptr@VINetherNetTransportInterface@NetherNet@@V?$function@$$A6AXPEAVINetherNetTransportInterface@NetherNet@@@Z@std@@@std@@AEBUNetworkID@NetherNet@@PEAVINetherNetTransportInterfaceCallbacks@5@@Z
    virtual std::unique_ptr<
        class NetherNet::INetherNetTransportInterface,
        std::function<void(class NetherNet::INetherNetTransportInterface*)>>
    createTransport(struct NetherNet::NetworkID const&, class NetherNet::INetherNetTransportInterfaceCallbacks*) const;

    // NOLINTEND
};
