/**
 * @file  RemoteConnectorComposite.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RakNetConnector.hpp"
#include "RakPeerHelper.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RemoteConnectorComposite {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOTECONNECTORCOMPOSITE
public:
    class RemoteConnectorComposite& operator=(class RemoteConnectorComposite const &) = delete;
    RemoteConnectorComposite(class RemoteConnectorComposite const &) = delete;
#endif

public:
    /**
     * @symbol  ??0RemoteConnectorComposite\@\@QEAA\@XZ
     */
    MCAPI RemoteConnectorComposite();
    /**
     * @symbol  ?disable\@RemoteConnectorComposite\@\@QEAAXXZ
     */
    MCAPI void disable();
    /**
     * @symbol  ?getActiveConnector\@RemoteConnectorComposite\@\@QEBA?AV?$shared_ptr\@VRemoteConnector\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class RemoteConnector> getActiveConnector() const;
    /**
     * @symbol  ?getNetherNetConnector\@RemoteConnectorComposite\@\@QEBA?AV?$shared_ptr\@UNetherNetConnector\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<struct NetherNetConnector> getNetherNetConnector() const;
    /**
     * @symbol  ?getRakNetConnector\@RemoteConnectorComposite\@\@QEBA?AV?$shared_ptr\@VRakNetConnector\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class RakNetConnector> getRakNetConnector() const;
    /**
     * @symbol  ?hasNetherNetConnector\@RemoteConnectorComposite\@\@QEBA_NXZ
     */
    MCAPI bool hasNetherNetConnector() const;
    /**
     * @symbol  ?initializeRakNetConnector\@RemoteConnectorComposite\@\@QEAAXAEAUConnectionCallbacks\@RakNetConnector\@\@AEAVIPSupportInterface\@RakPeerHelper\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void initializeRakNetConnector(struct RakNetConnector::ConnectionCallbacks &, class RakPeerHelper::IPSupportInterface &, class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @symbol  ?isActiveConnectorSet\@RemoteConnectorComposite\@\@QEBA_NXZ
     */
    MCAPI bool isActiveConnectorSet() const;
    /**
     * @symbol  ?setActiveTransportLayer\@RemoteConnectorComposite\@\@QEAAXW4TransportLayer\@\@\@Z
     */
    MCAPI void setActiveTransportLayer(enum class TransportLayer);
    /**
     * @symbol  ?tryEnable\@RemoteConnectorComposite\@\@QEAAXXZ
     */
    MCAPI void tryEnable();
    /**
     * @symbol  ?update\@RemoteConnectorComposite\@\@QEAAXXZ
     */
    MCAPI void update();
    /**
     * @symbol  ??1RemoteConnectorComposite\@\@QEAA\@XZ
     */
    MCAPI ~RemoteConnectorComposite();

};