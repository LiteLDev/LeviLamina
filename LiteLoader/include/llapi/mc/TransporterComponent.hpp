/**
 * @file  MC/TransporterComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TransporterComponent.
 *
 */
class TransporterComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSPORTERCOMPONENT
public:
    class TransporterComponent& operator=(class TransporterComponent const &) = delete;
    TransporterComponent(class TransporterComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TransporterComponent();
    /**
     * @hash   -104082032
     * @vftbl  7
     * @symbol ?canConsumerPower@TransporterComponent@@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @hash   -2096929307
     * @vftbl  11
     * @symbol ?addSource@TransporterComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   -1239181673
     * @vftbl  12
     * @symbol ?allowConnection@TransporterComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   -1754180287
     * @vftbl  14
     * @symbol ?evaluate@TransporterComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   -1252857510
     * @vftbl  15
     * @symbol ?cacheValues@TransporterComponent@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   -1514469057
     * @vftbl  22
     * @symbol ?getCircuitComponentType@TransporterComponent@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   -136003261
     * @symbol ??0TransporterComponent@@QEAA@XZ
     */
    MCAPI TransporterComponent();

};