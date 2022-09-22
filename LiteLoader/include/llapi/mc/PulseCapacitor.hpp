/**
 * @file  PulseCapacitor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PulseCapacitor.
 *
 */
class PulseCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PULSECAPACITOR
public:
    class PulseCapacitor& operator=(class PulseCapacitor const &) = delete;
    PulseCapacitor(class PulseCapacitor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PulseCapacitor();
    /**
     * @hash   -1762067111
     * @vftbl  1
     * @symbol ?getStrength@PulseCapacitor@@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @hash   -663251474
     * @vftbl  3
     * @symbol ?setStrength@PulseCapacitor@@UEAAXH@Z
     */
    virtual void setStrength(int);
    /**
     * @hash   691554075
     * @vftbl  6
     * @symbol ?canConsumePowerAnyDirection@PulseCapacitor@@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @hash   1652748366
     * @vftbl  7
     * @symbol ?canConsumerPower@PulseCapacitor@@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @hash   1139167705
     * @vftbl  12
     * @symbol ?allowConnection@PulseCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   -1436912785
     * @vftbl  14
     * @symbol ?evaluate@PulseCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
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
     * @hash   1449383661
     * @vftbl  22
     * @symbol ?getCircuitComponentType@PulseCapacitor@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   -812910704
     * @vftbl  24
     * @symbol ?getPoweroutDirection@PulseCapacitor@@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @hash   -215202731
     * @symbol ??0PulseCapacitor@@QEAA@XZ
     */
    MCAPI PulseCapacitor();

};