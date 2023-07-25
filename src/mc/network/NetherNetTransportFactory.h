#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { struct NetworkID; }
// clang-format on

class NetherNetTransportFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNETTRANSPORTFACTORY
public:
    NetherNetTransportFactory& operator=(NetherNetTransportFactory const&) = delete;
    NetherNetTransportFactory(NetherNetTransportFactory const&)            = delete;
    NetherNetTransportFactory()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?createTransport\@NetherNetTransportFactory\@\@UEBA?AV?$unique_ptr\@VINetherNetTransportInterface\@NetherNet\@\@V?$function\@$$A6AXPEAVINetherNetTransportInterface\@NetherNet\@\@\@Z\@std\@\@\@std\@\@AEBUNetworkID\@NetherNet\@\@PEAVINetherNetTransportInterfaceCallbacks\@5\@\@Z
     */
    virtual class std::unique_ptr<
        class NetherNet::INetherNetTransportInterface,
        class std::function<void(class NetherNet::INetherNetTransportInterface*)>>
    createTransport(struct NetherNet::NetworkID const&, class NetherNet::INetherNetTransportInterfaceCallbacks*) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERNETTRANSPORTFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetherNetTransportFactory();
#endif
    /**
     * @symbol ??0NetherNetTransportFactory\@\@QEAA\@AEBUNetworkSystemToggles\@\@\@Z
     */
    MCAPI NetherNetTransportFactory(struct NetworkSystemToggles const&);
};
