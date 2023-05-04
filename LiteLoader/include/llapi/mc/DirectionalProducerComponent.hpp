/**
 * @file  DirectionalProducerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class DirectionalProducerComponent : public ProducerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTIONALPRODUCERCOMPONENT
public:
    class DirectionalProducerComponent& operator=(class DirectionalProducerComponent const &) = delete;
    DirectionalProducerComponent(class DirectionalProducerComponent const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 12
     * @symbol ?allowConnection\@DirectionalProducerComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @symbol ??0DirectionalProducerComponent\@\@QEAA\@XZ
     */
    MCAPI DirectionalProducerComponent();
    /**
     * @symbol ?setAllowedConnections\@DirectionalProducerComponent\@\@QEAAXV?$bitset\@$05\@std\@\@\@Z
     */
    MCAPI void setAllowedConnections(class std::bitset<6>);

};
