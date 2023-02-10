/**
 * @file  NetherNetTransportFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class NetherNetTransportFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNETTRANSPORTFACTORY
public:
    class NetherNetTransportFactory& operator=(class NetherNetTransportFactory const &) = delete;
    NetherNetTransportFactory(class NetherNetTransportFactory const &) = delete;
    NetherNetTransportFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetherNetTransportFactory();
    /**
     * @vftbl  1
     * @symbol  ?createTransport\@NetherNetTransportFactory\@\@UEBA?AV?$unique_ptr\@VINetherNetTransportInterface\@NetherNet\@\@V?$function\@$$A6AXPEAVINetherNetTransportInterface\@NetherNet\@\@\@Z\@std\@\@\@std\@\@AEBUNetworkID\@NetherNet\@\@PEAVINetherNetTransportInterfaceCallbacks\@5\@\@Z
     */
    virtual class std::unique_ptr<class NetherNet::INetherNetTransportInterface, class std::function<void (class NetherNet::INetherNetTransportInterface *)>> createTransport(struct NetherNet::NetworkID const &, class NetherNet::INetherNetTransportInterfaceCallbacks *) const;
    /**
     * @symbol  ??0NetherNetTransportFactory\@\@QEAA\@AEBUNetworkHandlerToggles\@\@\@Z
     */
    MCAPI NetherNetTransportFactory(struct NetworkHandlerToggles const &);

};