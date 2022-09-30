/**
 * @file  TransportInterfaceComposite.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNetInstance.hpp"
#include "RakPeerHelper.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TransportInterfaceComposite {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSPORTINTERFACECOMPOSITE
public:
    class TransportInterfaceComposite& operator=(class TransportInterfaceComposite const &) = delete;
    TransportInterfaceComposite(class TransportInterfaceComposite const &) = delete;
#endif

public:
    /**
     * @symbol ??0TransportInterfaceComposite@@QEAA@XZ
     */
    MCAPI TransportInterfaceComposite();
    /**
     * @symbol ?disable@TransportInterfaceComposite@@QEAAXXZ
     */
    MCAPI void disable();
    /**
     * @symbol ?getActiveInstance@TransportInterfaceComposite@@QEBA?AV?$shared_ptr@VTransportInterface@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class TransportInterface> getActiveInstance() const;
    /**
     * @symbol ?getNetherNetInstance@TransportInterfaceComposite@@QEAA?AV?$shared_ptr@UNetherNetInstance@@@std@@W4TransportLayer@@@Z
     */
    MCAPI class std::shared_ptr<struct NetherNetInstance> getNetherNetInstance(enum class TransportLayer);
    /**
     * @symbol ?getRakNetInstance@TransportInterfaceComposite@@QEAA?AV?$shared_ptr@VRakNetInstance@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class RakNetInstance> getRakNetInstance();
    /**
     * @symbol ?hasNetherNetInstance@TransportInterfaceComposite@@QEAA_NW4TransportLayer@@@Z
     */
    MCAPI bool hasNetherNetInstance(enum class TransportLayer);
    /**
     * @symbol ?initializeRakNetInstance@TransportInterfaceComposite@@QEAAXAEAVConnectionCallbacks@RakNetInstance@@AEAVIPSupportInterface@RakPeerHelper@@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
     */
    MCAPI void initializeRakNetInstance(class RakNetInstance::ConnectionCallbacks &, class RakPeerHelper::IPSupportInterface &, class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @symbol ?setActiveTransportLayer@TransportInterfaceComposite@@QEAAXW4TransportLayer@@@Z
     */
    MCAPI void setActiveTransportLayer(enum class TransportLayer);
    /**
     * @symbol ?tryEnable@TransportInterfaceComposite@@QEAAXXZ
     */
    MCAPI void tryEnable();
    /**
     * @symbol ?update@TransportInterfaceComposite@@QEAAXXZ
     */
    MCAPI void update();
    /**
     * @symbol ??1TransportInterfaceComposite@@QEAA@XZ
     */
    MCAPI ~TransportInterfaceComposite();

};