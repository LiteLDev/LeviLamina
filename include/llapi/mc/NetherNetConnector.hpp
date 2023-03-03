/**
 * @file  NetherNetConnector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct NetherNetConnector {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNETCONNECTOR
public:
    struct NetherNetConnector& operator=(struct NetherNetConnector const &) = delete;
    NetherNetConnector(struct NetherNetConnector const &) = delete;
    NetherNetConnector() = delete;
#endif

public:
    /**
     * @symbol  ?enableBroadcastDiscovery\@NetherNetConnector\@\@QEAAXXZ
     */
    MCAPI void enableBroadcastDiscovery();
    /**
     * @symbol  ?setBroadcastRequestCallback\@NetherNetConnector\@\@QEAAX$$QEAV?$function\@$$A6A_NPEAXPEAH\@Z\@std\@\@\@Z
     */
    MCAPI void setBroadcastRequestCallback(class std::function<bool (void *, int *)> &&);
    /**
     * @symbol  ?setBroadcastResponseCallback\@NetherNetConnector\@\@QEAAX$$QEAV?$function\@$$A6AXAEBUNetworkID\@NetherNet\@\@PEBXH\@Z\@std\@\@\@Z
     */
    MCAPI void setBroadcastResponseCallback(class std::function<void (struct NetherNet::NetworkID const &, void const *, int)> &&);

};